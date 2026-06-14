#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInstantiationDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor_DEFINED)
#include <Modloader/app/structs/DynamicInstantiationDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor_DEFINED
struct DynamicInstantiationDescriptor__Class;
struct DynamicInstantiationDescriptor {
    struct DynamicInstantiationDescriptor__Class* klass;
    MonitorData* monitor;
    struct DynamicInstantiationDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor_FWDDECL)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor_FWDDECL
#include <Modloader/app/structs/DynamicInstantiationDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicInstantiationDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor_FWDDECL)
#include <Modloader/app/structs/DynamicInstantiationDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInstantiationDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
