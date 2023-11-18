#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossHeadbuttBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossHeadbuttBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossHeadbuttBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_KwolokBossHeadbuttBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct MoonReference_1_FallingRocksGroup_;
struct KwolokBossHeadbuttBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline* HeadbuttTimeline;
    struct EventTriggerAnimator* FallingRocksTrigger;
    struct MoonReference_1_FallingRocksGroup_* FallingRocks;
    float MinTimeBetweenFalingRock;
    float MaxTimeBetweenFalingRock;
    int32_t NumberOfRocks;
    struct Vector2 RockInitialSpeedRandomRange;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossHeadbuttBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossHeadbuttBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonReference_1_FallingRocksGroup_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossHeadbuttBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossHeadbuttBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossHeadbuttBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossHeadbuttBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossHeadbuttBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
