#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HammerTrail__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HammerTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HammerTrail__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_HammerTrail__Fields_DEFINED
struct LineRenderer;
struct HammerTrail_TrailPoint__Array;
struct Transform;
struct HammerTrail__Fields {
    struct MonoBehaviour__Fields _;
    float DistanceThreshold;
    int32_t PointsPerUnitDistance;
    float Duration;
    struct LineRenderer* m_lineRenderer;
    struct Vector3 m_lastPosition;
    struct Vector3 m_lastRotationCenterPosition;
    struct HammerTrail_TrailPoint__Array* m_trail;
    int32_t m_trailBegin;
    int32_t m_trailEnd;
    struct Transform* m_tracedPoint;
    struct Transform* m_rotationCenter;
    bool m_initialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HammerTrail__Fields_FWDDECL)
#define IL2CPP_STRUCT_HammerTrail__Fields_FWDDECL
#include <Modloader/app/structs/HammerTrail_TrailPoint__Array.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HammerTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HammerTrail__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HammerTrail__Fields_FWDDECL)
#include <Modloader/app/structs/HammerTrail__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HammerTrail__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
