#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <Windows.h>

/* 
    * Function Name : LoadData
    * Description : Load words
    * Author : MinGyu Jeong
    * Date : 2019.10.10.
    @ param : 
    @ return : 
    @ uniqueness : NULL is returned on error
*/
char *LoadData(const char *filename, int *size)
{
    FILE *fpFileInfo = fopen(filename, "r");
    if(fpFileInfo == NULL) {
		printf("Err. Failed to Load. (0 : File open failed)\n");
		return NULL;
	}

    int fileSize, readSize;
    char *buffer;

    // 파일 크기 구하기
    fseek(fpFileInfo, 0, SEEK_END);
    fileSize = ftell(fpFileInfo);
    fseek(fpFileInfo, 0, SEEK_SET);

    *size = fileSize;

    buffer = (char *)malloc(fileSize + 1);
    if (buffer == NULL) {
        printf("Err. Failed to Load. (1 : allocate buffer failed)\n");
        return NULL;
    }
    memset(buffer, 0, fileSize + 1);

    fread(buffer, fileSize, 1, fpFileInfo);
    if (0 == strlen(buffer))
    {
        printf("Err. Failed to Load. (2 : read fileDescription failed)\n");
        free(buffer);
        fclose(fpFileInfo);
        return NULL;
    }

    fclose(fpFileInfo);

    return buffer;
}

char *RandomWord(char *buffer)
{
    int random = rand() % 1000;

    buffer = strtok(buffer, "\n");
    if (random == 0)
    {
        return buffer;
    }
    else {
        for (int i = 1; i < random; i++)
        {
            buffer = strtok(NULL, "\n");
        }
    }

    return buffer;
}

int main(int argc , char *argv[])
{
    srand(time(NULL));

    const char *fileName =  "1000Word.txt";
    
    int size;
    char *words = NULL, *saveAddress;
    LoadData(fileName, &size);

    words = (char *) malloc(sizeof(char) * size);
    saveAddress = words;

    words = LoadData(fileName, &size);
    words = RandomWord(words);

    const int LIMIT = 20;
    int cnt = 0, wordLen = 0;
    char *corrrectWord;

    wordLen = strlen(words);
    corrrectWord = (char *)malloc(sizeof(char) * wordLen+1);
    memset(corrrectWord, 0,wordLen+1);
    memset(corrrectWord, '_',wordLen);

    int corrrectFlag;

    int chance = 0;

    do
    {
        system("cls");
        corrrectFlag = 0;
        printf("기회 %d 중 %d회 남음\n", LIMIT, LIMIT-chance);
        printf("%s\n", words);
        printf("%s\n\n", corrrectWord);
        if(LIMIT == chance)
        {
            printf("게임 오버 정답은 %s\n", words);
            break;
        }

        char input = getchar();

        for (int i = 0; i < wordLen; i++)
        {
            if(words[i] == input)
            {
                corrrectWord[i] = input;
                corrrectFlag = 1;
            } 
        }

        if(corrrectFlag == 0)
        {
            chance++;
        }


        getchar();
    } while (strcmp(words, corrrectWord));

    free(saveAddress);
    free(corrrectWord);
    
    return 0;
}