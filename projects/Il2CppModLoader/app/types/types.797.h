namespace app {
struct CanSkipCreditsCondition__Fields {
    struct Condition_1__Fields _;
};

struct CanSkipCreditsCondition {
    struct CanSkipCreditsCondition__Class *klass;
    MonitorData *monitor;
    struct CanSkipCreditsCondition__Fields fields;
};

struct CanSkipCreditsCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct CanSkipCreditsCondition__StaticFields {
};

struct CanSkipCreditsCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CanSkipCreditsCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CanSkipCreditsCondition__VTable vtable;
};

enum class LeverDirections__Enum : int32_t {
    Left = 0x00000000,
    Middle = 0x00000001,
    Right = 0x00000002,
};

struct LeverDirections__Enum__Boxed {
    struct LeverDirections__Enum__Class *klass;
    MonitorData *monitor;
    LeverDirections__Enum value;
    
};

struct ChangeLeverDirectionAction__Fields {
    struct ActionWithDuration__Fields _;
    struct LegacyLever *LegacyLever;
    LeverDirections__Enum NewLeverDirection;
    
    float _Duration_k__BackingField;
};

struct ChangeLeverDirectionAction {
    struct ChangeLeverDirectionAction__Class *klass;
    MonitorData *monitor;
    struct ChangeLeverDirectionAction__Fields fields;
};

enum class LeverMode__Enum : int32_t {
    LeftRightToggle = 0x00000000,
    LeftRightGrab = 0x00000001,
    LeftMiddleRightSpring = 0x00000002,
    LeftMiddleRightStay = 0x00000003,
};

struct LeverMode__Enum__Boxed {
    struct LeverMode__Enum__Class *klass;
    MonitorData *monitor;
    LeverMode__Enum value;
    
};

struct LegacyLever__Fields {
    struct RecordableObject__Fields _;
    bool _InRange_k__BackingField;
    bool _IsGrabbed_k__BackingField;
    float LeverRadius;
    bool SnapToGround;
    LeverDirections__Enum LeverDirection;
    
    LeverDirections__Enum _OriginalDirection_k__BackingField;
    
    struct LegacyAnimator__Array *HighlightAnimators;
    struct Condition_1 *CanGrabCondition;
    struct Bounds m_bounds;
    bool m_insideFrustum;
    LeverMode__Enum LeverKind;
    
    struct SoundHost *m_soundHost;
    struct Transform *m_transform;
    bool m_autoadjustedtoGroundLevel;
    float m_grabbedTime;
    float HandleRotationSpeed;
    float HandleRotationAmount;
    float MaxAngularSpeed;
    struct Action *m_grabLeverEvent;
    struct Action *m_releaseLeverEvent;
    struct Action *m_leverLeftEvent;
    struct Action *m_leverRightEvent;
    struct Action *m_leverLeftFailedEvent;
    struct Action *m_leverRightFailedEvent;
    struct Action *m_leverMiddleEvent;
    struct Action *m_leverEnterEvent;
    struct Action *m_leverExitEvent;
    struct Func_1_Boolean_ *m_canLeverLeft;
    struct Func_1_Boolean_ *m_canLeverRight;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct LegacyLever {
    struct LegacyLever__Class *klass;
    MonitorData *monitor;
    struct LegacyLever__Fields fields;
};

struct LeverDirections__Enum__VTable {
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

struct LeverDirections__Enum__StaticFields {
};

struct LeverDirections__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LeverDirections__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LeverDirections__Enum__VTable vtable;
};

struct LeverMode__Enum__VTable {
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

struct LeverMode__Enum__StaticFields {
};

struct LeverMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LeverMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LeverMode__Enum__VTable vtable;
};

struct LegacyLever__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnFrustumEnter;
    VirtualInvokeData OnFrustumExit;
    VirtualInvokeData get_InsideFrustum;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_AllowCacheBounds;
    VirtualInvokeData get_InRange;
    VirtualInvokeData get_CanBeGrabbed;
    VirtualInvokeData get_CanTurn;
    VirtualInvokeData get_IsGrabbed;
    VirtualInvokeData get_Radius;
    VirtualInvokeData get_Transform;
    VirtualInvokeData get_SeinPositionOffset;
    VirtualInvokeData get_Position;
    VirtualInvokeData get_LeverType;
    VirtualInvokeData get_OriginalDirection;
    VirtualInvokeData get_Direction;
    VirtualInvokeData SetLeverDirection;
    VirtualInvokeData PlayLeverAnimation;
    VirtualInvokeData OnPushLeverLeft;
    VirtualInvokeData OnPushLeverMiddle;
    VirtualInvokeData OnPushLeverRight;
    VirtualInvokeData OnGrabLever;
    VirtualInvokeData OnReleaseLever;
    VirtualInvokeData get_CanLeverLeft;
    VirtualInvokeData set_CanLeverLeft;
    VirtualInvokeData get_CanLeverRight;
    VirtualInvokeData set_CanLeverRight;
    VirtualInvokeData get_NeedsToBeOnGround;
    VirtualInvokeData OnEnterLever;
    VirtualInvokeData OnExitLever;
    VirtualInvokeData GetGroundLevelOffset;
    VirtualInvokeData get_LeverEnterEvent;
    VirtualInvokeData set_LeverEnterEvent;
    VirtualInvokeData get_LeverExitEvent;
    VirtualInvokeData set_LeverExitEvent;
    VirtualInvokeData get_GrabLeverEvent;
    VirtualInvokeData set_GrabLeverEvent;
    VirtualInvokeData get_ReleaseLeverEvent;
    VirtualInvokeData set_ReleaseLeverEvent;
    VirtualInvokeData get_LeverLeftEvent;
    VirtualInvokeData set_LeverLeftEvent;
    VirtualInvokeData get_LeverRightEvent;
    VirtualInvokeData set_LeverRightEvent;
    VirtualInvokeData get_LeverLeftFailedEvent;
    VirtualInvokeData set_LeverLeftFailedEvent;
    VirtualInvokeData get_LeverRightFailedEvent;
    VirtualInvokeData set_LeverRightFailedEvent;
    VirtualInvokeData get_LeverMiddleEvent;
    VirtualInvokeData set_LeverMiddleEvent;
    VirtualInvokeData get_InsideFrustum_1;
};

