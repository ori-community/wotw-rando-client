#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Uri__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Uri__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri__Fields_DEFINED)
#include <Modloader/app/structs/Uri_Flags__Enum.h>
#if defined(IL2CPP_STRUCT_Uri_Flags__Enum_DEFINED)
#define IL2CPP_STRUCT_Uri__Fields_DEFINED
struct String;
struct UriParser;
struct Uri_UriInfo;
struct __declspec(align(8)) Uri__Fields {
    struct String* m_String;
    struct String* m_originalUnicodeString;
    struct UriParser* m_Syntax;
    struct String* m_DnsSafeHost;
    Uri_Flags__Enum m_Flags;

    struct Uri_UriInfo* m_Info;
    bool m_iriParsing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Uri__Fields_FWDDECL)
#define IL2CPP_STRUCT_Uri__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UriParser.h>
#include <Modloader/app/structs/Uri_UriInfo.h>
#endif
#undef IL2CPP_STRUCT_Uri__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Uri__Fields_FWDDECL)
#include <Modloader/app/structs/Uri__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Uri__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
