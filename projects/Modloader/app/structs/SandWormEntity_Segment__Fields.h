#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormEntity_Segment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormEntity_Segment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_Segment__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SandWormEntity_Segment__Fields_DEFINED
struct VerletBody_Point;
struct VerletBody_Link;
struct Rigidbody;
struct CharacterJoint;
struct Collider;
struct Transform;
struct Transform__Array;
struct DamageReceiver;
struct EntityTargetting;
struct Vector3__Array;
struct __declspec(align(8)) SandWormEntity_Segment__Fields {
    float _DistanceOffset_k__BackingField;
    struct VerletBody_Point* _VerletPoint_k__BackingField;
    struct VerletBody_Link* _VerletLink_k__BackingField;
    struct Vector3 _Velocity_k__BackingField;
    struct Rigidbody* _Rigidbody_k__BackingField;
    struct CharacterJoint* _CharacterJoint_k__BackingField;
    struct Collider* _Collider_k__BackingField;
    bool _Pinned_k__BackingField;
    float _RotationYVelocity_k__BackingField;
    struct Transform* Transform;
    struct Transform* RotationTransform;
    struct Transform* ScaledTransfrom;
    struct Transform__Array* ScaledTransformChildren;
    struct DamageReceiver* DamageReceiver;
    struct EntityTargetting* _Targetting_k__BackingField;
    struct Vector3__Array* ChildrenLocalPositions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormEntity_Segment__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormEntity_Segment__Fields_FWDDECL
#include <Modloader/app/structs/CharacterJoint.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/VerletBody_Link.h>
#include <Modloader/app/structs/VerletBody_Point.h>
#endif
#undef IL2CPP_STRUCT_SandWormEntity_Segment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_Segment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormEntity_Segment__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormEntity_Segment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormEntity_Segment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
