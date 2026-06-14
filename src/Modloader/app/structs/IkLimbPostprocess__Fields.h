#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IkLimbPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IkLimbPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkLimbPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_IkLimbPostprocess__Fields_DEFINED
struct Transform;
struct LimbIK;
struct IkLimbPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct Transform* Root;
    float Radius;
    bool UseRayCast;
    struct Vector3 Anchor;
    float InnerDistance;
    float OuterDistance;
    float GroundHigh;
    float GroundTarget;
    float GroundLow;
    struct LayerMask LayerMask;
    bool Raycast3D;
    float AlignFootToGround;
    int32_t m_layerMask;
    struct LimbIK* m_solver;
    struct Vector3 m_groundNormal;
    struct Vector3 m_resultEndPosition;
    bool m_cachedSurface;
    struct Vector3 m_cachedCastOrigin;
    struct Vector3 m_cachedCastDir;
    struct Vector3 m_cachedSurfacePoint;
    struct Vector3 m_cachedSurfaceNormal;
    bool SurfaceCacheEnabled;
    bool SurfaceCacheDebugEnabled;
    float SurfaceCacheDist;
    float SurfaceCacheAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IkLimbPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_IkLimbPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/LimbIK.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IkLimbPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkLimbPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IkLimbPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/IkLimbPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IkLimbPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
