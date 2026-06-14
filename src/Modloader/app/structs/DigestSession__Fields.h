#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DigestSession__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DigestSession__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestSession__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_DigestSession__Fields_DEFINED
struct HashAlgorithm;
struct DigestHeaderParser;
struct String;
struct __declspec(align(8)) DigestSession__Fields {
    struct DateTime lastUse;
    int32_t _nc;
    struct HashAlgorithm* hash;
    struct DigestHeaderParser* parser;
    struct String* _cnonce;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DigestSession__Fields_FWDDECL)
#define IL2CPP_STRUCT_DigestSession__Fields_FWDDECL
#include <Modloader/app/structs/DigestHeaderParser.h>
#include <Modloader/app/structs/HashAlgorithm.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DigestSession__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestSession__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DigestSession__Fields_FWDDECL)
#include <Modloader/app/structs/DigestSession__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DigestSession__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