struct LegacyLever__StaticFields {
};

struct LegacyLever__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyLever__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyLever__VTable vtable;
};

struct ChangeLeverDirectionAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
    VirtualInvokeData Stop;
    VirtualInvokeData get_IsPerforming;
    VirtualInvokeData get_IsBlocking;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData set_Duration;
    VirtualInvokeData get_Duration;
};

struct ChangeLeverDirectionAction__StaticFields {
};

struct ChangeLeverDirectionAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ChangeLeverDirectionAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ChangeLeverDirectionAction__VTable vtable;
};

struct ChangeSoundProviderInMetaDataSoundPlayerAction__Fields {
    struct ActionMethod__Fields _;
    struct List_1_NodeSoundPlayerPair_ *NodeSoundPlayerPair;
    struct AnimationMetaDataBasedSoundPlayer *MetaDataBasedSoundPlayer;
    bool ShouldUseSeinsMetaDataBasedSoundPlayer;
};

struct ChangeSoundProviderInMetaDataSoundPlayerAction {
    struct ChangeSoundProviderInMetaDataSoundPlayerAction__Class *klass;
    MonitorData *monitor;
    struct ChangeSoundProviderInMetaDataSoundPlayerAction__Fields fields;
};

struct __declspec(align(8)) List_1_NodeSoundPlayerPair___Fields {
    struct NodeSoundPlayerPair__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_NodeSoundPlayerPair_ {
    struct List_1_NodeSoundPlayerPair___Class *klass;
    MonitorData *monitor;
    struct List_1_NodeSoundPlayerPair___Fields fields;
};

struct __declspec(align(8)) NodeSoundPlayerPair__Fields {
    struct String *NodeName;
    struct Varying2DSoundProvider *SoundProvider;
};

struct NodeSoundPlayerPair {
    struct NodeSoundPlayerPair__Class *klass;
    MonitorData *monitor;
    struct NodeSoundPlayerPair__Fields fields;
};

struct NodeSoundPlayerPair__Array {
    struct NodeSoundPlayerPair__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct NodeSoundPlayerPair *vector[32];
};

struct IEnumerator_1_NodeSoundPlayerPair_ {
    struct IEnumerator_1_NodeSoundPlayerPair___Class *klass;
    MonitorData *monitor;
};

struct AnimationMetaDataBasedSoundPlayer__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimatorWithTransitions *Animator;
    struct List_1_NodeSoundPlayerPair_ *NodeSoundPlayerPairs;
    int32_t m_previousframe;
};

struct AnimationMetaDataBasedSoundPlayer {
    struct AnimationMetaDataBasedSoundPlayer__Class *klass;
    MonitorData *monitor;
    struct AnimationMetaDataBasedSoundPlayer__Fields fields;
};

struct NodeSoundPlayerPair__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NodeSoundPlayerPair__StaticFields {
};

struct NodeSoundPlayerPair__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NodeSoundPlayerPair__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NodeSoundPlayerPair__VTable vtable;
};

struct NodeSoundPlayerPair__Array__VTable {
};

struct NodeSoundPlayerPair__Array__StaticFields {
};

