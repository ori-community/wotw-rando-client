#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachToRope__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachToRope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToRope__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_AttachToRope__Fields_DEFINED
struct Rope;
struct ConfigurableJoint;
struct AttachToRope__Fields {
    struct MonoBehaviour__Fields _;
    struct Rope* RopeToAttachTo;
    struct Vector3 AttachmentPointOffset;
    bool UseDebug;
    bool AllowRotation;
    float RotationSpring;
    float RotationDampening;
    bool IsManagedByPhysicsSystemManager;
    struct ConfigurableJoint* m_generatedConfigurableJoint;
    bool m_shouldBeAttachedAfterLoading;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttachToRope__Fields_FWDDECL)
#define IL2CPP_STRUCT_AttachToRope__Fields_FWDDECL
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/Rope.h>
#endif
#undef IL2CPP_STRUCT_AttachToRope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToRope__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AttachToRope__Fields_FWDDECL)
#include <Modloader/app/structs/AttachToRope__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachToRope__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
