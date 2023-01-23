#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PasswordDeriveBytes__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PasswordDeriveBytes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PasswordDeriveBytes__Fields_DEFINED)
#define IL2CPP_STRUCT_PasswordDeriveBytes__Fields_DEFINED
struct Byte__Array;
struct String;
struct HashAlgorithm;
struct __declspec(align(8)) PasswordDeriveBytes__Fields {
    int32_t _extraCount;
    int32_t _prefix;
    int32_t _iterations;
    struct Byte__Array* _baseValue;
    struct Byte__Array* _extra;
    struct Byte__Array* _salt;
    struct String* _hashName;
    struct Byte__Array* _password;
    struct HashAlgorithm* _hash;
};
#endif
#if !defined(IL2CPP_STRUCT_PasswordDeriveBytes__Fields_FWDDECL)
#define IL2CPP_STRUCT_PasswordDeriveBytes__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HashAlgorithm.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PasswordDeriveBytes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PasswordDeriveBytes__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PasswordDeriveBytes__Fields_FWDDECL)
#include <Modloader/app/structs/PasswordDeriveBytes__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PasswordDeriveBytes__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
