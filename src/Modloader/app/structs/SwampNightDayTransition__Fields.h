#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwampNightDayTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwampNightDayTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwampNightDayTransition__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SwampNightDayTransition__Fields_DEFINED
struct BaseAnimator;
struct UberPostProcessAnimator;
struct ActionSequence;
struct GameObject;
struct PhysicalSystemManager__Array;
struct SwampNightDayTransition__Fields {
    struct MonoBehaviour__Fields _;
    struct BaseAnimator* TransitionAnimator;
    struct UberPostProcessAnimator* PostAnimator;
    struct ActionSequence* DayTimeActionSequence;
    struct ActionSequence* NightTimeActionSequence;
    struct GameObject* DayTimeGroup;
    struct GameObject* NightTimeGroup;
    struct PhysicalSystemManager__Array* physicsSetups;
    bool m_previousHadSword;
    bool _InvalidateParentTimelineCache_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwampNightDayTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwampNightDayTransition__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PhysicalSystemManager__Array.h>
#include <Modloader/app/structs/UberPostProcessAnimator.h>
#endif
#undef IL2CPP_STRUCT_SwampNightDayTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwampNightDayTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwampNightDayTransition__Fields_FWDDECL)
#include <Modloader/app/structs/SwampNightDayTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwampNightDayTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
