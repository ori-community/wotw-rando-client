namespace app {
struct HookFlingPlant {
    struct HookFlingPlant__Class *klass;
    MonitorData *monitor;
    struct HookFlingPlant__Fields fields;
};

struct HookFlingPlant__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData get_Position;
    VirtualInvokeData IsDead;
    VirtualInvokeData CanBeChargeFlamed;
    VirtualInvokeData CanBeChargeDashed;
    VirtualInvokeData CanBeGrenaded;
    VirtualInvokeData CanBeStomped;
    VirtualInvokeData CanBeBashed;
    VirtualInvokeData CanBeSpiritFlamed;
    VirtualInvokeData IsStompBouncable;
    VirtualInvokeData CanBeLevelUpBlasted;
    VirtualInvokeData CanBeSpiritSlashed;
    VirtualInvokeData CanBeHitByBow;
    VirtualInvokeData CanBeHitByMelee;
    VirtualInvokeData CanBeHitByHammerHandle;
    VirtualInvokeData CanBeHeavySpiritSlashed;
    VirtualInvokeData CanBeSpiritLeashed;
    VirtualInvokeData CanBeHomingMissiled;
    VirtualInvokeData CanBeTrapped;
    VirtualInvokeData CanBeSpiritSpeared;
    VirtualInvokeData CanBeTeleportedByBeacon;
    VirtualInvokeData CanBeGlowed;
    VirtualInvokeData get_AffectedReceivers;
    VirtualInvokeData get_SpiritLeashCost;
    VirtualInvokeData OnSpiritLeashHighlight;
    VirtualInvokeData OnSpiritLeashDehighlight;
    VirtualInvokeData OnSpiritLeashed;
    VirtualInvokeData get_HookTargetTransform;
    VirtualInvokeData ISpiritLeashAttackable_get_PositionOffset;
    VirtualInvokeData get_OriCloseEnoughDistance;
    VirtualInvokeData get_ShouldDecelerateOnApproach;
    VirtualInvokeData get_CanBeSustained;
    VirtualInvokeData get_LeashInteractionMode;
    VirtualInvokeData get_IsHookHorizontal;
    VirtualInvokeData set_IsHookHorizontal;
    VirtualInvokeData get_IsHookSticky;
    VirtualInvokeData set_IsHookSticky;
    VirtualInvokeData get_StressTested;
    VirtualInvokeData set_StressTested;
    VirtualInvokeData get_HookTransform;
    VirtualInvokeData ISpiritLeashHook_get_HookTargetTransform;
    VirtualInvokeData get_CameraTargetActive;
    VirtualInvokeData get_CameraTargetPosition;
    VirtualInvokeData get_CameraTargetPadding;
    VirtualInvokeData get_CameraInfluencePosition;
    VirtualInvokeData AdjustCameraTargetWeight;
    VirtualInvokeData get_CameraInfluenceMinDist;
    VirtualInvokeData get_CameraInfluenceMaxDist;
    VirtualInvokeData get_CameraZoomFactor;
    VirtualInvokeData get_TargetType;
    VirtualInvokeData GetTargetData;
    VirtualInvokeData OnSceneRootPostEnable;
    VirtualInvokeData OnSceneRootPreDisable;
    VirtualInvokeData OnCameraFrustumSuspended;
    VirtualInvokeData OnCameraFrustumResumed;
    VirtualInvokeData get_OriCloseEnoughDistance_1;
    VirtualInvokeData get_ShouldDecelerateOnApproach_1;
    VirtualInvokeData CanBeSpiritLeashed_1;
    VirtualInvokeData get_HookTargetTransform_1;
    VirtualInvokeData OnSpiritLeashed_1;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
};

struct HookFlingPlant__StaticFields {
};

struct HookFlingPlant__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HookFlingPlant__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HookFlingPlant__VTable vtable;
};

struct HookPlant_c {
    struct HookPlant_c__Class *klass;
    MonitorData *monitor;
};

struct HookPlant_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HookPlant_c__StaticFields {
    struct HookPlant_c *__9;
    struct Action *__9__26_0;
};

struct HookPlant_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HookPlant_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HookPlant_c__VTable vtable;
};

struct SpiritLeashEffect__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve *CircleScaleAnimation;
    struct LineRenderer *LineRenderer;
    struct Transform *CircleTransform;
    struct SeinCharacter *m_sein;
    struct IAttackable *m_target;
    struct Vector3 m_circleStartScale;
    float m_effectDuration;
    float m_currentTime;
    struct AnimationCurve *Curve;
    struct AnimationCurve *DistanceOverTime;
    int32_t VertexCount;
    struct Vector3__Array *m_positions;
};

