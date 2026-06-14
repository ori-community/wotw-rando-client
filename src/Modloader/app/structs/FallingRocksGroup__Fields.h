#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallingRocksGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallingRocksGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksGroup__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_FallingRocksGroup__Fields_DEFINED
struct List_1_FallingRocksGroup_RockInfo_;
struct GameObject;
struct WeightedGroup_1_FallingRocksGroup_RockInfo_;
struct List_1_FallingRocksArea_;
struct List_1_FallingRocksGroup_AnticSpawnInfo_;
struct FallingRocksGroup__Fields {
    struct MonoBehaviour__Fields _;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct List_1_FallingRocksGroup_RockInfo_* RockTypes;
    struct GameObject* RockExplosionPrefab;
    struct GameObject* RockWaterExplosionPrefab;
    struct WeightedGroup_1_FallingRocksGroup_RockInfo_* m_randomRockSelector;
    struct Vector2 InitialSpeedRandomRange;
    float AnticTime;
    struct List_1_FallingRocksArea_* m_fallingRockAreas;
    float m_timer;
    int32_t m_rocksSpawned;
    float m_timeBetweenRocks;
    float m_minTimeBetweenFalingRock;
    float m_maxTimeBetweenFalingRock;
    int32_t m_numberOfRocks;
    struct List_1_FallingRocksGroup_AnticSpawnInfo_* m_delayedAntics;
    bool m_rockFallTriggered;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FallingRocksGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_FallingRocksGroup__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_FallingRocksArea_.h>
#include <Modloader/app/structs/List_1_FallingRocksGroup_AnticSpawnInfo_.h>
#include <Modloader/app/structs/List_1_FallingRocksGroup_RockInfo_.h>
#include <Modloader/app/structs/WeightedGroup_1_FallingRocksGroup_RockInfo_.h>
#endif
#undef IL2CPP_STRUCT_FallingRocksGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FallingRocksGroup__Fields_FWDDECL)
#include <Modloader/app/structs/FallingRocksGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallingRocksGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
