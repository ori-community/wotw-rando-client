#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCCameraTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCCameraTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCCameraTransition__Fields_DEFINED)
#include <Modloader/app/structs/NPCCameraBlendState__Enum.h>
#include <Modloader/app/structs/NPCCameraPositionBlendState__Enum.h>
#include <Modloader/app/structs/NPCCameraTargetPositionType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_NPCCameraBlendState__Enum_DEFINED) && defined(IL2CPP_STRUCT_NPCCameraPositionBlendState__Enum_DEFINED) && defined(IL2CPP_STRUCT_NPCCameraTargetPositionType__Enum_DEFINED)
#define IL2CPP_STRUCT_NPCCameraTransition__Fields_DEFINED
struct Transform;
struct AnimationCurve;
struct __declspec(align(8)) NPCCameraTransition__Fields {
    struct Transform* NpcTargetRight;
    struct Transform* OpenStoreTargetRight;
    struct Transform* NpcTargetLeft;
    struct Transform* OpenStoreTargetLeft;
    struct Transform* CameraTarget;
    struct Transform* m_cachedNpcTarget;
    struct Transform* m_cachedOpenStoreTarget;
    struct Vector3 m_npcTransformPosition;
    NPCCameraBlendState__Enum m_cameraState;

    NPCCameraPositionBlendState__Enum m_positionBlendState;

    struct Vector3 m_start;
    NPCCameraTargetPositionType__Enum m_target;

    float m_curveTime;
    float m_positionBlendTimer;
    float m_positionBlendTime;
    struct AnimationCurve* BlendCurve;
    struct AnimationCurve* PositionCurveNormalized;
    bool m_isRegistered;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCCameraTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_NPCCameraTransition__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_NPCCameraTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCCameraTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NPCCameraTransition__Fields_FWDDECL)
#include <Modloader/app/structs/NPCCameraTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCCameraTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