struct NodeSoundPlayerPair__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NodeSoundPlayerPair__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NodeSoundPlayerPair__Array__VTable vtable;
};

struct IEnumerator_1_NodeSoundPlayerPair___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_NodeSoundPlayerPair___StaticFields {
};

struct IEnumerator_1_NodeSoundPlayerPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_NodeSoundPlayerPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_NodeSoundPlayerPair___VTable vtable;
};

struct List_1_NodeSoundPlayerPair___VTable {
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

struct List_1_NodeSoundPlayerPair___StaticFields {
    struct NodeSoundPlayerPair__Array *_emptyArray;
};

struct List_1_NodeSoundPlayerPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_NodeSoundPlayerPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_NodeSoundPlayerPair___VTable vtable;
};

struct AnimationMetaDataBasedSoundPlayer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationMetaDataBasedSoundPlayer__StaticFields {
};

struct AnimationMetaDataBasedSoundPlayer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationMetaDataBasedSoundPlayer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationMetaDataBasedSoundPlayer__VTable vtable;
};

struct ChangeSoundProviderInMetaDataSoundPlayerAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct ChangeSoundProviderInMetaDataSoundPlayerAction__StaticFields {
};

struct ChangeSoundProviderInMetaDataSoundPlayerAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ChangeSoundProviderInMetaDataSoundPlayerAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ChangeSoundProviderInMetaDataSoundPlayerAction__VTable vtable;
};

struct ChangeTargetToCurrentCharacterAction__Fields {
    struct ActionMethod__Fields _;
};

struct ChangeTargetToCurrentCharacterAction {
    struct ChangeTargetToCurrentCharacterAction__Class *klass;
    MonitorData *monitor;
    struct ChangeTargetToCurrentCharacterAction__Fields fields;
};

struct ChangeTargetToCurrentCharacterAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct ChangeTargetToCurrentCharacterAction__StaticFields {
};

struct ChangeTargetToCurrentCharacterAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ChangeTargetToCurrentCharacterAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ChangeTargetToCurrentCharacterAction__VTable vtable;
};

struct ConfigureConfigurableJointAction__Fields {
    struct ActionMethod__Fields _;
    struct ConfigurableJoint *ConfigurableJoint;
    struct GameObject *ConfigurableJointGameObject;
    struct Rigidbody *ConnectedBody;
    ConfigurableJointMotion__Enum XMotion;
    
    ConfigurableJointMotion__Enum YMotion;
    
    ConfigurableJointMotion__Enum ZMotion;
    
    ConfigurableJointMotion__Enum AngularXMotion;
    
    ConfigurableJointMotion__Enum AngularYMotion;
    
    ConfigurableJointMotion__Enum AngularZMotion;
    
    float LinearLimitSprintSpring;
    float LinearLimitSprintDamper;
    float LinearLimitLimit;
    float LinearLimitBounciness;
    float LinearLimitContactDistance;
    float ZRotationSpringStiffness;
    float ZRotationSpringDamping;
    bool ShouldGenerateJoint;
    bool SetConnectedBody;
    bool SetXMotion;
    bool SetYMotion;
    bool SetZMotion;
    bool SetAngularXMotion;
    bool SetAngularYMotion;
    bool SetAngularZMotion;
    bool SetLinearLimitSpring;
    bool SetLinearLimit;
};

struct ConfigureConfigurableJointAction {
    struct ConfigureConfigurableJointAction__Class *klass;
    MonitorData *monitor;
    struct ConfigureConfigurableJointAction__Fields fields;
};

struct ConfigureConfigurableJointAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct ConfigureConfigurableJointAction__StaticFields {
};

struct ConfigureConfigurableJointAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfigureConfigurableJointAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfigureConfigurableJointAction__VTable vtable;
};

struct CreateCheckpointAction__Fields {
    struct ActionMethod__Fields _;
    struct Vector2 RespawnPosition;
    bool SaveToDisk;
    bool UseCustomSequence;
    struct ActionSequence *CustomSaveSequence;
};

struct CreateCheckpointAction {
    struct CreateCheckpointAction__Class *klass;
    MonitorData *monitor;
    struct CreateCheckpointAction__Fields fields;
};

struct CreateCheckpointAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
    VirtualInvokeData get_Category;
};

struct CreateCheckpointAction__StaticFields {
};

struct CreateCheckpointAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CreateCheckpointAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CreateCheckpointAction__VTable vtable;
};

struct CreditsTextPosition__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve *AnimationCurve;
    struct Vector2 ScreenPosition;
    float m_weight;
};

struct CreditsTextPosition {
    struct CreditsTextPosition__Class *klass;
    MonitorData *monitor;
    struct CreditsTextPosition__Fields fields;
};

