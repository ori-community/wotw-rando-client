namespace app {
struct PondController__StaticFields {
};

struct PondController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PondController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PondController__VTable vtable;
};

struct TheGiftSetupController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator *FindSeinSpriteAnimator;
    struct SpriteAnimator *GlowSpriteAnimator;
    struct TextureAnimation *FindSeinTextureAnimation;
    struct TextureAnimation *GlowTextureAnimation;
    struct ActionMethod *OnNaruCollidedAction;
    struct ActionMethod *OnFinishedAction;
    struct GameObject *Leaf;
    struct Transform *CameraTarget;
};

struct TheGiftSetupController {
    struct TheGiftSetupController__Class *klass;
    MonitorData *monitor;
    struct TheGiftSetupController__Fields fields;
};

struct TheGiftSetupController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TheGiftSetupController__StaticFields {
};

struct TheGiftSetupController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TheGiftSetupController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TheGiftSetupController__VTable vtable;
};

struct RisingWater__Fields {
    struct SaveSerialize__Fields _;
    float Speed;
    float MinDistanceToAccelerate;
    float AcceleratedSpeed;
    float m_currentSpeed;
    float Acceleration;
    float Deceleration;
    struct AnimationCurve *EasySpeedOverDistance;
    struct AnimationCurve *SpeedOverDistance;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct RisingWater {
    struct RisingWater__Class *klass;
    MonitorData *monitor;
    struct RisingWater__Fields fields;
};

struct RisingWater__VTable {
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
};

struct RisingWater__StaticFields {
    struct RisingWater *m_instance;
};

struct RisingWater__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RisingWater__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RisingWater__VTable vtable;
};

struct RisingWaterTrigger__Fields {
    struct SaveSerialize__Fields _;
    bool m_active;
    struct ActionMethod *Action;
};

struct RisingWaterTrigger {
    struct RisingWaterTrigger__Class *klass;
    MonitorData *monitor;
    struct RisingWaterTrigger__Fields fields;
};

struct RisingWaterTrigger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
};

struct RisingWaterTrigger__StaticFields {
};

struct RisingWaterTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RisingWaterTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RisingWaterTrigger__VTable vtable;
};

struct SetWaterRisingPropertiesAction__Fields {
    struct ActionMethod__Fields _;
    float Speed;
};

struct SetWaterRisingPropertiesAction {
    struct SetWaterRisingPropertiesAction__Class *klass;
    MonitorData *monitor;
    struct SetWaterRisingPropertiesAction__Fields fields;
};

struct SetWaterRisingPropertiesAction__VTable {
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

struct SetWaterRisingPropertiesAction__StaticFields {
};

struct SetWaterRisingPropertiesAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SetWaterRisingPropertiesAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SetWaterRisingPropertiesAction__VTable vtable;
};

struct FallCutsceneCameraOffsetController__Fields {
    struct MonoBehaviour__Fields _;
    float PressUpSpeed;
    float PressDownSpeed;
    float MaxOffset;
    float MinOffset;
    struct CameraOffsetZone *CameraOffsetZone;
};

struct FallCutsceneCameraOffsetController {
    struct FallCutsceneCameraOffsetController__Class *klass;
    MonitorData *monitor;
    struct FallCutsceneCameraOffsetController__Fields fields;
};

struct FallCutsceneCameraOffsetController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FallCutsceneCameraOffsetController__StaticFields {
};

struct FallCutsceneCameraOffsetController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FallCutsceneCameraOffsetController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FallCutsceneCameraOffsetController__VTable vtable;
};

struct ActivateWindVentAction__Fields {
    struct ActionMethod__Fields _;
    struct WindVent *WindVent;
};

struct ActivateWindVentAction {
    struct ActivateWindVentAction__Class *klass;
    MonitorData *monitor;
    struct ActivateWindVentAction__Fields fields;
};

