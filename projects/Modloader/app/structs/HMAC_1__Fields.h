#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HMAC_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HMAC_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMAC_1__Fields_DEFINED)
#include <Modloader/app/structs/KeyedHashAlgorithm__Fields.h>
#if defined(IL2CPP_STRUCT_KeyedHashAlgorithm__Fields_DEFINED)
#define IL2CPP_STRUCT_HMAC_1__Fields_DEFINED
struct HashAlgorithm;
struct Byte__Array;
struct HMAC_1__Fields {
    struct KeyedHashAlgorithm__Fields _;
    struct HashAlgorithm* hash;
    bool hashing;
    struct Byte__Array* innerPad;
    struct Byte__Array* outerPad;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HMAC_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_HMAC_1__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HashAlgorithm.h>
#endif
#undef IL2CPP_STRUCT_HMAC_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMAC_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HMAC_1__Fields_FWDDECL)
#include <Modloader/app/structs/HMAC_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HMAC_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
