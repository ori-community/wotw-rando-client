#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DSAManaged__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DSAManaged__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSAManaged__Fields_DEFINED)
#include <Modloader/app/structs/DSA__Fields.h>
#if defined(IL2CPP_STRUCT_DSA__Fields_DEFINED)
#define IL2CPP_STRUCT_DSAManaged__Fields_DEFINED
struct BigInteger;
struct RandomNumberGenerator;
struct DSAManaged_KeyGeneratedEventHandler;
struct DSAManaged__Fields {
    struct DSA__Fields _;
    bool keypairGenerated;
    bool m_disposed;
    struct BigInteger* p;
    struct BigInteger* q;
    struct BigInteger* g;
    struct BigInteger* x;
    struct BigInteger* y;
    struct BigInteger* j;
    struct BigInteger* seed;
    int32_t counter;
    bool j_missing;
    struct RandomNumberGenerator* rng;
    struct DSAManaged_KeyGeneratedEventHandler* KeyGenerated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DSAManaged__Fields_FWDDECL)
#define IL2CPP_STRUCT_DSAManaged__Fields_FWDDECL
#include <Modloader/app/structs/BigInteger.h>
#include <Modloader/app/structs/DSAManaged_KeyGeneratedEventHandler.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#endif
#undef IL2CPP_STRUCT_DSAManaged__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSAManaged__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DSAManaged__Fields_FWDDECL)
#include <Modloader/app/structs/DSAManaged__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DSAManaged__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
