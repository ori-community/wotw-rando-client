#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuDashPuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuDashPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDashPuppet_DEFINED)
#include <Modloader/app/structs/KuDashPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_KuDashPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_KuDashPuppet_DEFINED
struct KuDashPuppet__Class;
struct KuDashPuppet {
    struct KuDashPuppet__Class* klass;
    MonitorData* monitor;
    struct KuDashPuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuDashPuppet_FWDDECL)
#define IL2CPP_STRUCT_KuDashPuppet_FWDDECL
#include <Modloader/app/structs/KuDashPuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_KuDashPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDashPuppet_DEFINED) && !defined(IL2CPP_STRUCT_KuDashPuppet_FWDDECL)
#include <Modloader/app/structs/KuDashPuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuDashPuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
