#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include <clocale>
#include <Windows.h>

#define MAX_SIZE 128

using namespace std;

//1
//int main()
//{
//    char s[1];
//    const char* path = "Source2.txt";
//
//    FILE* file;
//    int count = 0;
//    int maxsize = 0;
//    if (fopen_s(&file, path, "r") != NULL)
//    {
//        cout << "The file cannot be opened";
//    }
//    else
//    {
//        while (fscanf(file, "%c", s) == 1)
//        {
//            if (s[0] != 0 && s[0] != '\n' && s[0] != EOF)
//            {
//                count++;
//            }
//            else
//            {
//                if (maxsize < count)
//                {
//                    maxsize = count;
//                }
//                count = 0;
//            }
//        }
//        if (maxsize < count)
//        {
//            maxsize = count;
//        }
//        cout << "В тексте " << maxsize << " таких слов";
//        fclose(file);
//    }
//}

//2
//int main()
//{
//    char s[MAX_SIZE];
//
//    
//    const char* path = "Source2.txt";
//
//    FILE* file;
//    string l;
//    cout << "Введите слово: ";
//    cin >> l;
//    int count = 0;
//    if (fopen_s(&file, path, "r") != NULL)
//    {
//        cout << "The file cannot be opened";
//    }
//    else
//    {
//        while (fscanf(file, "%128s", s) == 1)
//        {
//            if (l == s)
//            {
//                count++;
//            }
//        }
//        cout << "В тексте " << count << " таких слов";
//        fclose(file);
//    }
//        
//}