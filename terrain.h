#ifndef __terrain__
#define __terrain__
#include "tresor.h"
#include "perso.h"
#include "monstre.h"

typedef enum {WALL, ROOM, MONSTER, TREASURE,
STAIR_UP , STAIR_DOWN} Celltype ;
typedef struct {
	Cell type type ;
	union {
		Monster monster ;
		Treasure treasure ;
	}
} Cell ;
#endif