enum class WindVent_State__Enum : int32_t {
    InitialState = 0x00000000,
    Anticipation = 0x00000001,
    Burst = 0x00000002,
    CoolDown = 0x00000003,
};

struct WindVent_State__Enum__Boxed {
    struct WindVent_State__Enum__Class *klass;
    MonitorData *monitor;
    WindVent_State__Enum value;
    
};

struct WindVent__Fields {
    struct SaveSerialize__Fields _;
    bool StartAutomatically;
    bool Looping;
    float TimeOffset;
    float AnticipationDuration;
    float BurstDuration;
    float CooldownDuration;
    struct GameObject *AnticipationEffect;
    struct GameObject *BurstEffect;
    struct GameObject *ImpactEffect;
    struct Transform *ImpactEffectLocator;
    struct GameObject *VentGraphic;
    struct BaseAnimator *WindAnimator;
    struct GameObject *WindBeam;
    struct GameObject *KillZone;
    float m_currentStateTime;
    struct ParticleSystem__Array *m_windBeamParticleSystems;
    bool m_hasErrupted;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    WindVent_State__Enum m_state;
    
};

struct WindVent {
    struct WindVent__Class *klass;
    MonitorData *monitor;
    struct WindVent__Fields fields;
};

struct WindVent_State__Enum__VTable {
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

struct WindVent_State__Enum__StaticFields {
};

struct WindVent_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WindVent_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WindVent_State__Enum__VTable vtable;
};

struct WindVent__VTable {
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
    VirtualInvokeData GetDynamicGraphicTarget;
};

struct WindVent__StaticFields {
};

struct WindVent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WindVent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WindVent__VTable vtable;
};

struct ActivateWindVentAction__VTable {
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

struct ActivateWindVentAction__StaticFields {
};

struct ActivateWindVentAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActivateWindVentAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActivateWindVentAction__VTable vtable;
};

enum class WindSegment_State__Enum : int32_t {
    Start = 0x00000000,
    Timed = 0x00000001,
    End = 0x00000002,
};

struct WindSegment_State__Enum__Boxed {
    struct WindSegment_State__Enum__Class *klass;
    MonitorData *monitor;
    WindSegment_State__Enum value;
    
};

struct WindSegment__Fields {
    struct SaveSerialize__Fields _;
    float MaxTime;
    float MinTime;
    struct WindVent *FinishVent;
    float m_remainingTime;
    struct Transform *Trigger;
    struct Rect m_bounds;
    WindSegment_State__Enum m_state;
    
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct WindSegment {
    struct WindSegment__Class *klass;
    MonitorData *monitor;
    struct WindSegment__Fields fields;
};

struct WindSegment_State__Enum__VTable {
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

struct WindSegment_State__Enum__StaticFields {
};

struct WindSegment_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WindSegment_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WindSegment_State__Enum__VTable vtable;
};

struct WindSegment__VTable {
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
};

struct WindSegment__StaticFields {
};

struct WindSegment__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WindSegment__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WindSegment__VTable vtable;
};

struct WindShaftController__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_WindSegment_ *Segments;
};

struct WindShaftController {
    struct WindShaftController__Class *klass;
    MonitorData *monitor;
    struct WindShaftController__Fields fields;
};

struct __declspec(align(8)) List_1_WindSegment___Fields {
    struct WindSegment__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_WindSegment_ {
    struct List_1_WindSegment___Class *klass;
    MonitorData *monitor;
    struct List_1_WindSegment___Fields fields;
};

struct WindSegment__Array {
    struct WindSegment__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct WindSegment *vector[32];
};

struct IEnumerator_1_WindSegment_ {
    struct IEnumerator_1_WindSegment___Class *klass;
    MonitorData *monitor;
};

struct WindSegment__Array__VTable {
};

struct WindSegment__Array__StaticFields {
};

struct WindSegment__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WindSegment__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WindSegment__Array__VTable vtable;
};

struct IEnumerator_1_WindSegment___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_WindSegment___StaticFields {
};

