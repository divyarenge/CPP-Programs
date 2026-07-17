///////////////////////////////////////////////////////////////////////////////////
////
////    Header Files Inclusion
////
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

///////////////////////////////////////////////////////////////////////////////////
////
////    User Defined Macros
////
//////////////////////////////////////////////////////////////////////////////////

//  Maximum File Size that we allow in the project

#define MAXFILESIZE 50

#define MAXOPENFILES 20

#define MAXINODE 5

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

///////////////////////////////////////////////////////////////////////////////////
////
////    User define Structures
////
//////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////
////
////    Structure Name :    BootBlock
////    Description:        Holds the information to boot the Operating System
////
//////////////////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

///////////////////////////////////////////////////////////////////////////////////
////
////    Structure Name :    SuperBlock
////    Description:        Holds the information about the file System
////
//////////////////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

///////////////////////////////////////////////////////////////////////////////////
////
////    Structure Name :    Inode
////    Description:        Holds the information about file
////
//////////////////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{
    char FileName[20];
    int InodeNumber ;
    int FileSize;
    int ActualFileSize;
    int ReferenceCount;
    int Permission;
    char *Buffer;
    struct Inode *next;    
};

typedef struct Inode INODE;
typedef struct Inode * PINODE;
typedef struct Inode** PPINODE;

///////////////////////////////////////////////////////////////////////////////////
////
////    Structure Name :    FileTable
////    Description:        Holds the information about Opened File
////
//////////////////////////////////////////////////////////////////////////////////

struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;
};

typedef FileTable FILETABLE;
typedef FileTable * PFILETABLE;

///////////////////////////////////////////////////////////////////////////////////
////
////    Structure Name :    UAREA
////    Description:        Holds the information about Process
////
//////////////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};

///////////////////////////////////////////////////////////////////////////////////
////
////    Global Variables or objects used in the project
////
//////////////////////////////////////////////////////////////////////////////////

BootBlock bootobj;
SuperBlock superobj;
UAREA uareaobj;

PINODE head = NULL;

///////////////////////////////////////////////////////////////////////////////////
////
////    Function Name:  InitializeUREA
////    Description:    It is used initailaize UREA members
////    Author:         Divya Raosaheb Renge
////    Date:           13/01/2026
////
//////////////////////////////////////////////////////////////////////////////////

void InitializeUREA()
{
    strcpy(uareaobj.ProcessName,"Myexe");
    
    int i = 0;

    for ( i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Divya CVFS: UAREA Gets initialized Successfully\n");
    
}

///////////////////////////////////////////////////////////////////////////////////
////
////    Function Name:  InitializeuperBlock
////    Description:    It is used to initialize Super Block Members
////    Author:         Divya Raosaheb Renge
////    Date:           13/01/2026
////
//////////////////////////////////////////////////////////////////////////////////

void InitializeSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;
    
    printf("Divya CVFS: Super Block Gets initialized Successfully\n");
}

//////////////////////////////////////////////////////////////////////////////////
////
////    Function Name:  CreateDILB
////    Description:    It is used to create LinkedList of inodes
////    Author:         Divya Raosaheb Renge
////    Date:           13/01/2026
////
//////////////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    int i = 1;
    PINODE newn = NULL;
    PINODE temp = head;
    
    for ( i = 1; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));

        strcpy(newn -> FileName,"\0");
        newn -> InodeNumber = i;
        newn -> FileSize = 0;
        newn -> ActualFileSize = 0;
        newn -> ReferenceCount = 0;
        newn -> Permission = 0;
        newn -> Buffer = NULL;
        newn -> next = NULL;

        if (temp == NULL)       //LL is empty
        {
            head = newn;
            temp = head;
        }
        else                    //LL contains atleast 1 node
        {
            temp -> next = newn;
            temp = temp -> next;
        }
        
    }

    printf("Divya CVFS : DILB created Successfully\n");
    
}

///////////////////////////////////////////////////////////////////////////////////
////
////    Entry Point Function of Project
////
//////////////////////////////////////////////////////////////////////////////////

int main()
{

    return 0;
}