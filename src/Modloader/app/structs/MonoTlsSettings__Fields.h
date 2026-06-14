#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoTlsSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoTlsSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsSettings__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_Mono_Security_Interface_TlsProtocols_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Mono_Security_Interface_TlsProtocols__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_MonoTlsSettings__Fields_DEFINED
struct MonoRemoteCertificateValidationCallback;
struct MonoLocalCertificateSelectionCallback;
struct X509CertificateCollection_1;
struct Object;
struct String__Array;
struct CipherSuiteCode__Enum__Array;
struct ICertificateValidator;
struct __declspec(align(8)) MonoTlsSettings__Fields {
    struct MonoRemoteCertificateValidationCallback* _RemoteCertificateValidationCallback_k__BackingField;
    struct MonoLocalCertificateSelectionCallback* _ClientCertificateSelectionCallback_k__BackingField;
    struct Nullable_1_DateTime_ _CertificateValidationTime_k__BackingField;
    struct X509CertificateCollection_1* _TrustAnchors_k__BackingField;
    struct Object* _UserSettings_k__BackingField;
    struct String__Array* _CertificateSearchPaths_k__BackingField;
    bool _SendCloseNotify_k__BackingField;
    struct Nullable_1_Mono_Security_Interface_TlsProtocols_ _EnabledProtocols_k__BackingField;
    struct CipherSuiteCode__Enum__Array* _EnabledCiphers_k__BackingField;
    bool cloned;
    bool checkCertName;
    bool checkCertRevocationStatus;
    struct Nullable_1_Boolean_ useServicePointManagerCallback;
    bool skipSystemValidators;
    bool callbackNeedsChain;
    struct ICertificateValidator* certificateValidator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoTlsSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_MonoTlsSettings__Fields_FWDDECL
#include <Modloader/app/structs/CipherSuiteCode__Enum__Array.h>
#include <Modloader/app/structs/ICertificateValidator.h>
#include <Modloader/app/structs/MonoLocalCertificateSelectionCallback.h>
#include <Modloader/app/structs/MonoRemoteCertificateValidationCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#endif
#undef IL2CPP_STRUCT_MonoTlsSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MonoTlsSettings__Fields_FWDDECL)
#include <Modloader/app/structs/MonoTlsSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoTlsSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
