# How to use wfcount

*wfcount* program wrote on C++ for counting files in target folder.
It's returns total quantity of files. You can correct total quantity by argument for taking off some files from counting process. 

> ** This version of *wfcount* works just with Windows OS **
>
> For Linux OS use *fcount* (see repository /fcount)


## Before you start

Compile this project in C++ IDE and put file with name *wfcount.exe* from project folder to some folder if needed. 

Make sure that:
- Your C++ IDE have all needed external libraries
- Compilation went without any errors

## How to run wfcount and use arguments

Some introductory information.

1. You can run *wfcount* by command line:

   ```bash
    C:\..\PATH_TO_FOLDER_WITH\wfcount arg1 arg2
   ```
   where:

      *arg1* - (required) path to folder.

      *arg2* - (non required) number of files for take away from total count.

   For example:

   ```bash
    C:\test\wfcount C:\www\html\backups 2
   ```

   Here *wfcount* (located in *C:\test* folder) counted filed in *C:\www\html\backups* folder and takeoff 2 files (sometimes it happen if in target folder located files which no needed for counting).

   2. Output 

   ```bash
   C:\test\wfcount C:\www\html\backups 2
   3
   C:\_
   ```
      3 (number) - Total qty of files in target *C:\www\html\backups* folder (counted qty = *5*)  and takeoff *2* files.
