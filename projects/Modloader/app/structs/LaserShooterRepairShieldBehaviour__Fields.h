#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterRepairShieldBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterRepairShieldBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterRepairShieldBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_LaserShooterRepairShieldBehaviour__Fields_DEFINED
struct MoonFloat;
struct MoonTimeline;
struct LaserShooterRepairShieldBehaviour__Fields {
    struct EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields _;
    struct MoonFloat* RepairInterval;
    bool RepairAll;
    int32_t RepairCount;
    bool RepairWithProjectile;
    struct MoonTimeline* IdleTimeline;
    struct Vector2 Amplitude;
    struct Vector2 Frequency;
    float m_intervalTime;
    float m_timeToTick;
    int32_t m_pieceIndex;
    int32_t m_pieceCount;
    int32_t m_iterator;
    int32_t m_piecesDestroyedCount;
    float m_timeInBehaviour;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterRepairShieldBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterRepairShieldBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterRepairShieldBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterRepairShieldBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterRepairShieldBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterRepairShieldBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterRepairShieldBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
