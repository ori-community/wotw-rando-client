#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAPKCS1KeyExchangeDeformatter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAPKCS1KeyExchangeDeformatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAPKCS1KeyExchangeDeformatter__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_RSAPKCS1KeyExchangeDeformatter__Fields_DEFINED
struct RSA;
struct RandomNumberGenerator;
struct __declspec(align(8)) RSAPKCS1KeyExchangeDeformatter__Fields {
    struct RSA* _rsaKey;
    struct Nullable_1_Boolean_ _rsaOverridesDecrypt;
    struct RandomNumberGenerator* RngValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSAPKCS1KeyExchangeDeformatter__Fields_FWDDECL)
#define IL2CPP_STRUCT_RSAPKCS1KeyExchangeDeformatter__Fields_FWDDECL
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#endif
#undef IL2CPP_STRUCT_RSAPKCS1KeyExchangeDeformatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAPKCS1KeyExchangeDeformatter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RSAPKCS1KeyExchangeDeformatter__Fields_FWDDECL)
#include <Modloader/app/structs/RSAPKCS1KeyExchangeDeformatter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAPKCS1KeyExchangeDeformatter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
