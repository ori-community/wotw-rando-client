#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationInfo__Fields_DEFINED
struct String__Array;
struct Object__Array;
struct Type__Array;
struct Dictionary_2_System_String_System_Int32_;
struct IFormatterConverter;
struct String;
struct Type;
struct __declspec(align(8)) SerializationInfo__Fields {
    struct String__Array* m_members;
    struct Object__Array* m_data;
    struct Type__Array* m_types;
    struct Dictionary_2_System_String_System_Int32_* m_nameToIndex;
    int32_t m_currMember;
    struct IFormatterConverter* m_converter;
    struct String* m_fullTypeName;
    struct String* m_assemName;
    struct Type* objectType;
    bool isFullTypeNameSetExplicit;
    bool isAssemblyNameSetExplicit;
    bool requireSameTokenInPartialTrust;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializationInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializationInfo__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/IFormatterConverter.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_SerializationInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializationInfo__Fields_FWDDECL)
#include <Modloader/app/structs/SerializationInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
