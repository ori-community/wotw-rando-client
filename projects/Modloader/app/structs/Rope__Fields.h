#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Rope__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Rope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rope__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Rope__Fields_DEFINED
struct RopePhysicsSettings;
struct List_1_UnityEngine_Transform_;
struct LineRenderer;
struct AttachJointSettings;
struct Rope_LinkData__Array;
struct Rope__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 LineRendererEndOffset;
    struct Vector2 LineRendererStartOffset;
    bool IsManagedByPhysicsSystemManager;
    float RopeWidth;
    float LinkDensity;
    struct RopePhysicsSettings* PhysicsSettings;
    struct List_1_UnityEngine_Transform_* Links;
    bool FreeRotationAtTheStart;
    struct LineRenderer* m_lineRenderer;
    bool UseNewTypeJoint;
    struct AttachJointSettings* NewTypeJointSettings;
    struct Vector3 _OffsetBetweenLinks_k__BackingField;
    float _EffectiveLinkDensity_k__BackingField;
    struct Rope_LinkData__Array* m_linkData;
    bool m_isInitialised;
    bool m_updateLineRendererInPlayMode;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Rope__Fields_FWDDECL)
#define IL2CPP_STRUCT_Rope__Fields_FWDDECL
#include <Modloader/app/structs/AttachJointSettings.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/RopePhysicsSettings.h>
#include <Modloader/app/structs/Rope_LinkData__Array.h>
#endif
#undef IL2CPP_STRUCT_Rope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rope__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Rope__Fields_FWDDECL)
#include <Modloader/app/structs/Rope__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Rope__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
