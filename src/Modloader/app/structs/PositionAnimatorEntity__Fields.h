#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/PositionAnimatorEntity_PositionMovementType__Enum.h>
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_PositionAnimatorEntity_PositionMovementType__Enum_DEFINED)
#define IL2CPP_STRUCT_PositionAnimatorEntity__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct AnimationCurve;
struct Transform;
struct PositionAnimatorEntity__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    struct AnimationCurve* X;
    struct AnimationCurve* Y;
    struct AnimationCurve* Z;
    float m_deltaTimeScale;
    float m_time;
    struct Vector3 m_initialPosition;
    int32_t m_fromStateGuid;
    int32_t m_toStateGuid;
    struct Transform* m_oldTransform;
    PositionAnimatorEntity_PositionMovementType__Enum MovementType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_PositionAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PositionAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PositionAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/PositionAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