struct CreditsTextPosition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData Convert;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData get_IsLooping;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData set_CurrentTime;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData Play;
    VirtualInvokeData Stop;
    VirtualInvokeData Pause;
    VirtualInvokeData OnFixedUpdate_1;
    VirtualInvokeData CacheOriginals;
    VirtualInvokeData SampleValue;
    VirtualInvokeData UpdateDurationAndTimeCache;
    VirtualInvokeData OnStartPlay;
    VirtualInvokeData OnStopPlay;
    VirtualInvokeData get_Duration;
    VirtualInvokeData RestoreToOriginalState;
    VirtualInvokeData Convert_1;
};

struct CreditsTextPosition__StaticFields {
};

struct CreditsTextPosition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CreditsTextPosition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CreditsTextPosition__VTable vtable;
};

struct CrossFadeSceneAction__Fields {
    struct ActionMethod__Fields _;
    struct SceneMetaData *SceneMetaData;
    float Duration;
};

struct CrossFadeSceneAction {
    struct CrossFadeSceneAction__Class *klass;
    MonitorData *monitor;
    struct CrossFadeSceneAction__Fields fields;
};

struct CrossFadeSceneAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct CrossFadeSceneAction__StaticFields {
};

struct CrossFadeSceneAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CrossFadeSceneAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CrossFadeSceneAction__VTable vtable;
};

struct DamageTextAction__Fields {
    struct ActionMethod__Fields _;
    struct DamageTextSpawner *DamageTextSource;
};

struct DamageTextAction {
    struct DamageTextAction__Class *klass;
    MonitorData *monitor;
    struct DamageTextAction__Fields fields;
};

struct DamageTextAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct DamageTextAction__StaticFields {
};

struct DamageTextAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageTextAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageTextAction__VTable vtable;
};

struct DeactivateDamageDealerAction__Fields {
    struct ActionMethod__Fields _;
    struct List_1_DamageDealer_ *Targets;
    bool ShouldActivate;
};

struct DeactivateDamageDealerAction {
    struct DeactivateDamageDealerAction__Class *klass;
    MonitorData *monitor;
    struct DeactivateDamageDealerAction__Fields fields;
};

struct DeactivateDamageDealerAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct DeactivateDamageDealerAction__StaticFields {
};

struct DeactivateDamageDealerAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeactivateDamageDealerAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeactivateDamageDealerAction__VTable vtable;
};

struct DebugLogAction__Fields {
    struct ActionMethod__Fields _;
    struct String *Message;
};

struct DebugLogAction {
    struct DebugLogAction__Class *klass;
    MonitorData *monitor;
    struct DebugLogAction__Fields fields;
};

struct DebugLogAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct DebugLogAction__StaticFields {
};

struct DebugLogAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DebugLogAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DebugLogAction__VTable vtable;
};

struct DestroyCharacterAction__Fields {
    struct ActionMethod__Fields _;
};

struct DestroyCharacterAction {
    struct DestroyCharacterAction__Class *klass;
    MonitorData *monitor;
    struct DestroyCharacterAction__Fields fields;
};

struct DestroyCharacterAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct DestroyCharacterAction__StaticFields {
};

struct DestroyCharacterAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DestroyCharacterAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DestroyCharacterAction__VTable vtable;
};

struct DestroyGameplayElementsAction__Fields {
    struct ActionMethod__Fields _;
};

struct DestroyGameplayElementsAction {
    struct DestroyGameplayElementsAction__Class *klass;
    MonitorData *monitor;
    struct DestroyGameplayElementsAction__Fields fields;
};

struct DestroyGameplayElementsAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct DestroyGameplayElementsAction__StaticFields {
};

struct DestroyGameplayElementsAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DestroyGameplayElementsAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DestroyGameplayElementsAction__VTable vtable;
};

struct DestroyObjectAction__Fields {
    struct ActionMethod__Fields _;
    struct GameObject *ObjectToDestroy;
};

struct DestroyObjectAction {
    struct DestroyObjectAction__Class *klass;
    MonitorData *monitor;
    struct DestroyObjectAction__Fields fields;
};

struct DestroyObjectAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
    VirtualInvokeData GetDynamicGraphicTarget;
};

struct DestroyObjectAction__StaticFields {
};

struct DestroyObjectAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DestroyObjectAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DestroyObjectAction__VTable vtable;
};

struct DetachFromRope__Fields {
    struct ActionMethod__Fields _;
    struct AttachToRope *AttachToRope;
};

struct DetachFromRope {
    struct DetachFromRope__Class *klass;
    MonitorData *monitor;
    struct DetachFromRope__Fields fields;
};

struct DetachFromRope__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct DetachFromRope__StaticFields {
};

}