struct SpiritLeashEffect {
    struct SpiritLeashEffect__Class *klass;
    MonitorData *monitor;
    struct SpiritLeashEffect__Fields fields;
};

struct SpiritLeashEffect__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritLeashEffect__StaticFields {
};

struct SpiritLeashEffect__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritLeashEffect__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritLeashEffect__VTable vtable;
};

struct SpiritLeashHook__Fields {
    struct MonoBehaviour__Fields _;
    bool ActivatedOnStart;
    struct Transform *m_transform;
    bool Horizontal;
    bool IsSticky;
    SpiritLeashMode__Enum SpiritLeashMode;
    
    bool _Activated_k__BackingField;
    float HookTargetOffset;
    struct Vector2 HookPositionOffset;
    bool m_oldActivated;
    struct EventTriggerAnimator *DeactivateTrigger;
    bool CanTargetBeSustained;
    struct Vector3 m_localStartPosition;
    bool m_registered;
    bool _StressTested_k__BackingField;
    float _CameraTargetWeight_k__BackingField;
    struct IDamageReciever__Array *m_damageReceivers;
};

struct SpiritLeashHook {
    struct SpiritLeashHook__Class *klass;
    MonitorData *monitor;
    struct SpiritLeashHook__Fields fields;
};

struct SpiritLeashHook__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Position;
    VirtualInvokeData IsDead;
    VirtualInvokeData CanBeChargeFlamed;
    VirtualInvokeData CanBeChargeDashed;
    VirtualInvokeData CanBeGrenaded;
    VirtualInvokeData CanBeStomped;
    VirtualInvokeData CanBeBashed;
    VirtualInvokeData CanBeSpiritFlamed;
    VirtualInvokeData IsStompBouncable;
    VirtualInvokeData CanBeLevelUpBlasted;
    VirtualInvokeData CanBeSpiritSlashed;
    VirtualInvokeData CanBeHitByBow;
    VirtualInvokeData CanBeHitByMelee;
    VirtualInvokeData CanBeHitByHammerHandle;
    VirtualInvokeData CanBeHeavySpiritSlashed;
    VirtualInvokeData CanBeSpiritLeashed;
    VirtualInvokeData CanBeHomingMissiled;
    VirtualInvokeData CanBeTrapped;
    VirtualInvokeData CanBeSpiritSpeared;
    VirtualInvokeData CanBeTeleportedByBeacon;
    VirtualInvokeData CanBeGlowed;
    VirtualInvokeData get_AffectedReceivers;
    VirtualInvokeData get_SpiritLeashCost;
    VirtualInvokeData OnSpiritLeashHighlight;
    VirtualInvokeData OnSpiritLeashDehighlight;
    VirtualInvokeData OnSpiritLeashed;
    VirtualInvokeData get_HookTargetTransform;
    VirtualInvokeData ISpiritLeashAttackable_get_PositionOffset;
    VirtualInvokeData get_OriCloseEnoughDistance;
    VirtualInvokeData get_ShouldDecelerateOnApproach;
    VirtualInvokeData get_CanBeSustained;
    VirtualInvokeData get_LeashInteractionMode;
    VirtualInvokeData get_IsHookHorizontal;
    VirtualInvokeData set_IsHookHorizontal;
    VirtualInvokeData get_IsHookSticky;
    VirtualInvokeData set_IsHookSticky;
    VirtualInvokeData get_StressTested;
    VirtualInvokeData set_StressTested;
    VirtualInvokeData get_HookTransform;
    VirtualInvokeData ISpiritLeashHook_get_HookTargetTransform;
    VirtualInvokeData get_CameraTargetActive;
    VirtualInvokeData get_CameraTargetPosition;
    VirtualInvokeData get_CameraTargetPadding;
    VirtualInvokeData get_CameraInfluencePosition;
    VirtualInvokeData AdjustCameraTargetWeight;
    VirtualInvokeData get_CameraInfluenceMinDist;
    VirtualInvokeData get_CameraInfluenceMaxDist;
    VirtualInvokeData get_CameraZoomFactor;
    VirtualInvokeData get_TargetType;
    VirtualInvokeData GetTargetData;
    VirtualInvokeData OnSceneRootPostEnable;
    VirtualInvokeData OnSceneRootPreDisable;
    VirtualInvokeData get_OriCloseEnoughDistance_1;
    VirtualInvokeData get_ShouldDecelerateOnApproach_1;
    VirtualInvokeData get_HookTargetTransform_1;
    VirtualInvokeData OnSpiritLeashed_1;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
};

