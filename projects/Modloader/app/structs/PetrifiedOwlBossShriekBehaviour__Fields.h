#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossShriekBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossShriekBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossShriekBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossShriekBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct GameObject;
struct Enum__Array;
struct PetrifiedOwlBossShriekBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    struct EventTriggerAnimator* ShriekSpawnTrigger;
    struct GameObject* ShriekPrefab;
    bool PlayStompAntic;
    bool m_isMirrored;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossShriekBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossShriekBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossShriekBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossShriekBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossShriekBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossShriekBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossShriekBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
