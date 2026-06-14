#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChallengeShrineManager_ChallengeWave_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChallengeShrineManager_ChallengeWave_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChallengeShrineManager_ChallengeWave_DEFINED)
#define IL2CPP_STRUCT_ChallengeShrineManager_ChallengeWave_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct MessageProvider;
struct MoonReference_1_LegacyTrigger_;
struct ChallengeShrineManager_ChallengeWave {
    struct MoonReference_1_UnityEngine_Transform_* StartPosition;
    float TimeToComplete;
    struct MessageProvider* WaveStartMessage;
    struct MoonReference_1_LegacyTrigger_* OptionalEndWaveTrigger;
};
#endif
#if !defined(IL2CPP_STRUCT_ChallengeShrineManager_ChallengeWave_FWDDECL)
#define IL2CPP_STRUCT_ChallengeShrineManager_ChallengeWave_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonReference_1_LegacyTrigger_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_ChallengeShrineManager_ChallengeWave_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChallengeShrineManager_ChallengeWave_DEFINED) && !defined(IL2CPP_STRUCT_ChallengeShrineManager_ChallengeWave_FWDDECL)
#include <Modloader/app/structs/ChallengeShrineManager_ChallengeWave.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChallengeShrineManager_ChallengeWave.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
