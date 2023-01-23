#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TorchHandAnimationPostproces__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TorchHandAnimationPostproces__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TorchHandAnimationPostproces__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_TorchHandAnimationPostproces__Fields_DEFINED
struct String;
struct MoonAnimation;
struct Transform;
struct TorchHandAnimationPostproces__Fields {
    struct AnimationPostprocess__Fields _;
    struct String* ArmJointName;
    float ArmYRotation;
    struct MoonAnimation* TorchHoldAnimation;
    struct Transform* m_shoulderJoint;
    struct Transform* m_armLeftJoint;
    struct Quaternion m_armLeftLastQuaternion;
    struct Quaternion m_armLeftTorchQuaternion;
    int32_t m_previousDirection;
    bool m_isInitialized;
    struct ActiveAnimationHandle m_torchHoldAnimation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TorchHandAnimationPostproces__Fields_FWDDECL)
#define IL2CPP_STRUCT_TorchHandAnimationPostproces__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TorchHandAnimationPostproces__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TorchHandAnimationPostproces__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TorchHandAnimationPostproces__Fields_FWDDECL)
#include <Modloader/app/structs/TorchHandAnimationPostproces__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TorchHandAnimationPostproces__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
