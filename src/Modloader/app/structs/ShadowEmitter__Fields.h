#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShadowEmitter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShadowEmitter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShadowEmitter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ShadowEmitter__Fields_DEFINED
struct Transform;
struct AnimationCurve;
struct RaycastHit__Array;
struct Renderer__Array;
struct ShadowEmitter__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Graphics;
    float GroundDistanceThreshold;
    struct AnimationCurve* ScaleX;
    struct AnimationCurve* ScaleY;
    float MaxScaleX;
    float MaxScaleY;
    bool RotateWithSurface;
    struct Transform* ReferencePointA;
    struct Transform* ReferencePointB;
    bool InvertFlip;
    struct Transform* CastAnchor;
    float CastLength;
    struct Vector3 CastDirection;
    bool CastAtZeroZ;
    bool DrawGizmos;
    struct Vector3 ShadowPosition;
    struct Vector3 ShadowNormal;
    float ShadowYRotation;
    struct Transform* GroundAnchor;
    struct Transform* PerspectiveAnchor;
    struct RaycastHit__Array* m_groundRaycastHits;
    struct Renderer__Array* m_renderers;
    int32_t m_castRequestID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShadowEmitter__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShadowEmitter__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ShadowEmitter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShadowEmitter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShadowEmitter__Fields_FWDDECL)
#include <Modloader/app/structs/ShadowEmitter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShadowEmitter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
