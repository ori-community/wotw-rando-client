#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Enum_EnumResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Enum_EnumResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enum_EnumResult_DEFINED)
#include <Modloader/app/structs/Enum_ParseFailureKind__Enum.h>
#if defined(IL2CPP_STRUCT_Enum_ParseFailureKind__Enum_DEFINED)
#define IL2CPP_STRUCT_Enum_EnumResult_DEFINED
struct Object;
struct String;
struct Exception;
struct Enum_EnumResult {
    struct Object* parsedEnum;
    bool canThrow;
    Enum_ParseFailureKind__Enum m_failure;

    struct String* m_failureMessageID;
    struct String* m_failureParameter;
    struct Object* m_failureMessageFormatArgument;
    struct Exception* m_innerException;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Enum_EnumResult_FWDDECL)
#define IL2CPP_STRUCT_Enum_EnumResult_FWDDECL
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Enum_EnumResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enum_EnumResult_DEFINED) && !defined(IL2CPP_STRUCT_Enum_EnumResult_FWDDECL)
#include <Modloader/app/structs/Enum_EnumResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Enum_EnumResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
