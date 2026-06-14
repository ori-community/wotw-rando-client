#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Parser_MD5_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Parser_MD5_INITIALIZING
#if !defined(IL2CPP_STRUCT_Parser_MD5_DEFINED)
#define IL2CPP_STRUCT_Parser_MD5_DEFINED
struct Parser_MD5__Class;
struct Parser_MD5 {
    struct Parser_MD5__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Parser_MD5_FWDDECL)
#define IL2CPP_STRUCT_Parser_MD5_FWDDECL
#include <Modloader/app/structs/Parser_MD5__Class.h>
#endif
#undef IL2CPP_STRUCT_Parser_MD5_INITIALIZING
#if !defined(IL2CPP_STRUCT_Parser_MD5_DEFINED) && !defined(IL2CPP_STRUCT_Parser_MD5_FWDDECL)
#include <Modloader/app/structs/Parser_MD5.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Parser_MD5.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
