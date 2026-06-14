#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberInfoSerializationHolder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberInfoSerializationHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberInfoSerializationHolder__Fields_DEFINED)
#include <Modloader/app/structs/MemberTypes__Enum.h>
#if defined(IL2CPP_STRUCT_MemberTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_MemberInfoSerializationHolder__Fields_DEFINED
struct String;
struct RuntimeType;
struct SerializationInfo;
struct __declspec(align(8)) MemberInfoSerializationHolder__Fields {
    struct String* m_memberName;
    struct RuntimeType* m_reflectedType;
    struct String* m_signature;
    struct String* m_signature2;
    MemberTypes__Enum m_memberType;

    struct SerializationInfo* m_info;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberInfoSerializationHolder__Fields_FWDDECL)
#define IL2CPP_STRUCT_MemberInfoSerializationHolder__Fields_FWDDECL
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MemberInfoSerializationHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberInfoSerializationHolder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MemberInfoSerializationHolder__Fields_FWDDECL)
#include <Modloader/app/structs/MemberInfoSerializationHolder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberInfoSerializationHolder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
