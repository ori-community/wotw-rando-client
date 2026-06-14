#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cookie__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cookie__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cookie__Fields_DEFINED)
#include <Modloader/app/structs/CookieVariant__Enum.h>
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_CookieVariant__Enum_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_Cookie__Fields_DEFINED
struct String;
struct Uri;
struct Int32__Array;
struct __declspec(align(8)) Cookie__Fields {
    struct String* m_comment;
    struct Uri* m_commentUri;
    CookieVariant__Enum m_cookieVariant;

    bool m_discard;
    struct String* m_domain;
    bool m_domain_implicit;
    struct DateTime m_expires;
    struct String* m_name;
    struct String* m_path;
    bool m_path_implicit;
    struct String* m_port;
    bool m_port_implicit;
    struct Int32__Array* m_port_list;
    bool m_secure;
    bool m_httpOnly;
    struct DateTime m_timeStamp;
    struct String* m_value;
    int32_t m_version;
    struct String* m_domainKey;
    bool IsQuotedVersion;
    bool IsQuotedDomain;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Cookie__Fields_FWDDECL)
#define IL2CPP_STRUCT_Cookie__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_Cookie__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cookie__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Cookie__Fields_FWDDECL)
#include <Modloader/app/structs/Cookie__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cookie__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
