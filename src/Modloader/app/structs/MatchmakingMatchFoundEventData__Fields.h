#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingMatchFoundEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingMatchFoundEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingMatchFoundEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingMatchFoundEventData__Fields_DEFINED
struct EntityLineage_1;
struct MatchmakingMatchFoundPayload;
struct EntityKey_9;
struct MatchmakingMatchFoundEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct EntityLineage_1* EntityLineage;
    struct MatchmakingMatchFoundPayload* Payload;
    struct EntityKey_9* WriterEntity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingMatchFoundEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingMatchFoundEventData__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_9.h>
#include <Modloader/app/structs/EntityLineage_1.h>
#include <Modloader/app/structs/MatchmakingMatchFoundPayload.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingMatchFoundEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingMatchFoundEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingMatchFoundEventData__Fields_FWDDECL)
#include <Modloader/app/structs/MatchmakingMatchFoundEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingMatchFoundEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
