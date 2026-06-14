#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonPosition__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonPosition__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPosition__Boxed_DEFINED)
#include <Modloader/app/structs/JsonPosition.h>
#if defined(IL2CPP_STRUCT_JsonPosition_DEFINED)
#define IL2CPP_STRUCT_JsonPosition__Boxed_DEFINED
struct JsonPosition__Class;
struct JsonPosition__Boxed {
    struct JsonPosition__Class* klass;
    MonitorData* monitor;
    struct JsonPosition fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonPosition__Boxed_FWDDECL)
#define IL2CPP_STRUCT_JsonPosition__Boxed_FWDDECL
#include <Modloader/app/structs/JsonPosition__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonPosition__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPosition__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_JsonPosition__Boxed_FWDDECL)
#include <Modloader/app/structs/JsonPosition__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonPosition__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
