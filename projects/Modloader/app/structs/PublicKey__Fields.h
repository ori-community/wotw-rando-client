#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PublicKey__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PublicKey__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PublicKey__Fields_DEFINED)
#define IL2CPP_STRUCT_PublicKey__Fields_DEFINED
struct AsymmetricAlgorithm;
struct AsnEncodedData;
struct Oid;
struct __declspec(align(8)) PublicKey__Fields {
    struct AsymmetricAlgorithm* _key;
    struct AsnEncodedData* _keyValue;
    struct AsnEncodedData* _params;
    struct Oid* _oid;
};
#endif
#if !defined(IL2CPP_STRUCT_PublicKey__Fields_FWDDECL)
#define IL2CPP_STRUCT_PublicKey__Fields_FWDDECL
#include <Modloader/app/structs/AsnEncodedData.h>
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Oid.h>
#endif
#undef IL2CPP_STRUCT_PublicKey__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PublicKey__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PublicKey__Fields_FWDDECL)
#include <Modloader/app/structs/PublicKey__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PublicKey__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
