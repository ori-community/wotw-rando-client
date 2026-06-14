#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrabbableSurface__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrabbableSurface__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableSurface__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GrabbableSurface__Fields_DEFINED
struct Rigidbody;
struct Transform;
struct MeshCollider;
struct GrabbableSurface_PositionInfo;
struct List_1_UnityEngine_Vector3_;
struct GrabbableSurface__Fields {
    struct MonoBehaviour__Fields _;
    struct Rigidbody* PullRigidbody;
    float PullForce;
    bool ShouldGrabOnFlatGroundAngles;
    bool PerformReleaseRaycastTest;
    bool UseStopPoints;
    struct Vector3 StopPointA;
    struct Vector3 StopPointB;
    struct Vector3 m_stopPointAWorld;
    struct Vector3 m_stopPointBWorld;
    int32_t _SpiritLeashCost_k__BackingField;
    struct Transform* _HookTargetTransform_k__BackingField;
    float _PositionOffset_k__BackingField;
    struct MeshCollider* m_meshCollider;
    struct GrabbableSurface_PositionInfo* m_positionInfo;
    struct GrabbableSurface_PositionInfo* m_positionFront;
    struct GrabbableSurface_PositionInfo* m_positionBack;
    struct List_1_UnityEngine_Vector3_* m_vertices;
    struct List_1_UnityEngine_Vector3_* m_normals;
    struct List_1_UnityEngine_Vector3_* m_verticesWorld;
    struct List_1_UnityEngine_Vector3_* m_normalsWorld;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrabbableSurface__Fields_FWDDECL)
#define IL2CPP_STRUCT_GrabbableSurface__Fields_FWDDECL
#include <Modloader/app/structs/GrabbableSurface_PositionInfo.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MeshCollider.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GrabbableSurface__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableSurface__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GrabbableSurface__Fields_FWDDECL)
#include <Modloader/app/structs/GrabbableSurface__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrabbableSurface__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
