#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonContract_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContract_DEFINED)
#include <Modloader/app/structs/JsonContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonContract_DEFINED
struct JsonContract__Class;
struct JsonContract {
    struct JsonContract__Class* klass;
    MonitorData* monitor;
    struct JsonContract__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonContract_FWDDECL)
#define IL2CPP_STRUCT_JsonContract_FWDDECL
#include <Modloader/app/structs/JsonContract__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContract_DEFINED) && !defined(IL2CPP_STRUCT_JsonContract_FWDDECL)
#include <Modloader/app/structs/JsonContract.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonContract.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
