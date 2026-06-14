#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonObjectContract_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonObjectContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonObjectContract_DEFINED)
#include <Modloader/app/structs/JsonObjectContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonObjectContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonObjectContract_DEFINED
struct JsonObjectContract__Class;
struct JsonObjectContract {
    struct JsonObjectContract__Class* klass;
    MonitorData* monitor;
    struct JsonObjectContract__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonObjectContract_FWDDECL)
#define IL2CPP_STRUCT_JsonObjectContract_FWDDECL
#include <Modloader/app/structs/JsonObjectContract__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonObjectContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonObjectContract_DEFINED) && !defined(IL2CPP_STRUCT_JsonObjectContract_FWDDECL)
#include <Modloader/app/structs/JsonObjectContract.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonObjectContract.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
