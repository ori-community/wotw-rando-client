#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachSoundToPhysicsSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachSoundToPhysicsSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachSoundToPhysicsSystem__Fields_DEFINED)
#include <Modloader/app/structs/AttachSoundToPhysicsSystem_SoundTypes__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AttachSoundToPhysicsSystem_SoundTypes__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_AttachSoundToPhysicsSystem__Fields_DEFINED
struct SoundHost;
struct RTPC;
struct Transform;
struct IPhysicsAttachable;
struct AttachSoundToPhysicsSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundHost* SoundHost;
    struct RTPC* RTPC;
    AttachSoundToPhysicsSystem_SoundTypes__Enum SoundType;

    float SpeedScaling;
    struct Transform* attachToSystem;
    bool AttachToWorld;
    struct Vector3 anchor1;
    struct Vector3 anchor2;
    struct Transform* m_connectedTransform1;
    struct Transform* m_connectedTransform2;
    struct IPhysicsAttachable* m_physicsSystem;
    struct Vector3 m_connectedAnchor1;
    struct Vector3 m_connectedAnchor2;
    float m_initiaStretchDistance;
    bool m_isSuspended;
    struct Transform* m_transform;
    float m_oldDistance;
    float m_oldDeltaAngle;
    float m_oldAngle;
    float m_rtpcValue;
    float m_distanceSpeed;
    float m_rotationSpeed;
    bool m_initialized;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttachSoundToPhysicsSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_AttachSoundToPhysicsSystem__Fields_FWDDECL
#include <Modloader/app/structs/IPhysicsAttachable.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AttachSoundToPhysicsSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachSoundToPhysicsSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AttachSoundToPhysicsSystem__Fields_FWDDECL)
#include <Modloader/app/structs/AttachSoundToPhysicsSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachSoundToPhysicsSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
