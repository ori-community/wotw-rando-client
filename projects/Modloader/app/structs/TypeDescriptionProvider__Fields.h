#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptionProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptionProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptionProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptionProvider__Fields_DEFINED
struct TypeDescriptionProvider;
struct TypeDescriptionProvider_EmptyCustomTypeDescriptor;
struct __declspec(align(8)) TypeDescriptionProvider__Fields {
    struct TypeDescriptionProvider* _parent;
    struct TypeDescriptionProvider_EmptyCustomTypeDescriptor* _emptyDescriptor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptionProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptionProvider__Fields_FWDDECL
#include <Modloader/app/structs/TypeDescriptionProvider.h>
#include <Modloader/app/structs/TypeDescriptionProvider_EmptyCustomTypeDescriptor.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptionProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptionProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptionProvider__Fields_FWDDECL)
#include <Modloader/app/structs/TypeDescriptionProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptionProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
