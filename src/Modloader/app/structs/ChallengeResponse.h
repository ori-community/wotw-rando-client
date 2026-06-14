#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChallengeResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChallengeResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChallengeResponse_DEFINED)
#include <Modloader/app/structs/ChallengeResponse__Fields.h>
#if defined(IL2CPP_STRUCT_ChallengeResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_ChallengeResponse_DEFINED
struct ChallengeResponse__Class;
struct ChallengeResponse {
    struct ChallengeResponse__Class* klass;
    MonitorData* monitor;
    struct ChallengeResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChallengeResponse_FWDDECL)
#define IL2CPP_STRUCT_ChallengeResponse_FWDDECL
#include <Modloader/app/structs/ChallengeResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_ChallengeResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChallengeResponse_DEFINED) && !defined(IL2CPP_STRUCT_ChallengeResponse_FWDDECL)
#include <Modloader/app/structs/ChallengeResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChallengeResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
