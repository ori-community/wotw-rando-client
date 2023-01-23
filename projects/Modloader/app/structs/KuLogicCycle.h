#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuLogicCycle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuLogicCycle_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuLogicCycle_DEFINED)
#include <Modloader/app/structs/KuLogicCycle__Fields.h>
#if defined(IL2CPP_STRUCT_KuLogicCycle__Fields_DEFINED)
#define IL2CPP_STRUCT_KuLogicCycle_DEFINED
struct KuLogicCycle__Class;
struct KuLogicCycle {
    struct KuLogicCycle__Class* klass;
    MonitorData* monitor;
    struct KuLogicCycle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuLogicCycle_FWDDECL)
#define IL2CPP_STRUCT_KuLogicCycle_FWDDECL
#include <Modloader/app/structs/KuLogicCycle__Class.h>
#endif
#undef IL2CPP_STRUCT_KuLogicCycle_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuLogicCycle_DEFINED) && !defined(IL2CPP_STRUCT_KuLogicCycle_FWDDECL)
#include <Modloader/app/structs/KuLogicCycle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuLogicCycle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
