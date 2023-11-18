#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Internal_SubsystemInstances_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Internal_SubsystemInstances_INITIALIZING
#if !defined(IL2CPP_STRUCT_Internal_SubsystemInstances_DEFINED)
#define IL2CPP_STRUCT_Internal_SubsystemInstances_DEFINED
struct Internal_SubsystemInstances__Class;
struct Internal_SubsystemInstances {
    struct Internal_SubsystemInstances__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Internal_SubsystemInstances_FWDDECL)
#define IL2CPP_STRUCT_Internal_SubsystemInstances_FWDDECL
#include <Modloader/app/structs/Internal_SubsystemInstances__Class.h>
#endif
#undef IL2CPP_STRUCT_Internal_SubsystemInstances_INITIALIZING
#if !defined(IL2CPP_STRUCT_Internal_SubsystemInstances_DEFINED) && !defined(IL2CPP_STRUCT_Internal_SubsystemInstances_FWDDECL)
#include <Modloader/app/structs/Internal_SubsystemInstances.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Internal_SubsystemInstances.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
