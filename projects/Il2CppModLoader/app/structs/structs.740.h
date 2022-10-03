namespace app {
    struct SwimBoostHelper__StaticFields {
    };

    struct SwimBoostHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SwimBoostHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SwimBoostHelper__VTable vtable;
    };

    enum class LauncherPlantEntity_State__Enum : int32_t {
        Opened = 0x00000000,
        Closing = 0x00000001,
        Closed = 0x00000002,
        Launching = 0x00000003,
        PostLaunch = 0x00000004,
        LaunchDelay = 0x00000005,
        Opening = 0x00000006,
    };

    struct LauncherPlantEntity_State__Enum__Boxed {
        struct LauncherPlantEntity_State__Enum__Class* klass;
        MonitorData* monitor;
        LauncherPlantEntity_State__Enum value;
    };

    struct LauncherPlantEntity__Fields {
        struct MonoBehaviour__Fields _;
        bool Controllable;
        bool UseJumpButton;
        struct Vector3 launchVelocity;
        bool randomEnemyVelocity;
        struct MessageProvider* pressJumpMessage;
        struct MessageProvider* controlAngleMessage;
        struct MessageBox* m_hintBox;
        float controlSpeed;
        float minAngle;
        float maxAngle;
        float launchReleaseRadius;
        struct MoonMath_VerletDynamicsValue* angleDynamics;
        struct PlayerInsideZoneChecker* collisionBox;
        struct Vector3 playerCatchAnchor;
        float launchDelayTime;
        struct SoftCollider* softCollider;
        float previewGravity;
        float previewMaxFallSpeed;
        struct MoonAnimator* Animator;
        struct LegacyTimelineSequence* openedTimeline;
        struct LegacyTimelineSequence* closedTimeline;
        struct LegacyTimelineSequence* swallowTimeline;
        struct LegacyTimelineSequence* launchTimeline;
        struct TimelineEventTrigger* hideTrigger;
        struct TimelineEventTrigger* releaseTrigger;
        struct FloatAnimationParameter* launchAngleParameter;
        struct Transform* characterJoint;
        struct AnimationPostprocess* touchPostprocess;
        struct ParticleSystem* ParticleSystem;
        struct LineRenderer* lineRenderer;
        float lineAlpha;
        int32_t previewStepsPerLineSegment;
        struct Transform* lineJoint;
        struct Transform* tip1;
        struct Transform* tip2;
        struct Transform* tip3;
        LauncherPlantEntity_State__Enum m_State;

        float m_stateTime;
        float m_launchSpeed;
        bool m_launchingPlayer;
        struct ILaunchable* m_Launchable;
        struct Collider* m_launchingCollider;
        float m_lineAlpha;
    };

    struct LauncherPlantEntity {
        struct LauncherPlantEntity__Class* klass;
        MonitorData* monitor;
        struct LauncherPlantEntity__Fields fields;
    };

    struct SoftCollider__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector2 pushForce;
        float maxSpeed;
        struct SphereCollider* Collider;
        struct Rigidbody* Rigidbody;
        struct Action_2_UnityEngine_Collider_UnityEngine_Vector2_* OnSoftCollisionEnter;
        struct Action_2_UnityEngine_Collider_UnityEngine_Vector2_* OnSoftCollisionStay;
        struct Action_1_UnityEngine_Collider_* OnSoftCollisionExit;
        struct Vector3 m_pushForce;
    };

    struct SoftCollider {
        struct SoftCollider__Class* klass;
        MonitorData* monitor;
        struct SoftCollider__Fields fields;
    };

    struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_2_UnityEngine_Collider_UnityEngine_Vector2_ {
        struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___Class* klass;
        MonitorData* monitor;
        struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___Fields fields;
    };

    struct ILaunchable {
        struct ILaunchable__Class* klass;
        MonitorData* monitor;
    };

    struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___StaticFields {
    };

    struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___VTable vtable;
    };

    struct SoftCollider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SoftCollider__StaticFields {
    };

    struct SoftCollider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoftCollider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoftCollider__VTable vtable;
    };

    struct LauncherPlantEntity_State__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct LauncherPlantEntity_State__Enum__StaticFields {
    };

    struct LauncherPlantEntity_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LauncherPlantEntity_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LauncherPlantEntity_State__Enum__VTable vtable;
    };

    struct ILaunchable__VTable {
        VirtualInvokeData ResolveLaunch;
        VirtualInvokeData ResolveLaunchIgnoreCollisions;
        VirtualInvokeData ResolveLaunchHide;
        VirtualInvokeData ResolveLaunchRelease;
        VirtualInvokeData UpdateLaunchPosition;
    };

    struct ILaunchable__StaticFields {
    };

    struct ILaunchable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ILaunchable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ILaunchable__VTable vtable;
    };

    struct LauncherPlantEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LauncherPlantEntity__StaticFields {
    };

    struct LauncherPlantEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LauncherPlantEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LauncherPlantEntity__VTable vtable;
    };

    struct ActivateLianaTongueAction__Fields {
        struct ActionMethod__Fields _;
        struct LianaEntity* Liana;
        bool ActivateTongue;
    };

    struct ActivateLianaTongueAction {
        struct ActivateLianaTongueAction__Class* klass;
        MonitorData* monitor;
        struct ActivateLianaTongueAction__Fields fields;
    };

    struct SnapTrapEntity_SnapTrapParameters {
        float StayClosedDuration;
        float StayOpenAfterCaughtDuration;
        float ChewDamage;
    };

    struct SnapTrapEntity_SnapTrapParameters__Boxed {
        struct SnapTrapEntity_SnapTrapParameters__Class* klass;
        MonitorData* monitor;
        struct SnapTrapEntity_SnapTrapParameters fields;
    };

    enum class SnapTrapEntity_State__Enum : int32_t {
        Frozen = 0x00000000,
        Opened = 0x00000001,
        Warning = 0x00000002,
        Closing = 0x00000003,
        Chewing = 0x00000004,
        Missed = 0x00000005,
        Opening = 0x00000006,
        Resting = 0x00000007,
    };

    struct SnapTrapEntity_State__Enum__Boxed {
        struct SnapTrapEntity_State__Enum__Class* klass;
        MonitorData* monitor;
        SnapTrapEntity_State__Enum value;
    };

    struct SnapTrapEntity__Fields {
        struct MonoBehaviour__Fields _;
        struct SoundBankEntry* SoundBank;
        struct DesiredUberStateBool* ThawedUberState;
        bool CanBeFrozen;
        struct GameObject* FrozenObj;
        struct GameObject* ThawedObj;
        struct MoonTimeline* IdleTimeline;
        struct MoonTimeline* WarnTimeline;
        struct MoonTimeline* ClosingTimeline;
        struct MoonTimeline* ClosedLoopTimeline;
        struct MoonTimeline* ChewingTimeline;
        struct MoonTimeline* OpeningAfterMissedTimeline;
        struct MoonTimeline* OpeningAfterCaughtTimeline;
        struct EventTriggerAnimator* CheckTrapTrigger;
        struct EventTriggerAnimator* ChewingDoDamageEvent;
        struct EventTriggerAnimator* ActivateOriAfterCaughtEvent;
        struct EventTriggerAnimator* FullyOpenedEvent;
        struct BoxCollider* CatchBoundsCollider;
        struct BoxCollider* ActivationTrigger;
        struct Transform* AfterCatchSeinPosition;
        struct Rigidbody* ThawedRigidBody;
        struct SnapTrapEntity_SnapTrapParameters Parameters;
        struct List_1_UnityEngine_GameObject_* CrushPlayerTriggers;
        struct PhysicalSystemManager* PhysicalSystemManager;
        struct Rigidbody* AttachToBody;
        struct AttachJointSettings* JointSettings;
        struct ConfigurableJoint* AttachmentJoint;
        struct Vector3 m_connectedAnchor;
        struct GameObject* ThawingEffect;
        struct GameObject* FreezingEffect;
        bool m_reattached;
        SuspendableMask__Enum m_suspensionMask;

        SnapTrapEntity_State__Enum m_state;

        float m_closedDuration;
        float m_restDuration;
        struct Collider__Array* m_catchResultsColliders;
        struct IDamageReciever* m_caughtDamageReceiver;
        bool m_isSuspended;
        struct Vector3 m_suspendedVelocity;
        struct SoundHost* m_soundHost;
        bool m_isScenarioInstance;
        bool m_crushDetectorsEnabled;
        struct TrackingExclusions _TrackingExclusions_k__BackingField;
    };

    struct SnapTrapEntity {
        struct SnapTrapEntity__Class* klass;
        MonitorData* monitor;
        struct SnapTrapEntity__Fields fields;
    };

    struct LianaEntity_LianaParameters {
        float ThawedTongueLength;
        float FrozenTongueLength;
        float ReelingSpeed;
        float ReelingCaughtSpeed;
        float UnreelingSpeed;
        float TongueReleaseWait;
        float SpitForce;
        float RopeGrabReleaseImpulse;
        float FrozenMouthOpenAmount;
    };

    struct LianaEntity_LianaParameters__Boxed {
        struct LianaEntity_LianaParameters__Class* klass;
        MonitorData* monitor;
        struct LianaEntity_LianaParameters fields;
    };

    enum class LianaEntity_TongueState__Enum : int32_t {
        Resting = 0x00000000,
        Reeling = 0x00000001,
        Releasing = 0x00000002,
        Recovering = 0x00000003,
    };

    struct LianaEntity_TongueState__Enum__Boxed {
        struct LianaEntity_TongueState__Enum__Class* klass;
        MonitorData* monitor;
        LianaEntity_TongueState__Enum value;
    };

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

    struct LianaEntity {
        struct LianaEntity__Class* klass;
        MonitorData* monitor;
        struct LianaEntity__Fields fields;
    };

    enum class GrabbableRope_RopeModes__Enum : int32_t {
        Horizontal = 0x00000000,
        Vertical = 0x00000001,
        Both = 0x00000002,
    };

    struct GrabbableRope_RopeModes__Enum__Boxed {
        struct GrabbableRope_RopeModes__Enum__Class* klass;
        MonitorData* monitor;
        GrabbableRope_RopeModes__Enum value;
    };

    enum class GrabbableRope_DirectionModes__Enum : int32_t {
        AutoReverse = 0x00000000,
        Forward = 0x00000001,
        Reversed = 0x00000002,
    };

    struct GrabbableRope_DirectionModes__Enum__Boxed {
        struct GrabbableRope_DirectionModes__Enum__Class* klass;
        MonitorData* monitor;
        GrabbableRope_DirectionModes__Enum value;
    };

    struct GrabbableRope__Fields {
        struct MonoBehaviour__Fields _;
        bool IsSlippery;
        struct List_1_UnityEngine_Transform_* Points;
        GrabbableRope_RopeModes__Enum Mode;

        struct ActionMethod* OnGrabAction;
        struct ActionMethod* OnReleaseAction;
        struct MoonTimeline* OnGrabTimeline;
        struct MoonTimeline* OnReleaseTimeline;
        bool HorisontalOrVerticalBasedOnRotation;
        GrabbableRope_DirectionModes__Enum DirectionMode;

        struct Condition_1* Condition;
        struct Vector3 m_lastForceApplied;
        bool HandStandAllowed;
    };

    struct GrabbableRope {
        struct GrabbableRope__Class* klass;
        MonitorData* monitor;
        struct GrabbableRope__Fields fields;
    };

    struct __declspec(align(8)) List_1_IGrabbableRope___Fields {
        struct IGrabbableRope__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_IGrabbableRope_ {
        struct List_1_IGrabbableRope___Class* klass;
        MonitorData* monitor;
        struct List_1_IGrabbableRope___Fields fields;
    };

    struct IGrabbableRope__Array {
        struct IGrabbableRope__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IGrabbableRope* vector[32];
    };

    struct IEnumerator_1_IGrabbableRope_ {
        struct IEnumerator_1_IGrabbableRope___Class* klass;
        MonitorData* monitor;
    };

    struct RopeReeler__Fields {
        struct MonoBehaviour__Fields _;
        struct Rope* Rope;
        float _LastLinkPercentage_k__BackingField;
        int32_t m_linkIndex;
        float m_distBetweenLinks;
    };

    struct RopeReeler {
        struct RopeReeler__Class* klass;
        MonitorData* monitor;
        struct RopeReeler__Fields fields;
    };

    struct LiannaStickyTongue__Fields {
        struct MonoBehaviour__Fields _;
        struct LianaEntity* LianaEntity;
        float ReelSpeed;
        struct Vector3 m_followOffset;
        struct Vector3 m_stuckPosition;
        struct Entity* m_stuckEntity;
    };

    struct LiannaStickyTongue {
        struct LiannaStickyTongue__Class* klass;
        MonitorData* monitor;
        struct LiannaStickyTongue__Fields fields;
    };

    struct LianaEntity_TongueJoint {
        struct Transform* Transform;
        struct Transform* MinLink;
        struct Transform* MaxLink;
    };

    struct LianaEntity_TongueJoint__Boxed {
        struct LianaEntity_TongueJoint__Class* klass;
        MonitorData* monitor;
        struct LianaEntity_TongueJoint fields;
    };

    struct LianaEntity_TongueJoint__Array {
        struct LianaEntity_TongueJoint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LianaEntity_TongueJoint vector[32];
    };

    struct SnapTrapEntity_SnapTrapParameters__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SnapTrapEntity_SnapTrapParameters__StaticFields {
    };

    struct SnapTrapEntity_SnapTrapParameters__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SnapTrapEntity_SnapTrapParameters__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SnapTrapEntity_SnapTrapParameters__VTable vtable;
    };

    struct SnapTrapEntity_State__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct SnapTrapEntity_State__Enum__StaticFields {
    };

    struct SnapTrapEntity_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SnapTrapEntity_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SnapTrapEntity_State__Enum__VTable vtable;
    };

    struct SnapTrapEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnEnable;
        VirtualInvokeData FixedUpdate;
        VirtualInvokeData Suspend;
        VirtualInvokeData Resume;
        VirtualInvokeData Freeze;
        VirtualInvokeData Closed;
        VirtualInvokeData ReactivateOri;
        VirtualInvokeData DoneChewing;
        VirtualInvokeData OpenedAfterCatch;
        VirtualInvokeData OpenedAfterMiss;
    };

    struct SnapTrapEntity__StaticFields {
    };

    struct SnapTrapEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SnapTrapEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SnapTrapEntity__VTable vtable;
    };

    struct LianaEntity_LianaParameters__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LianaEntity_LianaParameters__StaticFields {
    };

    struct LianaEntity_LianaParameters__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LianaEntity_LianaParameters__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LianaEntity_LianaParameters__VTable vtable;
    };

    struct IGrabbableRope__Array__VTable {
    };

    struct IGrabbableRope__Array__StaticFields {
    };

    struct IGrabbableRope__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IGrabbableRope__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IGrabbableRope__Array__VTable vtable;
    };

    struct IEnumerator_1_IGrabbableRope___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_IGrabbableRope___StaticFields {
    };

    struct IEnumerator_1_IGrabbableRope___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_IGrabbableRope___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_IGrabbableRope___VTable vtable;
    };

    struct List_1_IGrabbableRope___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData RemoveAt_1;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData get_Count_2;
    };

    struct List_1_IGrabbableRope___StaticFields {
        struct IGrabbableRope__Array* _emptyArray;
    };

    struct List_1_IGrabbableRope___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_IGrabbableRope___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_IGrabbableRope___VTable vtable;
    };

    struct GrabbableRope_RopeModes__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct GrabbableRope_RopeModes__Enum__StaticFields {
    };

    struct GrabbableRope_RopeModes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrabbableRope_RopeModes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrabbableRope_RopeModes__Enum__VTable vtable;
    };

    struct GrabbableRope_DirectionModes__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct GrabbableRope_DirectionModes__Enum__StaticFields {
    };

    struct GrabbableRope_DirectionModes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrabbableRope_DirectionModes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrabbableRope_DirectionModes__Enum__VTable vtable;
    };

    struct GrabbableRope__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CanGrab;
        VirtualInvokeData OnGrabbed;
        VirtualInvokeData OnReleased;
        VirtualInvokeData GetPosition;
        VirtualInvokeData GetPosition_1;
        VirtualInvokeData GetDirection;
        VirtualInvokeData GetHorizontalAngle;
        VirtualInvokeData GetVerticalAngle;
        VirtualInvokeData IsVertical;
        VirtualInvokeData AdvancePosition;
        VirtualInvokeData AllowVertical;
        VirtualInvokeData AllowHorizontal;
        VirtualInvokeData AddForce;
        VirtualInvokeData AddImpulse;
        VirtualInvokeData RopeMinPosition;
        VirtualInvokeData RopeMaxPosition;
        VirtualInvokeData IsRopeSlippery;
        VirtualInvokeData CanHandStand;
        VirtualInvokeData OnGrabbed_1;
        VirtualInvokeData OnReleased_1;
    };

    struct GrabbableRope__StaticFields {
        struct List_1_IGrabbableRope_* All;
    };

    struct GrabbableRope__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrabbableRope__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrabbableRope__VTable vtable;
    };

    struct RopeReeler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RopeReeler__StaticFields {
    };

    struct RopeReeler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RopeReeler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RopeReeler__VTable vtable;
    };

    struct LiannaStickyTongue__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LiannaStickyTongue__StaticFields {
    };

    struct LiannaStickyTongue__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LiannaStickyTongue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LiannaStickyTongue__VTable vtable;
    };

    struct LianaEntity_TongueState__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct LianaEntity_TongueState__Enum__StaticFields {
    };

    struct LianaEntity_TongueState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LianaEntity_TongueState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LianaEntity_TongueState__Enum__VTable vtable;
    };

    struct LianaEntity_TongueJoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LianaEntity_TongueJoint__StaticFields {
    };

    struct LianaEntity_TongueJoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LianaEntity_TongueJoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LianaEntity_TongueJoint__VTable vtable;
    };

    struct LianaEntity_TongueJoint__Array__VTable {
    };

    struct LianaEntity_TongueJoint__Array__StaticFields {
    };

    struct LianaEntity_TongueJoint__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LianaEntity_TongueJoint__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LianaEntity_TongueJoint__Array__VTable vtable;
    };

    struct LianaEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnEnable;
        VirtualInvokeData FixedUpdate;
        VirtualInvokeData Suspend;
        VirtualInvokeData Resume;
        VirtualInvokeData Freeze;
        VirtualInvokeData Closed;
        VirtualInvokeData ReactivateOri;
        VirtualInvokeData DoneChewing;
        VirtualInvokeData OpenedAfterCatch;
        VirtualInvokeData OpenedAfterMiss;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
        VirtualInvokeData OnSceneRootPostEnable;
        VirtualInvokeData get_ShouldDisable;
        VirtualInvokeData get_ShouldEnable;
        VirtualInvokeData get_ShouldChildrenEnable;
        VirtualInvokeData get_ShouldSetMoonReady;
        VirtualInvokeData OnSceneRootPreDisable;
    };

} // namespace app