struct IEnumerator_1_WindSegment___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_WindSegment___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_WindSegment___VTable vtable;
};

struct List_1_WindSegment___VTable {
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

struct List_1_WindSegment___StaticFields {
    struct WindSegment__Array *_emptyArray;
};

struct List_1_WindSegment___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_WindSegment___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_WindSegment___VTable vtable;
};

struct WindShaftController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WindShaftController__StaticFields {
    struct WindShaftController *Instance;
};

struct WindShaftController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WindShaftController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WindShaftController__VTable vtable;
};

struct DestroyMistTorchAction__Fields {
    struct ActionMethod__Fields _;
};

struct DestroyMistTorchAction {
    struct DestroyMistTorchAction__Class *klass;
    MonitorData *monitor;
    struct DestroyMistTorchAction__Fields fields;
};

struct DestroyMistTorchAction__VTable {
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

struct DestroyMistTorchAction__StaticFields {
};

struct DestroyMistTorchAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DestroyMistTorchAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DestroyMistTorchAction__VTable vtable;
};

struct DestroyNightBerryAction__Fields {
    struct ActionMethod__Fields _;
};

struct DestroyNightBerryAction {
    struct DestroyNightBerryAction__Class *klass;
    MonitorData *monitor;
    struct DestroyNightBerryAction__Fields fields;
};

struct DestroyNightBerryAction__VTable {
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

struct DestroyNightBerryAction__StaticFields {
};

struct DestroyNightBerryAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DestroyNightBerryAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DestroyNightBerryAction__VTable vtable;
};

struct HoldingLightTorchCondition__Fields {
    struct Condition_1__Fields _;
    bool IsHolding;
};

struct HoldingLightTorchCondition {
    struct HoldingLightTorchCondition__Class *klass;
    MonitorData *monitor;
    struct HoldingLightTorchCondition__Fields fields;
};

struct HoldingLightTorchCondition__VTable {
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

struct HoldingLightTorchCondition__StaticFields {
};

struct HoldingLightTorchCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HoldingLightTorchCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HoldingLightTorchCondition__VTable vtable;
};

struct HoldingTorchCondition__Fields {
    struct Condition_1__Fields _;
    bool IsHolding;
};

struct HoldingTorchCondition {
    struct HoldingTorchCondition__Class *klass;
    MonitorData *monitor;
    struct HoldingTorchCondition__Fields fields;
};

struct HoldingTorchCondition__VTable {
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

struct HoldingTorchCondition__StaticFields {
};

struct HoldingTorchCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HoldingTorchCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HoldingTorchCondition__VTable vtable;
};

enum class MistAction_ActionType__Enum : int32_t {
    ShowMist = 0x00000000,
    HideMist = 0x00000001,
};

struct MistAction_ActionType__Enum__Boxed {
    struct MistAction_ActionType__Enum__Class *klass;
    MonitorData *monitor;
    MistAction_ActionType__Enum value;
    
};

struct MistAction__Fields {
    struct ActionMethod__Fields _;
    MistAction_ActionType__Enum Action;
    
};

struct MistAction {
    struct MistAction__Class *klass;
    MonitorData *monitor;
    struct MistAction__Fields fields;
};

struct MistAction_ActionType__Enum__VTable {
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

struct MistAction_ActionType__Enum__StaticFields {
};

struct MistAction_ActionType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MistAction_ActionType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MistAction_ActionType__Enum__VTable vtable;
};

struct MistAction__VTable {
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

struct MistAction__StaticFields {
};

struct MistAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MistAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MistAction__VTable vtable;
};

struct MistController__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyTransparancyAnimator *MistAnimator;
};

struct MistController {
    struct MistController__Class *klass;
    MonitorData *monitor;
    struct MistController__Fields fields;
};

struct MistController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MistController__StaticFields {
};

struct MistController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MistController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MistController__VTable vtable;
};

