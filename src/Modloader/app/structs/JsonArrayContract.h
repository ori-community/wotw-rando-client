#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonArrayContract_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonArrayContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonArrayContract_DEFINED)
#include <Modloader/app/structs/JsonArrayContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonArrayContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonArrayContract_DEFINED
struct JsonArrayContract__Class;
struct JsonArrayContract {
    struct JsonArrayContract__Class* klass;
    MonitorData* monitor;
    struct JsonArrayContract__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonArrayContract_FWDDECL)
#define IL2CPP_STRUCT_JsonArrayContract_FWDDECL
#include <Modloader/app/structs/JsonArrayContract__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonArrayContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonArrayContract_DEFINED) && !defined(IL2CPP_STRUCT_JsonArrayContract_FWDDECL)
#include <Modloader/app/structs/JsonArrayContract.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonArrayContract.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
