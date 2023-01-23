#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDependencyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDependencyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDependencyAttribute_DEFINED)
#include <Modloader/app/structs/TypeDependencyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TypeDependencyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeDependencyAttribute_DEFINED
struct TypeDependencyAttribute__Class;
struct TypeDependencyAttribute {
    struct TypeDependencyAttribute__Class* klass;
    MonitorData* monitor;
    struct TypeDependencyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeDependencyAttribute_FWDDECL)
#define IL2CPP_STRUCT_TypeDependencyAttribute_FWDDECL
#include <Modloader/app/structs/TypeDependencyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeDependencyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDependencyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TypeDependencyAttribute_FWDDECL)
#include <Modloader/app/structs/TypeDependencyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDependencyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
