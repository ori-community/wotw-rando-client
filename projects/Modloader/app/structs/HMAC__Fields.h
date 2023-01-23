#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HMAC__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HMAC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMAC__Fields_DEFINED)
#include <Modloader/app/structs/KeyedHashAlgorithm__Fields.h>
#if defined(IL2CPP_STRUCT_KeyedHashAlgorithm__Fields_DEFINED)
#define IL2CPP_STRUCT_HMAC__Fields_DEFINED
struct String;
struct HashAlgorithm;
struct Byte__Array;
struct HMAC__Fields {
    struct KeyedHashAlgorithm__Fields _;
    int32_t blockSizeValue;
    struct String* m_hashName;
    struct HashAlgorithm* m_hash1;
    struct HashAlgorithm* m_hash2;
    struct Byte__Array* m_inner;
    struct Byte__Array* m_outer;
    bool m_hashing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HMAC__Fields_FWDDECL)
#define IL2CPP_STRUCT_HMAC__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HashAlgorithm.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HMAC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMAC__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HMAC__Fields_FWDDECL)
#include <Modloader/app/structs/HMAC__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HMAC__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
