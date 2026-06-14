#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInstantiationProviderAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInstantiationProviderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationProviderAttribute_DEFINED)
#include <Modloader/app/structs/DynamicInstantiationProviderAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicInstantiationProviderAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicInstantiationProviderAttribute_DEFINED
struct DynamicInstantiationProviderAttribute__Class;
struct DynamicInstantiationProviderAttribute {
    struct DynamicInstantiationProviderAttribute__Class* klass;
    MonitorData* monitor;
    struct DynamicInstantiationProviderAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicInstantiationProviderAttribute_FWDDECL)
#define IL2CPP_STRUCT_DynamicInstantiationProviderAttribute_FWDDECL
#include <Modloader/app/structs/DynamicInstantiationProviderAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicInstantiationProviderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationProviderAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInstantiationProviderAttribute_FWDDECL)
#include <Modloader/app/structs/DynamicInstantiationProviderAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInstantiationProviderAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
