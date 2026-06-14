#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptionProviderAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptionProviderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptionProviderAttribute_DEFINED)
#include <Modloader/app/structs/TypeDescriptionProviderAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TypeDescriptionProviderAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptionProviderAttribute_DEFINED
struct TypeDescriptionProviderAttribute__Class;
struct TypeDescriptionProviderAttribute {
    struct TypeDescriptionProviderAttribute__Class* klass;
    MonitorData* monitor;
    struct TypeDescriptionProviderAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptionProviderAttribute_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptionProviderAttribute_FWDDECL
#include <Modloader/app/structs/TypeDescriptionProviderAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptionProviderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptionProviderAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptionProviderAttribute_FWDDECL)
#include <Modloader/app/structs/TypeDescriptionProviderAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptionProviderAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
