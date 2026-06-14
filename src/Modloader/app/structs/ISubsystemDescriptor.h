#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISubsystemDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISubsystemDescriptor_DEFINED)
#define IL2CPP_STRUCT_ISubsystemDescriptor_DEFINED
struct ISubsystemDescriptor__Class;
struct ISubsystemDescriptor {
    struct ISubsystemDescriptor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISubsystemDescriptor_FWDDECL)
#define IL2CPP_STRUCT_ISubsystemDescriptor_FWDDECL
#include <Modloader/app/structs/ISubsystemDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_ISubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISubsystemDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_ISubsystemDescriptor_FWDDECL)
#include <Modloader/app/structs/ISubsystemDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISubsystemDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
