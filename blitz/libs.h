#ifndef LIBS_H
#define LIBS_H

#include <map>
#include <list>
#include <vector>
#include <string>


#include "../linker/linker.h"
#include "../compiler/environ.h"
#include "../compiler/parser.h"
#include "../bbruntime_dll/bbruntime_dll.h"

extern int bcc_ver;
extern int lnk_ver;
extern int run_ver;
extern int dbg_ver;

//openLibs
extern std::string home;
extern Linker* linkerLib;
extern Runtime* runtimeLib;

//linkLibs
extern Module* runtimeModule;
extern Environ* runtimeEnviron;
extern std::vector<std::string> keyWords;
extern std::vector<UserFunc> userFuncs;

const char* openLibs();

const char* linkLibs();

void closeLibs();

#endif