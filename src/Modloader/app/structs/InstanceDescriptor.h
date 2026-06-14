#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstanceDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstanceDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanceDescriptor_DEFINED)
#include <Modloader/app/structs/InstanceDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_InstanceDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_InstanceDescriptor_DEFINED
struct InstanceDescriptor__Class;
struct InstanceDescriptor {
    struct InstanceDescriptor__Class* klass;
    MonitorData* monitor;
    struct InstanceDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstanceDescriptor_FWDDECL)
#define IL2CPP_STRUCT_InstanceDescriptor_FWDDECL
#include <Modloader/app/structs/InstanceDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_InstanceDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanceDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_InstanceDescriptor_FWDDECL)
#include <Modloader/app/structs/InstanceDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstanceDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
