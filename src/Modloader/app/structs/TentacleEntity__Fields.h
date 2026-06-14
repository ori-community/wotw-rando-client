#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEntity__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_TentacleEntity__Fields_DEFINED
struct Transform;
struct TentaclePhysicsController;
struct CageStructureTool;
struct GameObject;
struct FloatAnimationParameter;
struct TentacleInterestPoint__Array;
struct RTPC;
struct TentacleEntity__Fields {
    struct EnemyEntity__Fields _;
    struct Transform* head;
    struct Transform* targetPoint;
    struct Transform* targetingCenter;
    struct Transform* feet;
    struct TentaclePhysicsController* physicsController;
    struct CageStructureTool* targetBounds;
    struct GameObject* CriticalDamageEffect;
    float damageForce;
    float ContactDamage;
    DamageWeight__Enum ContactDamageWeight;

    struct FloatAnimationParameter* missParameter;
    struct FloatAnimationParameter* targetingDirectionParameter;
    bool targetingDirectionSnap;
    float targetingDirectionScale;
    struct FloatAnimationParameter* hitSideParameter;
    struct FloatAnimationParameter* TargetDistanceParameter;
    float MaxDistance;
    float MinDistanceForShortAttack;
    bool gonnaMiss;
    bool forceMiss;
    bool targetAtBoundsEdge;
    struct LayerMask DefaultSegmentLayer;
    struct LayerMask DefaultHeadLayer;
    struct TentacleInterestPoint__Array* InterestPoints;
    int32_t m_defaultSegmentLayerInt;
    int32_t m_defaultHeadLayerInt;
    float m_directionParameterValue;
    float m_directionParameterTargetValue;
    float m_distanceParameterValue;
    float m_distanceParameterTargetValue;
    float DirectionSnapCoeff;
    float DirectionSnapSpeed;
    float BaseShotCooldown;
    struct RTPC* UnderWaterRTPC;
    bool m_isUnderWater;
    float m_shotCooldown;
    float m_missParameterValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEntity__Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/TentacleInterestPoint__Array.h>
#include <Modloader/app/structs/TentaclePhysicsController.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TentacleEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEntity__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
