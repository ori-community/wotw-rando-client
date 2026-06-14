#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DigestSession__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DigestSession__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestSession__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DigestSession__StaticFields_DEFINED
struct RandomNumberGenerator;
struct DigestSession__StaticFields {
    struct RandomNumberGenerator* rng;
};
#endif
#if !defined(IL2CPP_STRUCT_DigestSession__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DigestSession__StaticFields_FWDDECL
#include <Modloader/app/structs/RandomNumberGenerator.h>
#endif
#undef IL2CPP_STRUCT_DigestSession__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestSession__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DigestSession__StaticFields_FWDDECL)
#include <Modloader/app/structs/DigestSession__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DigestSession__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
