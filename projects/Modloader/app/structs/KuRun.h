#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuRun_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuRun_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuRun_DEFINED)
#include <Modloader/app/structs/KuRun__Fields.h>
#if defined(IL2CPP_STRUCT_KuRun__Fields_DEFINED)
#define IL2CPP_STRUCT_KuRun_DEFINED
struct KuRun__Class;
struct KuRun {
    struct KuRun__Class* klass;
    MonitorData* monitor;
    struct KuRun__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuRun_FWDDECL)
#define IL2CPP_STRUCT_KuRun_FWDDECL
#include <Modloader/app/structs/KuRun__Class.h>
#endif
#undef IL2CPP_STRUCT_KuRun_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuRun_DEFINED) && !defined(IL2CPP_STRUCT_KuRun_FWDDECL)
#include <Modloader/app/structs/KuRun.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuRun.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
