#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Parser_DateTime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Parser_DateTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_Parser_DateTime_DEFINED)
#define IL2CPP_STRUCT_Parser_DateTime_DEFINED
struct Parser_DateTime__Class;
struct Parser_DateTime {
    struct Parser_DateTime__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Parser_DateTime_FWDDECL)
#define IL2CPP_STRUCT_Parser_DateTime_FWDDECL
#include <Modloader/app/structs/Parser_DateTime__Class.h>
#endif
#undef IL2CPP_STRUCT_Parser_DateTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_Parser_DateTime_DEFINED) && !defined(IL2CPP_STRUCT_Parser_DateTime_FWDDECL)
#include <Modloader/app/structs/Parser_DateTime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Parser_DateTime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