struct SpiritLeashHook__StaticFields {
};

struct SpiritLeashHook__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritLeashHook__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritLeashHook__VTable vtable;
};

struct SpiritLeashInteractable__Fields {
    struct SaveSerialize__Fields _;
    struct ActionMethod *OnSpiritLeashAction;
    SpiritLeashMode__Enum SpiritLeashMode;
    
    bool CanTargetBeSustained;
    struct Transform *m_transform;
    bool _Activated_k__BackingField;
    struct IDamageReciever__Array *m_damageReceivers;
};

struct SpiritLeashInteractable {
    struct SpiritLeashInteractable__Class *klass;
    MonitorData *monitor;
    struct SpiritLeashInteractable__Fields fields;
};

struct SpiritLeashInteractable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData get_Position;
    VirtualInvokeData IsDead;
    VirtualInvokeData CanBeChargeFlamed;
    VirtualInvokeData CanBeChargeDashed;
    VirtualInvokeData CanBeGrenaded;
    VirtualInvokeData CanBeStomped;
    VirtualInvokeData CanBeBashed;
    VirtualInvokeData CanBeSpiritFlamed;
    VirtualInvokeData IsStompBouncable;
    VirtualInvokeData CanBeLevelUpBlasted;
    VirtualInvokeData CanBeSpiritSlashed;
    VirtualInvokeData CanBeHitByBow;
    VirtualInvokeData CanBeHitByMelee;
    VirtualInvokeData CanBeHitByHammerHandle;
    VirtualInvokeData CanBeHeavySpiritSlashed;
    VirtualInvokeData CanBeSpiritLeashed;
    VirtualInvokeData CanBeHomingMissiled;
    VirtualInvokeData CanBeTrapped;
    VirtualInvokeData CanBeSpiritSpeared;
    VirtualInvokeData CanBeTeleportedByBeacon;
    VirtualInvokeData CanBeGlowed;
    VirtualInvokeData get_AffectedReceivers;
    VirtualInvokeData get_SpiritLeashCost;
    VirtualInvokeData OnSpiritLeashHighlight;
    VirtualInvokeData OnSpiritLeashDehighlight;
    VirtualInvokeData OnSpiritLeashed;
    VirtualInvokeData get_HookTargetTransform;
    VirtualInvokeData get_PositionOffset;
    VirtualInvokeData get_OriCloseEnoughDistance;
    VirtualInvokeData get_ShouldDecelerateOnApproach;
    VirtualInvokeData get_CanBeSustained;
    VirtualInvokeData get_LeashInteractionMode;
};

struct SpiritLeashInteractable__StaticFields {
};

struct SpiritLeashInteractable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritLeashInteractable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritLeashInteractable__VTable vtable;
};

struct Spear__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *TrailPrefab;
    struct MoonTrail__Array *m_trails;
    struct Transform *m_trailTransform;
};

struct Spear {
    struct Spear__Class *klass;
    MonitorData *monitor;
    struct Spear__Fields fields;
};

struct Spear__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
};

struct Spear__StaticFields {
};

struct Spear__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Spear__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Spear__VTable vtable;
};

struct SpringPlaceholder__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *Spring;
    float Height;
};

struct SpringPlaceholder {
    struct SpringPlaceholder__Class *klass;
    MonitorData *monitor;
    struct SpringPlaceholder__Fields fields;
};

struct SpringPlaceholder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpringPlaceholder__StaticFields {
};

struct SpringPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpringPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpringPlaceholder__VTable vtable;
};

enum class Stomper_State__Enum : int32_t {
    Normal = 0x00000000,
    Shake = 0x00000001,
    Falling = 0x00000002,
    Fallen = 0x00000003,
    Raising = 0x00000004,
};

struct Stomper_State__Enum__Boxed {
    struct Stomper_State__Enum__Class *klass;
    MonitorData *monitor;
    Stomper_State__Enum value;
    
};

struct Stomper__Fields {
    struct MonoBehaviour__Fields _;
    float StartFallSpeed;
    float FallGravity;
    float RiseDeccleration;
    float RiseSpeed;
    float DelayTillRise;
    float ShakeTime;
    struct SoundSource *StompSound;
    struct SoundSource *StompStartSound;
    struct SoundSource *StompResetSound;
    struct SoundSource *ReelInSound;
    struct GameObject *StompImpactDust;
    struct Transform *StompDustSpawnTransform;
    struct DamageDealer *DamageDealer;
    struct Vector3 m_fallDirection;
    Stomper_State__Enum m_state;
    
