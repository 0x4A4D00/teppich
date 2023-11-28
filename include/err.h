#pragma once
enum
{
	OK = 0,

	/* you don't want these mass up with your values */
	PERM_DENIED = -128, 
	NAME_TOO_LONG,
	NO_SUCH_FILE,
	NO_SUCH_FS,
	FS_NOT_READY,
	DIR_NOT_EMPTY,
	
	NO_MEM,
	
	LL_ERR,
	
	NO_SUCH_CMD,
	
	USAGE,
}err;
