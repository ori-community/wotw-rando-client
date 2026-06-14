#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossMeleeSlapBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossMeleeSlapBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossMeleeSlapBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/KwolokBossEntity_AnimationDirections__Enum.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_KwolokBossEntity_AnimationDirections__Enum_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_KwolokBossMeleeSlapBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct Enum__Array;
struct KwolokBossMeleeSlapBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline* SlapTimeline;
    struct EventTriggerAnimator* LookFrontWindow;
    struct Vector2 AttackAllowedRectangle;
    bool EnableDebug;
    KwolokBossEntity_AnimationDirections__Enum m_animDirection;

    struct Rect m_rect;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossMeleeSlapBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossMeleeSlapBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossMeleeSlapBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossMeleeSlapBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossMeleeSlapBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossMeleeSlapBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossMeleeSlapBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
