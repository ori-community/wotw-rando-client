#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAOAEPKeyExchangeDeformatter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAOAEPKeyExchangeDeformatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAOAEPKeyExchangeDeformatter__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_RSAOAEPKeyExchangeDeformatter__Fields_DEFINED
struct RSA;
struct __declspec(align(8)) RSAOAEPKeyExchangeDeformatter__Fields {
    struct RSA* _rsaKey;
    struct Nullable_1_Boolean_ _rsaOverridesDecrypt;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSAOAEPKeyExchangeDeformatter__Fields_FWDDECL)
#define IL2CPP_STRUCT_RSAOAEPKeyExchangeDeformatter__Fields_FWDDECL
#include <Modloader/app/structs/RSA.h>
#endif
#undef IL2CPP_STRUCT_RSAOAEPKeyExchangeDeformatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAOAEPKeyExchangeDeformatter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RSAOAEPKeyExchangeDeformatter__Fields_FWDDECL)
#include <Modloader/app/structs/RSAOAEPKeyExchangeDeformatter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAOAEPKeyExchangeDeformatter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
