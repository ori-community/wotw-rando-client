#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubsystemDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubsystemDescriptor_DEFINED)
#include <Modloader/app/structs/SubsystemDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_SubsystemDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_SubsystemDescriptor_DEFINED
struct SubsystemDescriptor__Class;
struct SubsystemDescriptor {
    struct SubsystemDescriptor__Class* klass;
    MonitorData* monitor;
    struct SubsystemDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SubsystemDescriptor_FWDDECL)
#define IL2CPP_STRUCT_SubsystemDescriptor_FWDDECL
#include <Modloader/app/structs/SubsystemDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_SubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubsystemDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_SubsystemDescriptor_FWDDECL)
#include <Modloader/app/structs/SubsystemDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubsystemDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
