#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinController3D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinController3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinController3D__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_SeinController3D__Fields_DEFINED
struct Action_1_SeinController3D_EventId_;
struct Action_1_String_;
struct MoonAnimator;
struct Transform;
struct GameObject;
struct PerspectiveRotationAdjustment;
struct IPuppet;
struct Renderer;
struct OriHeadIk;
struct SeinController3D__Fields {
    struct MonoBehaviour__Fields _;
    struct Action_1_SeinController3D_EventId_* OnAnimationEventCallback;
    struct Action_1_String_* OnStringAnimationEventCallback;
    struct MoonAnimator* Animator;
    struct Transform* mirrorHolder;
    struct GameObject* modelGroup;
    struct GameObject* fadeModelGroup;
    struct Transform* followTrans;
    struct Transform* mirrorTrans;
    struct Transform* pelvisTrans;
    struct Transform* getItem;
    struct Transform* throwGrenade;
    struct Transform* rootPoint;
    struct Transform* weapon1Point;
    struct Transform* rightHandPoint;
    struct Transform* m_ItemSlotPalmL;
    struct Transform* itemSlotPalmR;
    struct Transform* LightsTransform;
    float TargetRootAngle;
    float RootAngleChangeSpeed;
    bool active;
    float AnimationMovementSpeed;
    float AnimationMovementSlope;
    float KeepRigAtOriginSpeed;
    struct Transform* CenterOfMassPoint;
    struct Transform* GroundPoint;
    struct PerspectiveRotationAdjustment* m_perspectiveAdjustment;
    float m_slopeTarget;
    float m_currentSlopeValue;
    float m_slopeUpdateDuration;
    float m_currentRootAngle;
    struct Transform* m_myTransform;
    bool m_isInstance;
    struct IPuppet* m_puppetMaster;
    int32_t m_direction;
    float m_mirrorHolderResetTimer;
    float m_mirrorHolderResetDuration;
    float m_fromRotation;
    bool m_hasEmissivity;
    struct Vector4 m_defaultEmissivity;
    struct Renderer* m_renderer;
    bool m_alphaBlendedHasEmissivity;
    struct Vector4 m_alphaBlendedDefaultEmissivity;
    struct Renderer* m_alphaBlendedRenderer;
    struct OriHeadIk* _OriHeadIk_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinController3D__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinController3D__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_SeinController3D_EventId_.h>
#include <Modloader/app/structs/Action_1_String_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IPuppet.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/OriHeadIk.h>
#include <Modloader/app/structs/PerspectiveRotationAdjustment.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinController3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinController3D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinController3D__Fields_FWDDECL)
#include <Modloader/app/structs/SeinController3D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinController3D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
