#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntegratedSubsystemDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntegratedSubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntegratedSubsystemDescriptor_DEFINED)
#include <Modloader/app/structs/IntegratedSubsystemDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_IntegratedSubsystemDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_IntegratedSubsystemDescriptor_DEFINED
struct IntegratedSubsystemDescriptor__Class;
struct IntegratedSubsystemDescriptor {
    struct IntegratedSubsystemDescriptor__Class* klass;
    MonitorData* monitor;
    struct IntegratedSubsystemDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntegratedSubsystemDescriptor_FWDDECL)
#define IL2CPP_STRUCT_IntegratedSubsystemDescriptor_FWDDECL
#include <Modloader/app/structs/IntegratedSubsystemDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_IntegratedSubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntegratedSubsystemDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_IntegratedSubsystemDescriptor_FWDDECL)
#include <Modloader/app/structs/IntegratedSubsystemDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntegratedSubsystemDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
