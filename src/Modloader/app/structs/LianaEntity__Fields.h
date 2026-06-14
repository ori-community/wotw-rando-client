#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LianaEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LianaEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaEntity__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/LianaEntity_LianaParameters.h>
#include <Modloader/app/structs/LianaEntity_TongueState__Enum.h>
#include <Modloader/app/structs/Rope_LinkData.h>
#include <Modloader/app/structs/SnapTrapEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SnapTrapEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_LianaEntity_LianaParameters_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LianaEntity_TongueState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Rope_LinkData_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_LianaEntity__Fields_DEFINED
struct MoonTimeline;
struct Rope;
struct GrabbableRope;
struct RopeReeler;
struct Transform;
struct GameObject;
struct Rigidbody;
struct LiannaStickyTongue;
struct Event_1;
struct LianaEntity_TongueJoint__Array;
struct Transform__Array;
struct Vector3__Array;
struct Quaternion__Array;
struct LianaEntity__Fields {
    struct SnapTrapEntity__Fields _;
    struct LianaEntity_LianaParameters LianaParams;
    struct MoonTimeline* PullStartTimeline;
    struct MoonTimeline* PullLoopTimeline;
    struct Rope* ThawedTongueRope;
    float ThawedDefaultLinkDensity;
    struct Rope* FrozenTongueRope;
    float FrozenDefaultLinkDensity;
    struct GrabbableRope* FrozenGrabbableRope;
    struct GrabbableRope* ThawedGrabbableRope;
    struct RopeReeler* ThawedRopeReeler;
    struct Transform* LeftFrozenLeaf;
    struct Transform* RightFrozenLeaf;
    struct Vector3 LeftFrozenLeafDefaultRotation;
    struct Vector3 RightFrozenLeafDefaultRotation;
    struct Transform* FirstFrozenTongueJoint;
    struct Transform* LastFrozenTongueJoint;
    struct Transform* FirstThawedTongueJoint;
    struct Transform* LastThawedTongueJoint;
    struct GameObject* ThawedModel;
    struct GameObject* FrozenModel;
    struct Transform* FrozenBulbTopJoint;
    struct Transform* ThawedBulbTopJoint;
    struct Rigidbody* ThawedTongueWeight;
    struct Rigidbody* FrozenTongueWeight;
    struct LiannaStickyTongue* StickyTongue;
    struct Event_1* WwiseRopeGoUpStart;
    struct Event_1* WwiseRopeGoUpStop;
    struct Event_1* WwiseRopeGoDownStart;
    struct Event_1* WwiseRopeGoDownStop;
    float m_releasingWaitTimer;
    float WaitBeforeReleasing;
    LianaEntity_TongueState__Enum m_tongueState;

    float m_tongueReelSpeed;
    struct LianaEntity_TongueJoint__Array* m_frozenTongueJoints;
    float m_frozenTongueJointsPerRopeJoints;
    struct LianaEntity_TongueJoint__Array* m_thawedTongueJoints;
    float m_thawedTongueJointsPerRopeJoints;
    struct Rope_LinkData m_thawedLinkData;
    struct Rope_LinkData m_frozenLinkData;
    struct Transform* m_frozenRigTongueJointsParent;
    struct Transform* m_thawedRigTongueJointsParent;
    struct Transform* m_lastThawedRopeLink;
    struct Transform* m_lastFrozenRopeLink;
    struct Vector3 m_thawedBulbJointOffset;
    struct Transform__Array* m_thawedJointTransforms;
    struct Transform__Array* m_frozenJointTransforms;
    struct Vector3__Array* m_jointPositions;
    struct Quaternion__Array* m_jointRotations;
    struct Vector3__Array* m_jointScales;
    bool m_isInFrustum;
    bool m_awakeCalled;
    bool m_needsToRegister;
    struct Bounds _Bounds_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LianaEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_LianaEntity__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GrabbableRope.h>
#include <Modloader/app/structs/LianaEntity_TongueJoint__Array.h>
#include <Modloader/app/structs/LiannaStickyTongue.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Rope.h>
#include <Modloader/app/structs/RopeReeler.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_LianaEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LianaEntity__Fields_FWDDECL)
#include <Modloader/app/structs/LianaEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LianaEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
