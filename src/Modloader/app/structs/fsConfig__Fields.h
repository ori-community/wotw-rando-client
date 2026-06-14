#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsConfig__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsConfig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsConfig__Fields_DEFINED)
#include <Modloader/app/structs/fsMemberSerialization__Enum.h>
#if defined(IL2CPP_STRUCT_fsMemberSerialization__Enum_DEFINED)
#define IL2CPP_STRUCT_fsConfig__Fields_DEFINED
struct Type__Array;
struct Func_3_String_System_Reflection_MemberInfo_String_;
struct String;
struct __declspec(align(8)) fsConfig__Fields {
    struct Type__Array* SerializeAttributes;
    struct Type__Array* IgnoreSerializeAttributes;
    struct Type__Array* IgnoreSerializeTypeAttributes;
    fsMemberSerialization__Enum DefaultMemberSerialization;

    struct Func_3_String_System_Reflection_MemberInfo_String_* GetJsonNameFromMemberName;
    bool EnablePropertySerialization;
    bool SerializeNonAutoProperties;
    bool SerializeNonPublicSetProperties;
    struct String* CustomDateTimeFormatString;
    bool Serialize64BitIntegerAsString;
    bool SerializeEnumsAsInteger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsConfig__Fields_FWDDECL)
#define IL2CPP_STRUCT_fsConfig__Fields_FWDDECL
#include <Modloader/app/structs/Func_3_String_System_Reflection_MemberInfo_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_fsConfig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsConfig__Fields_DEFINED) && !defined(IL2CPP_STRUCT_fsConfig__Fields_FWDDECL)
#include <Modloader/app/structs/fsConfig__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsConfig__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
