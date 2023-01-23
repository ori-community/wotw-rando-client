#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChallengeResponse__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChallengeResponse__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChallengeResponse__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ChallengeResponse__StaticFields_DEFINED
struct Byte__Array;
struct ChallengeResponse__StaticFields {
    struct Byte__Array* magic;
    struct Byte__Array* nullEncMagic;
};
#endif
#if !defined(IL2CPP_STRUCT_ChallengeResponse__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ChallengeResponse__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_ChallengeResponse__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChallengeResponse__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ChallengeResponse__StaticFields_FWDDECL)
#include <Modloader/app/structs/ChallengeResponse__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChallengeResponse__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
