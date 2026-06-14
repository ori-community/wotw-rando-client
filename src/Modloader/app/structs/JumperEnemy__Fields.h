#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumperEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumperEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemy__Fields_DEFINED)
#include <Modloader/app/structs/GroundEnemy__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_GroundEnemy__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_JumperEnemy__Fields_DEFINED
struct JumpingSootEnemySettings;
struct JumpingSootEnemySounds;
struct JumperEnemy_States;
struct Transform;
struct GameObject;
struct JumperEnemy__Fields {
    struct GroundEnemy__Fields _;
    struct JumpingSootEnemySettings* Settings;
    struct JumpingSootEnemySounds* Sounds;
    struct JumperEnemy_States* State;
    struct Transform* JumpingZone;
    struct LayerMask RaycastLayerMask;
    struct Vector3 m_playerSmoothSpeed;
    bool m_shouldStomp;
    struct Vector3 m_thrownDirection;
    bool m_timedRespawn;
    struct GameObject* StompEffect;
    struct GameObject* LandEffect;
    float FallingDisabledTimeLeft;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumperEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumperEnemy__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/JumperEnemy_States.h>
#include <Modloader/app/structs/JumpingSootEnemySettings.h>
#include <Modloader/app/structs/JumpingSootEnemySounds.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_JumperEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumperEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/JumperEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumperEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
