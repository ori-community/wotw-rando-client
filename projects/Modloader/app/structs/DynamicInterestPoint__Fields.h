#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInterestPoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInterestPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInterestPoint__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DynamicInterestPoint__Fields_DEFINED
struct Transform;
struct DynamicInterestPoint__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 Padding;
    struct Vector3 InterestPointOffset;
    struct Vector2 ZoomRangeModification;
    float WeightModificationFactor;
    bool UseRadiusBasedInfluence;
    struct Vector2 InfluenceDistance;
    struct Vector2 InfluencePointOffset;
    bool IsDirectional;
    struct Vector2 InterestDirection;
    float AllowedTargetPositionDeviation;
    bool UseZoneBasedInfluence;
    struct Vector2 InfluenceZoneOffset;
    struct Vector2 InfluenceZoneSizeMin;
    struct Vector2 InfluenceZoneSizeMax;
    float FieldOfViewOffset;
    float FieldOfViewTargetZ;
    struct Transform* m_transform;
    struct Vector3 m_localStartPosition;
    bool m_registered;
    float m_currentWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicInterestPoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicInterestPoint__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DynamicInterestPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInterestPoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInterestPoint__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicInterestPoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInterestPoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
