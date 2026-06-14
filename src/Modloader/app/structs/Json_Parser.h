#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Json_Parser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Json_Parser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Json_Parser_DEFINED)
#include <Modloader/app/structs/Json_Parser__Fields.h>
#if defined(IL2CPP_STRUCT_Json_Parser__Fields_DEFINED)
#define IL2CPP_STRUCT_Json_Parser_DEFINED
struct Json_Parser__Class;
struct Json_Parser {
    struct Json_Parser__Class* klass;
    MonitorData* monitor;
    struct Json_Parser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Json_Parser_FWDDECL)
#define IL2CPP_STRUCT_Json_Parser_FWDDECL
#include <Modloader/app/structs/Json_Parser__Class.h>
#endif
#undef IL2CPP_STRUCT_Json_Parser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Json_Parser_DEFINED) && !defined(IL2CPP_STRUCT_Json_Parser_FWDDECL)
#include <Modloader/app/structs/Json_Parser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Json_Parser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
