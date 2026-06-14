#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuFall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuFall_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuFall_DEFINED)
#include <Modloader/app/structs/KuFall__Fields.h>
#if defined(IL2CPP_STRUCT_KuFall__Fields_DEFINED)
#define IL2CPP_STRUCT_KuFall_DEFINED
struct KuFall__Class;
struct KuFall {
    struct KuFall__Class* klass;
    MonitorData* monitor;
    struct KuFall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuFall_FWDDECL)
#define IL2CPP_STRUCT_KuFall_FWDDECL
#include <Modloader/app/structs/KuFall__Class.h>
#endif
#undef IL2CPP_STRUCT_KuFall_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuFall_DEFINED) && !defined(IL2CPP_STRUCT_KuFall_FWDDECL)
#include <Modloader/app/structs/KuFall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuFall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
