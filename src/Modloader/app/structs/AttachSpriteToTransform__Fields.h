#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachSpriteToTransform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachSpriteToTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachSpriteToTransform__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_AttachSpriteToTransform__Fields_DEFINED
struct Transform;
struct AttachSpriteToTransform__Fields {
    struct MonoBehaviour__Fields _;
    bool use2Points;
    bool attachToWorld;
    float movementAmount;
    float rotationAmount;
    float stretchAmount;
    struct Vector3 anchor1;
    struct Vector3 anchor2;
    struct Transform* ConnectedTransform1;
    struct Transform* ConnectedTransform2;
    struct Vector3 m_connectedAnchor1;
    struct Vector3 m_connectedAnchor2;
    struct Vector3 m_initialPosition;
    struct Quaternion m_InitialRotation;
    struct Quaternion m_rotationDelta;
    struct Vector3 m_initialScale;
    float m_initiaStretchDistance;
    bool m_stretchHorizontally;
    bool m_shouldBeAttachedAfterLoading;
    bool m_isSuspended;
    struct Transform* m_transform;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttachSpriteToTransform__Fields_FWDDECL)
#define IL2CPP_STRUCT_AttachSpriteToTransform__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AttachSpriteToTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachSpriteToTransform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AttachSpriteToTransform__Fields_FWDDECL)
#include <Modloader/app/structs/AttachSpriteToTransform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachSpriteToTransform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
