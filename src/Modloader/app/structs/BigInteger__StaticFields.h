#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BigInteger__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BigInteger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger__StaticFields_DEFINED)
#define IL2CPP_STRUCT_BigInteger__StaticFields_DEFINED
struct UInt32__Array;
struct RandomNumberGenerator;
struct BigInteger__StaticFields {
    struct UInt32__Array* smallPrimes;
    struct RandomNumberGenerator* rng;
};
#endif
#if !defined(IL2CPP_STRUCT_BigInteger__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_BigInteger__StaticFields_FWDDECL
#include <Modloader/app/structs/RandomNumberGenerator.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_BigInteger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_BigInteger__StaticFields_FWDDECL)
#include <Modloader/app/structs/BigInteger__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BigInteger__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
