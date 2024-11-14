#ifndef  CLIB_DATATYPES_PROTOS_H
#define  CLIB_DATATYPES_PROTOS_H

/*
**	$VER: datatypes_protos.h 39.4 (27.5.93)
**	Includes Release 40.15
**
**	C prototypes. For use with 32 bit integers only.
**
**	(C) Copyright 1990-1993 Commodore-Amiga, Inc.
**	    All Rights Reserved
*/

#ifndef  EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef  EXEC_LISTS_H
#include <exec/lists.h>
#endif
#ifndef  INTUITION_INTUITION_H
#include <intuition/intuition.h>
#endif
#ifndef  INTUITION_CLASSES_H
#include <intuition/classes.h>
#endif
#ifndef  INTUITION_CLASSUSR_H
#include <intuition/classusr.h>
#endif
#ifndef  INTUITION_GADGETCLASS_H
#include <intuition/gadgetclass.h>
#endif
#ifndef  UTILITY_TAGITEM_H
#include <utility/tagitem.h>
#endif
#ifndef  DATATYPES_DATATYPES_H
#include <datatypes/datatypes.h>
#endif
#ifndef  REXX_STORAGE_H
#include <rexx/storage.h>
#endif
/*--- functions in V40 or higher (Release 3.1) ---*/

/* Public entries */

struct DataType *ObtainDataTypeA( uint32_t type, APTR handle,
	struct TagItem *attrs );
struct DataType *ObtainDataType( uint32_t type, APTR handle, Tag Tag1,
	... );
void ReleaseDataType( struct DataType *dt );
Object *NewDTObjectA( APTR name, struct TagItem *attrs );
Object *NewDTObject( APTR name, Tag Tag1, ... );
void DisposeDTObject( Object *o );
ULONG SetDTAttrsA( Object *o, struct Window *win, struct Requester *req,
	struct TagItem *attrs );
ULONG SetDTAttrs( Object *o, struct Window *win, struct Requester *req,
	Tag Tag1, ... );
ULONG GetDTAttrsA( Object *o, struct TagItem *attrs );
ULONG GetDTAttrs( Object *o, Tag Tag1, ... );
LONG AddDTObject( struct Window *win, struct Requester *req, Object *o,
	int32_t pos );
void RefreshDTObjectA( Object *o, struct Window *win, struct Requester *req,
	struct TagItem *attrs );
void RefreshDTObjects( Object *o, struct Window *win, struct Requester *req,
	Tag Tag1, ... );
ULONG DoAsyncLayout( Object *o, struct gpLayout *gpl );
ULONG DoDTMethodA( Object *o, struct Window *win, struct Requester *req,
	Msg msg );
ULONG DoDTMethod( Object *o, struct Window *win, struct Requester *req,
	uint32_t data, ... );
LONG RemoveDTObject( struct Window *win, Object *o );
ULONG *GetDTMethods( Object *object );
struct DTMethods *GetDTTriggerMethods( Object *object );
ULONG PrintDTObjectA( Object *o, struct Window *w, struct Requester *r,
	struct dtPrint *msg );
ULONG PrintDTObject( Object *o, struct Window *w, struct Requester *r,
	uint32_t data, ... );
STRPTR GetDTString( uint32_t id );
#endif	 /* CLIB_DATATYPES_PROTOS_H */
