#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HashAlgorithmName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HashAlgorithmName_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashAlgorithmName_DEFINED)
#define IL2CPP_STRUCT_HashAlgorithmName_DEFINED
struct String;
struct HashAlgorithmName {
    struct String* _name;
};
#endif
#if !defined(IL2CPP_STRUCT_HashAlgorithmName_FWDDECL)
#define IL2CPP_STRUCT_HashAlgorithmName_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HashAlgorithmName_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashAlgorithmName_DEFINED) && !defined(IL2CPP_STRUCT_HashAlgorithmName_FWDDECL)
#include <Modloader/app/structs/HashAlgorithmName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HashAlgorithmName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
