#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UriParser__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UriParser__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriParser__StaticFields_DEFINED)
#include <Modloader/app/structs/UriParser_UriQuirksVersion__Enum.h>
#include <Modloader/app/structs/UriSyntaxFlags__Enum.h>
#if defined(IL2CPP_STRUCT_UriParser_UriQuirksVersion__Enum_DEFINED) && defined(IL2CPP_STRUCT_UriSyntaxFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_UriParser__StaticFields_DEFINED
struct Dictionary_2_System_String_System_UriParser_;
struct UriParser;
struct UriParser__StaticFields {
    struct Dictionary_2_System_String_System_UriParser_* m_Table;
    struct Dictionary_2_System_String_System_UriParser_* m_TempTable;
    struct UriParser* HttpUri;
    struct UriParser* HttpsUri;
    struct UriParser* WsUri;
    struct UriParser* WssUri;
    struct UriParser* FtpUri;
    struct UriParser* FileUri;
    struct UriParser* GopherUri;
    struct UriParser* NntpUri;
    struct UriParser* NewsUri;
    struct UriParser* MailToUri;
    struct UriParser* UuidUri;
    struct UriParser* TelnetUri;
    struct UriParser* LdapUri;
    struct UriParser* NetTcpUri;
    struct UriParser* NetPipeUri;
    struct UriParser* VsMacrosUri;
    UriParser_UriQuirksVersion__Enum s_QuirksVersion;

    UriSyntaxFlags__Enum HttpSyntaxFlags;

    UriSyntaxFlags__Enum FileSyntaxFlags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UriParser__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UriParser__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_UriParser_.h>
#include <Modloader/app/structs/UriParser.h>
#endif
#undef IL2CPP_STRUCT_UriParser__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriParser__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UriParser__StaticFields_FWDDECL)
#include <Modloader/app/structs/UriParser__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UriParser__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
