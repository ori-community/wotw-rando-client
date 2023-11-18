#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PIIKind__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PIIKind__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PIIKind__Enum_DEFINED)
#define IL2CPP_STRUCT_PIIKind__Enum_DEFINED
enum class PIIKind__Enum : int32_t {
    NotSet = 0x00000000,
    DistinguishedName = 0x00000001,
    GenericData = 0x00000002,
    IPV4Address = 0x00000003,
    IPv6Address = 0x00000004,
    MailSubject = 0x00000005,
    PhoneNumber = 0x00000006,
    QueryString = 0x00000007,
    SipAddress = 0x00000008,
    SmtpAddress = 0x00000009,
    Identity = 0x0000000a,
    Uri = 0x0000000b,
    Fqdn = 0x0000000c,
    IPV4AddressLegacy = 0x0000000d,
};
#endif
#if !defined(IL2CPP_STRUCT_PIIKind__Enum_FWDDECL)
#define IL2CPP_STRUCT_PIIKind__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PIIKind__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PIIKind__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PIIKind__Enum_FWDDECL)
#include <Modloader/app/structs/PIIKind__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PIIKind__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
