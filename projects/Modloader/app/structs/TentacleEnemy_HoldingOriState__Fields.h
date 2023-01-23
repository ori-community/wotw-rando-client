#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_HoldingOriState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_HoldingOriState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_HoldingOriState__Fields_DEFINED)
#include <Modloader/app/structs/TentacleEnemy_TentacleState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_HoldingOriState__Fields_DEFINED
struct TentacleEnemy_WiggleData;
struct SeinDamageReciever;
struct ILeachable;
struct TentacleEnemy_HoldingOriState__Fields {
    struct TentacleEnemy_TentacleState__Fields _;
    float Damage;
    float DamageDelay;
    float FailDistance;
    float SeekForce;
    struct TentacleEnemy_WiggleData* HeadWiggle;
    struct SeinDamageReciever* DamageReceiver;
    float m_timeToDamage;
    struct ILeachable* m_leachable;
    struct Vector3 m_holdPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_HoldingOriState__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_HoldingOriState__Fields_FWDDECL
#include <Modloader/app/structs/ILeachable.h>
#include <Modloader/app/structs/SeinDamageReciever.h>
#include <Modloader/app/structs/TentacleEnemy_WiggleData.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_HoldingOriState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_HoldingOriState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_HoldingOriState__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_HoldingOriState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_HoldingOriState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
