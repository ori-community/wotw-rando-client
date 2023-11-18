#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode__Fields_DEFINED)
#include <Modloader/app/structs/TypeDescriptionProvider__Fields.h>
#if defined(IL2CPP_STRUCT_TypeDescriptionProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode__Fields_DEFINED
struct TypeDescriptor_TypeDescriptionNode;
struct TypeDescriptionProvider;
struct TypeDescriptor_TypeDescriptionNode__Fields {
    struct TypeDescriptionProvider__Fields _;
    struct TypeDescriptor_TypeDescriptionNode* Next;
    struct TypeDescriptionProvider* Provider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode__Fields_FWDDECL
#include <Modloader/app/structs/TypeDescriptionProvider.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode__Fields_FWDDECL)
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
