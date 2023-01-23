#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Mathf__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Mathf__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mathf__Boxed_DEFINED)
#include <Modloader/app/structs/Mathf.h>
#if defined(IL2CPP_STRUCT_Mathf_DEFINED)
#define IL2CPP_STRUCT_Mathf__Boxed_DEFINED
struct Mathf__Class;
struct Mathf__Boxed {
    struct Mathf__Class* klass;
    MonitorData* monitor;
    struct Mathf fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Mathf__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Mathf__Boxed_FWDDECL
#include <Modloader/app/structs/Mathf__Class.h>
#endif
#undef IL2CPP_STRUCT_Mathf__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mathf__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Mathf__Boxed_FWDDECL)
#include <Modloader/app/structs/Mathf__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Mathf__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
