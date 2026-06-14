#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonDynamicContract_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonDynamicContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonDynamicContract_DEFINED)
#include <Modloader/app/structs/JsonDynamicContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonDynamicContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonDynamicContract_DEFINED
struct JsonDynamicContract__Class;
struct JsonDynamicContract {
    struct JsonDynamicContract__Class* klass;
    MonitorData* monitor;
    struct JsonDynamicContract__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonDynamicContract_FWDDECL)
#define IL2CPP_STRUCT_JsonDynamicContract_FWDDECL
#include <Modloader/app/structs/JsonDynamicContract__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonDynamicContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonDynamicContract_DEFINED) && !defined(IL2CPP_STRUCT_JsonDynamicContract_FWDDECL)
#include <Modloader/app/structs/JsonDynamicContract.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonDynamicContract.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