enum class MistyWoodsKuroController_State__Enum : int32_t {
    Hidden = 0x00000000,
    Visible = 0x00000001,
    Hunting = 0x00000002,
    KillPlayer = 0x00000003,
    Returning = 0x00000004,
    SequenceFinished = 0x00000005,
};

struct MistyWoodsKuroController_State__Enum__Boxed {
    struct MistyWoodsKuroController_State__Enum__Class *klass;
    MonitorData *monitor;
    MistyWoodsKuroController_State__Enum value;
    
};

struct MistyWoodsKuroController__Fields {
    struct SaveSerialize__Fields _;
    struct MistyWoodsKuroGameplayController *GameplayController;
    struct SpriteAnimatorWithTransitions *KuroAnimator;
    struct MistyWoodsKuroController_Animations *KuroAnimations;
    struct SoundSource *IdleSound;
    struct SoundSource *ReturningSound;
    MistyWoodsKuroController_State__Enum CurrentState;
    
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct MistyWoodsKuroController {
    struct MistyWoodsKuroController__Class *klass;
    MonitorData *monitor;
    struct MistyWoodsKuroController__Fields fields;
};

enum class MistyWoodsKuroGameplayController_State__Enum : int32_t {
    Hidden = 0x00000000,
    Visible = 0x00000001,
    HiddenInDanger = 0x00000002,
    Killed = 0x00000003,
};

struct MistyWoodsKuroGameplayController_State__Enum__Boxed {
    struct MistyWoodsKuroGameplayController_State__Enum__Class *klass;
    MonitorData *monitor;
    MistyWoodsKuroGameplayController_State__Enum value;
    
};

struct MistyWoodsKuroGameplayController__Fields {
    struct SaveSerialize__Fields _;
    struct MistyWoodsKuroController *MistyWoodsKuroController;
    struct ActionMethod *OnHideAction;
    struct ActionMethod *OnVisibleAction;
    struct BaseAnimator *VisibilityAnimator;
    float HiddenSoundFadeOutDuration;
    struct SoundProvider *HiddenSoundProvider;
    float VisibleSoundFadeOutDuration;
    struct SoundProvider *VisibleSoundProvider;
    float TimeToHide;
    struct SoundPlayer *m_previousSound;
    float m_currentTime;
    struct SoundProvider *LandKillSound;
    struct SoundProvider *FlyKillSound;
    struct GameObject *KuroFlyAttack;
    struct CatAndMouseKuroLandZone__Array *m_zones;
    struct Transform__Array *InstaKillZones;
    MistyWoodsKuroGameplayController_State__Enum m_currentState;
    
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct MistyWoodsKuroGameplayController {
    struct MistyWoodsKuroGameplayController__Class *klass;
    MonitorData *monitor;
    struct MistyWoodsKuroGameplayController__Fields fields;
};

struct __declspec(align(8)) MistyWoodsKuroController_Animations__Fields {
    struct TextureAnimationWithTransitions *Idle;
    struct TextureAnimationWithTransitions *Notice;
    struct TextureAnimationWithTransitions *FlyUp;
    struct TextureAnimationWithTransitions *Returning;
};

struct MistyWoodsKuroController_Animations {
    struct MistyWoodsKuroController_Animations__Class *klass;
    MonitorData *monitor;
    struct MistyWoodsKuroController_Animations__Fields fields;
};

struct MistyWoodsKuroGameplayController_State__Enum__VTable {
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

struct MistyWoodsKuroGameplayController_State__Enum__StaticFields {
};

struct MistyWoodsKuroGameplayController_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MistyWoodsKuroGameplayController_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MistyWoodsKuroGameplayController_State__Enum__VTable vtable;
};

struct MistyWoodsKuroGameplayController__VTable {
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
};

struct MistyWoodsKuroGameplayController__StaticFields {
};

struct MistyWoodsKuroGameplayController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MistyWoodsKuroGameplayController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MistyWoodsKuroGameplayController__VTable vtable;
};

struct MistyWoodsKuroController_Animations__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

}
