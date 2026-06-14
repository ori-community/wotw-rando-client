#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformPositionRotationFollower__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformPositionRotationFollower__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformPositionRotationFollower__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TransformPositionRotationFollower__Fields_DEFINED
struct Transform;
struct String;
struct Rigidbody;
struct TransformPositionRotationFollower__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Target;
    struct String* TargetName;
    bool ZeroWorldRotation;
    bool FollowRotation;
    bool FollowExactPosition;
    bool OnlyZRotation;
    struct Quaternion m_relativeRotation;
    struct Vector3 m_relativePosition;
    struct Rigidbody* m_rigidbody;
    bool m_initialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformPositionRotationFollower__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransformPositionRotationFollower__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TransformPositionRotationFollower__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformPositionRotationFollower__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransformPositionRotationFollower__Fields_FWDDECL)
#include <Modloader/app/structs/TransformPositionRotationFollower__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformPositionRotationFollower__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
