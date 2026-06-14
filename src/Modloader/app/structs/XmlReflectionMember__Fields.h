#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlReflectionMember__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlReflectionMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReflectionMember__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlReflectionMember__Fields_DEFINED
struct String;
struct Type;
struct XmlAttributes;
struct __declspec(align(8)) XmlReflectionMember__Fields {
    bool isReturnValue;
    struct String* memberName;
    struct Type* memberType;
    struct XmlAttributes* xmlAttributes;
    struct Type* declaringType;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlReflectionMember__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlReflectionMember__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlAttributes.h>
#endif
#undef IL2CPP_STRUCT_XmlReflectionMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReflectionMember__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlReflectionMember__Fields_FWDDECL)
#include <Modloader/app/structs/XmlReflectionMember__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlReflectionMember__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
