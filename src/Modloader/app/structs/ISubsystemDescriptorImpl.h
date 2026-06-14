#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISubsystemDescriptorImpl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISubsystemDescriptorImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISubsystemDescriptorImpl_DEFINED)
#define IL2CPP_STRUCT_ISubsystemDescriptorImpl_DEFINED
struct ISubsystemDescriptorImpl__Class;
struct ISubsystemDescriptorImpl {
    struct ISubsystemDescriptorImpl__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISubsystemDescriptorImpl_FWDDECL)
#define IL2CPP_STRUCT_ISubsystemDescriptorImpl_FWDDECL
#include <Modloader/app/structs/ISubsystemDescriptorImpl__Class.h>
#endif
#undef IL2CPP_STRUCT_ISubsystemDescriptorImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISubsystemDescriptorImpl_DEFINED) && !defined(IL2CPP_STRUCT_ISubsystemDescriptorImpl_FWDDECL)
#include <Modloader/app/structs/ISubsystemDescriptorImpl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISubsystemDescriptorImpl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
