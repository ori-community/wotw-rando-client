#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInstantiationIgnoreAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInstantiationIgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationIgnoreAttribute_DEFINED)
#define IL2CPP_STRUCT_DynamicInstantiationIgnoreAttribute_DEFINED
struct DynamicInstantiationIgnoreAttribute__Class;
struct DynamicInstantiationIgnoreAttribute {
    struct DynamicInstantiationIgnoreAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicInstantiationIgnoreAttribute_FWDDECL)
#define IL2CPP_STRUCT_DynamicInstantiationIgnoreAttribute_FWDDECL
#include <Modloader/app/structs/DynamicInstantiationIgnoreAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicInstantiationIgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationIgnoreAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInstantiationIgnoreAttribute_FWDDECL)
#include <Modloader/app/structs/DynamicInstantiationIgnoreAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInstantiationIgnoreAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
