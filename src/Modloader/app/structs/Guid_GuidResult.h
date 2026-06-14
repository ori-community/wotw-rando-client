#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Guid_GuidResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Guid_GuidResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_Guid_GuidResult_DEFINED)
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Guid_GuidParseThrowStyle__Enum.h>
#include <Modloader/app/structs/Guid_ParseFailureKind__Enum.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED) && defined(IL2CPP_STRUCT_Guid_GuidParseThrowStyle__Enum_DEFINED) && defined(IL2CPP_STRUCT_Guid_ParseFailureKind__Enum_DEFINED)
#define IL2CPP_STRUCT_Guid_GuidResult_DEFINED
struct String;
struct Object;
struct Exception;
struct Guid_GuidResult {
    struct Guid parsedGuid;
    Guid_GuidParseThrowStyle__Enum throwStyle;

    Guid_ParseFailureKind__Enum m_failure;

    struct String* m_failureMessageID;
    struct Object* m_failureMessageFormatArgument;
    struct String* m_failureArgumentName;
    struct Exception* m_innerException;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Guid_GuidResult_FWDDECL)
#define IL2CPP_STRUCT_Guid_GuidResult_FWDDECL
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Guid_GuidResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_Guid_GuidResult_DEFINED) && !defined(IL2CPP_STRUCT_Guid_GuidResult_FWDDECL)
#include <Modloader/app/structs/Guid_GuidResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Guid_GuidResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
