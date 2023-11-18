#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsSectionInternal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsSectionInternal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsSectionInternal__Fields_DEFINED)
#include <Modloader/app/structs/EncryptionPolicy__Enum.h>
#include <Modloader/app/structs/IPProtectionLevel__Enum.h>
#if defined(IL2CPP_STRUCT_IPProtectionLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_EncryptionPolicy__Enum_DEFINED)
#define IL2CPP_STRUCT_SettingsSectionInternal__Fields_DEFINED
struct __declspec(align(8)) SettingsSectionInternal__Fields {
    bool HttpListenerUnescapeRequestUrl;
    IPProtectionLevel__Enum IPProtectionLevel;

    bool _UseNagleAlgorithm_k__BackingField;
    bool _Expect100Continue_k__BackingField;
    bool _CheckCertificateName_k__BackingField;
    int32_t _DnsRefreshTimeout_k__BackingField;
    bool _EnableDnsRoundRobin_k__BackingField;
    bool _CheckCertificateRevocationList_k__BackingField;
    EncryptionPolicy__Enum _EncryptionPolicy_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingsSectionInternal__Fields_FWDDECL)
#define IL2CPP_STRUCT_SettingsSectionInternal__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SettingsSectionInternal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsSectionInternal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SettingsSectionInternal__Fields_FWDDECL)
#include <Modloader/app/structs/SettingsSectionInternal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsSectionInternal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
