/**************

	these are used in the Mac file browsing stuff
	
**************/

#ifdef USING_THE_MAC
#ifndef _MAC_FOPEN_
#define _MAC_FOPEN_

/* open the file and change dirs to the right disk/folder */
#define MAC_FOPEN_OPEN_CD 1
/* open the file without changing dirs */
#define MAC_FOPEN_OPEN_NOCD 2
/* don't open it, but change dirs */
#define MAC_FOPEN_NOOPEN_CD 3
/* don't open or change dirs */
#define MAC_FOPEN_NOOPEN_NOCD 4
#endif
#endif