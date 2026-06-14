#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LedgeDropBlockerAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LedgeDropBlockerAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LedgeDropBlockerAnimator__Fields_DEFINED)
#include <Modloader/app/structs/EventTriggerAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LedgeDropBlockerAnimator__Fields_DEFINED
struct Entity;
struct GroundEntityLocomotion;
struct LedgeDropBlockerAnimator__Fields {
    struct EventTriggerAnimator__Fields _;
    struct Entity* m_entity;
    struct GroundEntityLocomotion* m_locomotion;
    bool StopFallingBack;
    bool StopFallingForward;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LedgeDropBlockerAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LedgeDropBlockerAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#endif
#undef IL2CPP_STRUCT_LedgeDropBlockerAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LedgeDropBlockerAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LedgeDropBlockerAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LedgeDropBlockerAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LedgeDropBlockerAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