    float m_time;
    struct AnimatingFloat *m_fall;
    bool m_hasPlayedResetSound;
    struct Vector3 m_originalLocalPosition;
    struct Transform *m_transform;
    struct Rigidbody *m_rigidbody;
    struct AnimationCurve *OnTriggerDecorationCurve;
    float Distance;
    bool DistanceSet;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct Stomper {
    struct Stomper__Class *klass;
    MonitorData *monitor;
    struct Stomper__Fields fields;
};

struct Stomper_State__Enum__VTable {
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

struct Stomper_State__Enum__StaticFields {
};

struct Stomper_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Stomper_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Stomper_State__Enum__VTable vtable;
};

struct Stomper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
};

struct Stomper__StaticFields {
};

struct Stomper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Stomper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Stomper__VTable vtable;
};

struct StomperTrigger__Fields {
    struct MonoBehaviour__Fields _;
    bool TriggerOncePerOnEnter;
    struct Stomper *StomperToTrigger;
    struct StomperLogic *StomperLogicToTrigger;
    bool Activated;
};

struct StomperTrigger {
    struct StomperTrigger__Class *klass;
    MonitorData *monitor;
    struct StomperTrigger__Fields fields;
};

enum class StomperLogic_State__Enum : int32_t {
    Normal = 0x00000000,
    Shake = 0x00000001,
    Falling = 0x00000002,
    Fallen = 0x00000003,
    Raising = 0x00000004,
};

struct StomperLogic_State__Enum__Boxed {
    struct StomperLogic_State__Enum__Class *klass;
    MonitorData *monitor;
    StomperLogic_State__Enum value;
    
};

struct StomperLogic__Fields {
    struct MonoBehaviour__Fields _;
    float StartFallSpeed;
    float FallGravity;
    float RiseDeccleration;
    float RiseSpeed;
    float DelayTillRise;
    float ShakeTime;
    struct Transform *StompDustSpawnTransform;
    struct DamageDealer *DamageDealer;
    bool m_initialized;
    struct Vector3 m_fallDirection;
    StomperLogic_State__Enum m_state;
    
    float m_time;
    struct AnimatingFloat *m_fall;
    bool m_hasPlayedResetSound;
    struct Vector3 m_originalLocalPosition;
    struct Transform *m_transform;
    struct Rigidbody *m_rigidbody;
    struct AnimationCurve *OnTriggerDecorationCurve;
    float Distance;
    bool DistanceSet;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    struct StomperAnimator *Animator;
};

struct StomperLogic {
    struct StomperLogic__Class *klass;
    MonitorData *monitor;
    struct StomperLogic__Fields fields;
};

struct StomperAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct StomperVisuals *Visuals;
};

struct StomperAnimator {
    struct StomperAnimator__Class *klass;
    MonitorData *monitor;
    struct StomperAnimator__Fields fields;
};

struct StomperVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct FixedJoint *VisualsFixedJoint;
    struct Event_1 *StompSoundEvent;
    struct Event_1 *StompStartSoundEvent;
    struct Event_1 *StompResetSoundEvent;
    struct Event_1 *StompReelInSoundEvent;
    struct MoonTimeline *TriggerStomperTimeline;
    struct MoonTimeline *StomperFallingTimeline;
    struct GameObject *StompImpactDust;
    struct SoundHost *m_soundHost;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
};

struct StomperVisuals {
    struct StomperVisuals__Class *klass;
    MonitorData *monitor;
    struct StomperVisuals__Fields fields;
};

struct FixedJoint__Fields {
    struct Joint__Fields _;
};

struct FixedJoint {
    struct FixedJoint__Class *klass;
    MonitorData *monitor;
    struct FixedJoint__Fields fields;
};

struct StomperLogic_State__Enum__VTable {
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

struct StomperLogic_State__Enum__StaticFields {
};

struct StomperLogic_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StomperLogic_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StomperLogic_State__Enum__VTable vtable;
};

struct FixedJoint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FixedJoint__StaticFields {
};

struct FixedJoint__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FixedJoint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FixedJoint__VTable vtable;
};

struct StomperVisuals__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StomperVisuals__StaticFields {
};

struct StomperVisuals__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StomperVisuals__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StomperVisuals__VTable vtable;
};

struct StomperAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_MoonSetupVisuals;
};

struct StomperAnimator__StaticFields {
};

struct StomperAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StomperAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StomperAnimator__VTable vtable;
};

struct StomperLogic__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_MoonSetupAnimator;
};

