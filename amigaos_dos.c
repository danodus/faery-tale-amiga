// amigaos_dos.c
#include "amiga39.h"

#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>

// TODO: Close -- Close an open file
LONG Close(BPTR bfile)
{
    LONG res = TRUE;
    (void)bfile;
    RUNLOGF("%d <= dos.Close(0x%x) STUB", res, bfile);
    return res;
}

// Delay -- Delay a process for a specified time (1/50th sec)
void Delay(int32_t timeout)
{
    (void)timeout;
    RUNLOGF("<= dos.Delay(%d)", timeout);
    SDL_Delay(timeout * 20);        // convert to milliseconds
}

// TODO: IoErr -- Return extra information from the system
LONG IoErr(void)
{
    RUNLOG("0 <= dos.IoErr() STUB");
    return 0;
}

// TODO: LoadSeg -- Scatterload a loadable file into memory
BPTR LoadSeg(STRPTR name)
{
    BPTR res = 0;
    (void)name;
    RUNLOGF("0x%x <= dos.LoadSeg(\"%s\") STUB", res, name);
    return res;
}

// TODO: Lock -- Lock a directory or file
BPTR Lock(STRPTR name, int32_t type)
{
    BPTR res = 0;
    (void)name;
    (void)type;
    RUNLOGF("0x%x <= dos.Lock(\"%s\", 0x%x) STUB", res, name, type);
    return res;
}

// TODO: Open -- Open a file for input or output
BPTR Open(STRPTR name, int32_t accessMode)
{
    BPTR res = 0;
    (void)name;
    (void)accessMode;
    RUNLOGF("0x%x <= dos.Open(\"%s\", 0x%x) STUB", res, name, accessMode);
    return res;
}

// TODO: Read -- Read bytes of data from a file
LONG Read(BPTR file, APTR buffer, int32_t length)
{
    LONG res = 0;
    (void)file;
    (void)buffer;
    (void)length;
    RUNLOGF("%d <= dos.Read(0x%x, %p, %d) STUB", res, file, buffer, length);
    return res;
}

// TODO: Seek -- Set the current position for reading and writing
LONG Seek(BPTR file, int32_t position, int32_t offset)
{
    LONG res = 0;
    (void)file;
    (void)position;
    (void)offset;
    RUNLOGF("%d <= dos.Read(0x%x, %d, %d) STUB", res, file, position, offset);
    return res;
}

// TODO: UnLoadSeg -- Unload a seglist previously loaded by LoadSeg()
void UnLoadSeg(BPTR seglist)
{
    (void)seglist;
    RUNLOGF("<= dos.UnLoadSeg(0x%x) STUB", seglist);
}

// TODO: UnLock -- Unlock a directory or file
void UnLock(BPTR lock)
{
    (void)lock;
    RUNLOGF("<= dos.UnLock(0x%x) STUB", lock);
}

// TODO: Write -- Write bytes of data to a file
LONG Write(BPTR file, APTR buffer, int32_t length)
{
    LONG res = 0;
    (void)file;
    (void)buffer;
    (void)length;
    RUNLOGF("%d <= dos.Write(0x%x, %p, %d) STUB", res, file, buffer, length);
    return res;
}

// EOF