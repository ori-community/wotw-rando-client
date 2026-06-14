#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberDescriptor__Fields_DEFINED
struct String;
struct AttributeCollection;
struct Attribute__Array;
struct Object;
struct __declspec(align(8)) MemberDescriptor__Fields {
    struct String* name;
    struct String* displayName;
    int32_t nameHash;
    struct AttributeCollection* attributeCollection;
    struct Attribute__Array* attributes;
    struct Attribute__Array* originalAttributes;
    bool attributesFiltered;
    bool attributesFilled;
    int32_t metadataVersion;
    struct String* category;
    struct String* description;
    struct Object* lockCookie;
};
#endif
#if !defined(IL2CPP_STRUCT_MemberDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_MemberDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MemberDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MemberDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/MemberDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