struct StomperLogic__StaticFields {
};

struct StomperLogic__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StomperLogic__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StomperLogic__VTable vtable;
};

struct StomperTrigger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Category;
};

struct StomperTrigger__StaticFields {
};

struct StomperTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StomperTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StomperTrigger__VTable vtable;
};

struct SwitchActionSystem__Fields {
    struct SaveSerialize__Fields _;
    struct ActionMethod *AllSwitchesOnAction;
    struct ActionMethod *OnAllSwitchesOffAction;
    bool TriggerOnce;
    struct List_1_UnityEngine_MonoBehaviour_ *SwitchesObjects;
    struct List_1_ISwitch_ *m_switches;
    bool m_lastAllOn;
    bool m_lastAllOff;
    bool m_canTrigger;
};

struct SwitchActionSystem {
    struct SwitchActionSystem__Class *klass;
    MonitorData *monitor;
    struct SwitchActionSystem__Fields fields;
};

struct __declspec(align(8)) List_1_ISwitch___Fields {
    struct ISwitch__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ISwitch_ {
    struct List_1_ISwitch___Class *klass;
    MonitorData *monitor;
    struct List_1_ISwitch___Fields fields;
};

struct ISwitch__Array {
    struct ISwitch__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ISwitch *vector[32];
};

struct IEnumerator_1_ISwitch_ {
    struct IEnumerator_1_ISwitch___Class *klass;
    MonitorData *monitor;
};

struct ISwitch__Array__VTable {
};

struct ISwitch__Array__StaticFields {
};

struct ISwitch__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISwitch__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISwitch__Array__VTable vtable;
};

struct IEnumerator_1_ISwitch___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ISwitch___StaticFields {
};

struct IEnumerator_1_ISwitch___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ISwitch___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_ISwitch___VTable vtable;
};

struct List_1_ISwitch___VTable {
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

struct List_1_ISwitch___StaticFields {
    struct ISwitch__Array *_emptyArray;
};

struct List_1_ISwitch___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ISwitch___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ISwitch___VTable vtable;
};

struct SwitchActionSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
};

struct SwitchActionSystem__StaticFields {
};

struct SwitchActionSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwitchActionSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwitchActionSystem__VTable vtable;
};

struct TimedDoor__Fields {
    struct SaveSerialize__Fields _;
    struct AudioClip *ChallengeCompleteSound;
    struct ActionMethod *ActionAtTimeout;
    struct ActionMethod *ActionAtSolved;
    bool ShutdownDoor;
    bool m_isSolved;
    struct LegacyTranslateAnimator *m_animator;
};

struct TimedDoor {
    struct TimedDoor__Class *klass;
    MonitorData *monitor;
    struct TimedDoor__Fields fields;
};

struct TimedDoor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
};

struct TimedDoor__StaticFields {
};

struct TimedDoor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimedDoor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimedDoor__VTable vtable;
};

struct CustomWater__Fields {
    struct MonoBehaviour__Fields _;
    struct Camera *reflectionCamera;
    struct RenderTexture *reflectionRenderTexture;
    struct Vector2 uvOffset;
    float textureSizeMultiplier;
    float clipPlaneOffset;
    float wavesSize;
    float wavesHeight;
    float wavesSpeed;
    bool m_insideWater;
};

struct CustomWater {
    struct CustomWater__Class *klass;
    MonitorData *monitor;
    struct CustomWater__Fields fields;
};

struct CustomWater__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CustomWater__StaticFields {
};

struct CustomWater__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CustomWater__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CustomWater__VTable vtable;
};

struct MetaBallWaterZone__Fields {
    struct WaterZone__Fields _;
    struct MetaballWaterBlobs *MetaBallWaterBlobs;
    float ZValueThreshold;
    float InheritVelocityOnEnter;
    float InheritVelocityOnExit;
    float RadiusErrorMargin;
    struct AnimationCurve *BreakVelocityVsRadiusCurve;
    struct ParticleSystem *SplashEffect;
    float SplashParticleMultiplier;
};

struct MetaBallWaterZone {
    struct MetaBallWaterZone__Class *klass;
    MonitorData *monitor;
    struct MetaBallWaterZone__Fields fields;
};

struct MetaBallWaterZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData AreaType;
    VirtualInvokeData ContainsPoint;
    VirtualInvokeData GetVelocityAtPoint;
    VirtualInvokeData get_Category;
    VirtualInvokeData GetVelocityAtPoint_1;
    VirtualInvokeData Contains;
    VirtualInvokeData Overlaps;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData FixedUpdate;
};

}
