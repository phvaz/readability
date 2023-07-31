#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// Function prototypes
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
float calculate_index(int letters, int words, int sentences);

int main(void)
{
    // Get input text from user
    string text = get_string("Text: ");

    // Count letters, words, and sentences in the text
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Calculate Coleman-Liau index
    float index = calculate_index(letters, words, sentences);

    // Print the grade level
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", round(index));
    }
}

// Function to count the number of letters in a string
int count_letters(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    return count;
}

// Function to count the number of words in a string
int count_words(string text)
{
    int count = 0;
    bool new_word = true;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]) && new_word)
        {
            count++;
            new_word = false;
        }
        else if (isspace(text[i]))
        {
            new_word = true;
        }
    }
    return count;
}

// Function to count the number of sentences in a string
int count_sentences(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;
}

// Function to calculate the Coleman-Liau index
float calculate_index(int letters, int words, int sentences)
{
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;
    return 0.0588 * L - 0.296 * S - 15.8;
}