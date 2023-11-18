#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAPKCS1KeyExchangeFormatter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAPKCS1KeyExchangeFormatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAPKCS1KeyExchangeFormatter__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_RSAPKCS1KeyExchangeFormatter__Fields_DEFINED
struct RandomNumberGenerator;
struct RSA;
struct __declspec(align(8)) RSAPKCS1KeyExchangeFormatter__Fields {
    struct RandomNumberGenerator* RngValue;
    struct RSA* _rsaKey;
    struct Nullable_1_Boolean_ _rsaOverridesEncrypt;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSAPKCS1KeyExchangeFormatter__Fields_FWDDECL)
#define IL2CPP_STRUCT_RSAPKCS1KeyExchangeFormatter__Fields_FWDDECL
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#endif
#undef IL2CPP_STRUCT_RSAPKCS1KeyExchangeFormatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAPKCS1KeyExchangeFormatter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RSAPKCS1KeyExchangeFormatter__Fields_FWDDECL)
#include <Modloader/app/structs/RSAPKCS1KeyExchangeFormatter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAPKCS1KeyExchangeFormatter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
