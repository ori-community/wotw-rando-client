#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetBreadcrumbsTracker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetBreadcrumbsTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetBreadcrumbsTracker__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TargetBreadcrumbsTracker__Fields_DEFINED
struct List_1_UnityEngine_Vector3_;
struct Transform;
struct Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_;
struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3_;
struct TargetBreadcrumbsTracker__Fields {
    struct MonoBehaviour__Fields _;
    bool DebugShowBreadcrumbs;
    float DebugDrawPointRadius;
    struct List_1_UnityEngine_Vector3_* m_points;
    float m_timeToForcedRecord;
    struct Vector3 m_lastTargetPosition;
    float m_minDistanceBetweenPointsSqr;
    struct Vector3 m_debugTrimPoint1;
    struct Vector3 m_debugTrimPoint2;
    struct Transform* _FollowedTarget_k__BackingField;
    float _ForcedRecordInterval_k__BackingField;
    struct Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_* m_checkClearance;
    struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3_* m_processAddedPoint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetBreadcrumbsTracker__Fields_FWDDECL)
#define IL2CPP_STRUCT_TargetBreadcrumbsTracker__Fields_FWDDECL
#include <Modloader/app/structs/Func_2_UnityEngine_Vector3_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TargetBreadcrumbsTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetBreadcrumbsTracker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TargetBreadcrumbsTracker__Fields_FWDDECL)
#include <Modloader/app/structs/TargetBreadcrumbsTracker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetBreadcrumbsTracker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
