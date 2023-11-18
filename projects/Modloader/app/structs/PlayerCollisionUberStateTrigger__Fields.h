#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerCollisionUberStateTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerCollisionUberStateTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCollisionUberStateTrigger__Fields_DEFINED)
#include <Modloader/app/structs/LegacyTrigger__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_LegacyTrigger__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PlayerCollisionUberStateTrigger__Fields_DEFINED
struct DesiredUberStateComposite;
struct PlayerCollisionUberStateTrigger__Fields {
    struct LegacyTrigger__Fields _;
    bool UseTrigger;
    bool OnlyTriggerIfGrounded;
    struct Rect m_bounds;
    bool m_hasCollided;
    struct Vector3 m_position;
    struct DesiredUberStateComposite* DesiredUberState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerCollisionUberStateTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerCollisionUberStateTrigger__Fields_FWDDECL
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#endif
#undef IL2CPP_STRUCT_PlayerCollisionUberStateTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCollisionUberStateTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerCollisionUberStateTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerCollisionUberStateTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerCollisionUberStateTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
