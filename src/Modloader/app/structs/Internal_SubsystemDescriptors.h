#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Internal_SubsystemDescriptors_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Internal_SubsystemDescriptors_INITIALIZING
#if !defined(IL2CPP_STRUCT_Internal_SubsystemDescriptors_DEFINED)
#define IL2CPP_STRUCT_Internal_SubsystemDescriptors_DEFINED
struct Internal_SubsystemDescriptors__Class;
struct Internal_SubsystemDescriptors {
    struct Internal_SubsystemDescriptors__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Internal_SubsystemDescriptors_FWDDECL)
#define IL2CPP_STRUCT_Internal_SubsystemDescriptors_FWDDECL
#include <Modloader/app/structs/Internal_SubsystemDescriptors__Class.h>
#endif
#undef IL2CPP_STRUCT_Internal_SubsystemDescriptors_INITIALIZING
#if !defined(IL2CPP_STRUCT_Internal_SubsystemDescriptors_DEFINED) && !defined(IL2CPP_STRUCT_Internal_SubsystemDescriptors_FWDDECL)
#include <Modloader/app/structs/Internal_SubsystemDescriptors.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Internal_SubsystemDescriptors.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
