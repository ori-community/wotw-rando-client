#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInstantiationAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInstantiationAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationAttribute_DEFINED)
#include <Modloader/app/structs/DynamicInstantiationAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicInstantiationAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicInstantiationAttribute_DEFINED
struct DynamicInstantiationAttribute__Class;
struct DynamicInstantiationAttribute {
    struct DynamicInstantiationAttribute__Class* klass;
    MonitorData* monitor;
    struct DynamicInstantiationAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicInstantiationAttribute_FWDDECL)
#define IL2CPP_STRUCT_DynamicInstantiationAttribute_FWDDECL
#include <Modloader/app/structs/DynamicInstantiationAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicInstantiationAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInstantiationAttribute_FWDDECL)
#include <Modloader/app/structs/DynamicInstantiationAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInstantiationAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
