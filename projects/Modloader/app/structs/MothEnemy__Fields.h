#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MothEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MothEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothEnemy__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MothEnemy__Fields_DEFINED
struct MothSwarmer;
struct Transform;
struct AnimationCurve;
struct MothEnemy__Fields {
    struct EnemyEntity__Fields _;
    struct MothSwarmer* m_swarmer;
    float m_frozenTimer;
    bool m_isCarryingStickyMine;
    float MainPOIRadiusIdle;
    float MainPOIRadiusSeek;
    float ImmunityToDamageTimer;
    struct Transform* LeftWing;
    struct Transform* RightWing;
    struct AnimationCurve* WingFlapingCurve;
    float WingFlapingScale;
    float WingFlapingSpeed;
    float LandedWingFlapingSpeed;
    float RotationMultiplier;
    float RotationOffset;
    float m_wingTimer;
    struct Vector3 m_wingRotationBuffer;
    struct Transform* m_transform;
    bool _ShouldFlock_k__BackingField;
    bool _IsLanded_k__BackingField;
    struct Vector3 _PathTarget_k__BackingField;
    float _ReactionTime_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MothEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_MothEnemy__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MothSwarmer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MothEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MothEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/MothEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MothEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
