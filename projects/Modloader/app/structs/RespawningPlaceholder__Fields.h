#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RespawningPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RespawningPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED
struct Transform;
struct MoonGuid;
struct Action_1_Damage_;
struct LegacyEntity;
struct RespawningPlaceholder__Fields {
    struct MonoBehaviour__Fields _;
    bool RespawnOnTimeout;
    bool RespawnOnScreen;
    float RespawnTime;
    float MinDistanceFromPlayer;
    bool DestroyCurrentOnDeath;
    bool m_isKilled;
    float m_respawnTime;
    bool m_needsToRespawn;
    struct Transform* m_transform;
    struct MoonGuid* m_sceneRootGUID;
    struct Action_1_Damage_* OnCurrentInstanceDeath;
    bool WasTimedRespawn;
    float m_enableTime;
    struct LegacyEntity* m_currentEntity;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_RespawningPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RespawningPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
