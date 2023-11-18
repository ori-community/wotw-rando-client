#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyUberTransformFollow__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyUberTransformFollow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyUberTransformFollow__Fields_DEFINED)
#include <Modloader/app/structs/FollowMode__Enum.h>
#include <Modloader/app/structs/FollowPositionModifier__Enum.h>
#include <Modloader/app/structs/FollowRotationModifier__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RotationSpace__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_RotationSpace__Enum_DEFINED) && defined(IL2CPP_STRUCT_FollowPositionModifier__Enum_DEFINED) && defined(IL2CPP_STRUCT_FollowRotationModifier__Enum_DEFINED) && defined(IL2CPP_STRUCT_FollowMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LegacyUberTransformFollow__Fields_DEFINED
struct Transform;
struct List_1_UnityEngine_Transform_;
struct LegacyUberTransformFollow__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* LootAtTarget;
    struct List_1_UnityEngine_Transform_* Targets;
    bool FollowX;
    bool FollowY;
    bool FollowZ;
    bool FollowRotation;
    RotationSpace__Enum RotationSpace;

    FollowPositionModifier__Enum FollowPositionModifierX;

    FollowPositionModifier__Enum FollowPositionModifierY;

    FollowPositionModifier__Enum FollowPositionModifierZ;

    FollowRotationModifier__Enum FollowRotationModifier;

    FollowMode__Enum PositionFollowMode;

    FollowMode__Enum RotationFollowMode;

    float PositionInterpolationSpeed;
    float RotationInterpolationSpeed;
    struct Vector3 PositionOffset;
    struct Vector3 RotationOffset;
    struct Transform* m_transform;
    struct Vector3 m_desiredPosition;
    struct Vector3 m_targetPosition;
    struct Vector3 m_desiredRotation;
    struct Vector3 m_targetRotation;
    struct Vector3 m_lockVectorScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyUberTransformFollow__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyUberTransformFollow__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacyUberTransformFollow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyUberTransformFollow__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyUberTransformFollow__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyUberTransformFollow__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyUberTransformFollow__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
