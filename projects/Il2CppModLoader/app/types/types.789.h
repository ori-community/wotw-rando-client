namespace app {
struct IEnumerable_1_System_Char___StaticFields {
};

struct IEnumerable_1_System_Char___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Char___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Char___VTable vtable;
};

struct BreakFireStickAction__Fields {
    struct ActionMethod__Fields _;
    bool DestroyItem;
};

struct BreakFireStickAction {
    struct BreakFireStickAction__Class *klass;
    MonitorData *monitor;
    struct BreakFireStickAction__Fields fields;
};

struct BreakFireStickAction__VTable {
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

struct BreakFireStickAction__StaticFields {
};

struct BreakFireStickAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BreakFireStickAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BreakFireStickAction__VTable vtable;
};

struct DealDamageAction__Fields {
    struct ActionMethod__Fields _;
    DamageType__Enum DamageType;
    
    float Amount;
    bool DamageAllEnemies;
    struct GameObject *Target;
    struct Component_1__Array *m_targetComponents;
    bool m_isPrewarmed;
};

struct DealDamageAction {
    struct DealDamageAction__Class *klass;
    MonitorData *monitor;
    struct DealDamageAction__Fields fields;
};

struct DealDamageAction__VTable {
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
    VirtualInvokeData Prewarm;
};

struct DealDamageAction__StaticFields {
};

struct DealDamageAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DealDamageAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DealDamageAction__VTable vtable;
};

struct TimedActionExecuter__Fields {
    struct MonoBehaviour__Fields _;
};

struct TimedActionExecuter {
    struct TimedActionExecuter__Class *klass;
    MonitorData *monitor;
    struct TimedActionExecuter__Fields fields;
};

struct DelayedActionExecuter__Fields {
    struct TimedActionExecuter__Fields _;
    float Delay;
    struct ActionMethod *m_action;
};

struct DelayedActionExecuter {
    struct DelayedActionExecuter__Class *klass;
    MonitorData *monitor;
    struct DelayedActionExecuter__Fields fields;
};

struct TimedActionExecuter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
};

struct TimedActionExecuter__StaticFields {
};

struct TimedActionExecuter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimedActionExecuter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimedActionExecuter__VTable vtable;
};

struct DelayedActionExecuter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_StartTime;
    VirtualInvokeData set_StartTime;
    VirtualInvokeData ExecuteAction;
    VirtualInvokeData StopAction;
    VirtualInvokeData get_ActionWithDuration;
    VirtualInvokeData get_ActionMethod;
};

struct DelayedActionExecuter__StaticFields {
};

struct DelayedActionExecuter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DelayedActionExecuter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DelayedActionExecuter__VTable vtable;
};

struct DropCurrentlyHeldItem__Fields {
    struct ActionMethod__Fields _;
    bool DestroyItem;
};

struct DropCurrentlyHeldItem {
    struct DropCurrentlyHeldItem__Class *klass;
    MonitorData *monitor;
    struct DropCurrentlyHeldItem__Fields fields;
};

struct DropCurrentlyHeldItem__VTable {
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

struct DropCurrentlyHeldItem__StaticFields {
};

struct DropCurrentlyHeldItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DropCurrentlyHeldItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DropCurrentlyHeldItem__VTable vtable;
};

struct LoadGameAction__Fields {
    struct ActionMethod__Fields _;
    bool IsBackupLoad;
    struct MessageProvider *FailedToLoadMessageProvider;
};

struct LoadGameAction {
    struct LoadGameAction__Class *klass;
    MonitorData *monitor;
    struct LoadGameAction__Fields fields;
};

struct LoadGameAction__VTable {
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

struct LoadGameAction__StaticFields {
};

struct LoadGameAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoadGameAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoadGameAction__VTable vtable;
};

struct LoadGameWithoutCheckpointRestoreAction__Fields {
    struct ActionMethod__Fields _;
};

struct LoadGameWithoutCheckpointRestoreAction {
    struct LoadGameWithoutCheckpointRestoreAction__Class *klass;
    MonitorData *monitor;
    struct LoadGameWithoutCheckpointRestoreAction__Fields fields;
};

struct LoadGameWithoutCheckpointRestoreAction__VTable {
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

struct LoadGameWithoutCheckpointRestoreAction__StaticFields {
};

struct LoadGameWithoutCheckpointRestoreAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoadGameWithoutCheckpointRestoreAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoadGameWithoutCheckpointRestoreAction__VTable vtable;
};

struct MakeEnemyAttackPlayerAction__Fields {
    struct ActionMethod__Fields _;
    struct RespawningPlaceholder *Placeholder;
};

struct MakeEnemyAttackPlayerAction {
    struct MakeEnemyAttackPlayerAction__Class *klass;
    MonitorData *monitor;
    struct MakeEnemyAttackPlayerAction__Fields fields;
};

struct MakeEnemyAttackPlayerAction__VTable {
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

struct MakeEnemyAttackPlayerAction__StaticFields {
};

struct MakeEnemyAttackPlayerAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MakeEnemyAttackPlayerAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MakeEnemyAttackPlayerAction__VTable vtable;
};

struct MarkSavePedestalAsUsedAction__Fields {
    struct ActionMethod__Fields _;
    struct SavePedestal *SavePedestal;
};

struct MarkSavePedestalAsUsedAction {
    struct MarkSavePedestalAsUsedAction__Class *klass;
    MonitorData *monitor;
    struct MarkSavePedestalAsUsedAction__Fields fields;
};

enum class SavePedestal_State__Enum : int32_t {
    Normal = 0x00000000,
    Highlighted = 0x00000001,
};

struct SavePedestal_State__Enum__Boxed {
    struct SavePedestal_State__Enum__Class *klass;
    MonitorData *monitor;
    SavePedestal_State__Enum value;
    
};

struct SavePedestal__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *OriTarget;
    float Radius;
    float OriDuration;
    struct String *Identifier;
    bool ShowTopHint;
    struct Transform *EnableOnTeleportActive;
    struct Transform *m_transform;
    bool m_isAnyOtherTeleporterActiveCached;
    struct MessageBox *m_hint;
    struct SoundProvider *OnOriEnter;
    struct SoundProvider *OnOriExit;
    struct SoundProvider *OnSaveSecondTime;
    struct SavePedestalUberState *SerializedState;
    struct MoonTimeline *TeleportEffect;
    struct IUberState__Array *m_affectingUberStates;
    struct MoonTimeline *OriEnterTimeline;
    struct MoonTimeline *OriExitTimeline;
    struct MoonTimeline *OnOpenedTimelineOri;
    struct MoonTimeline *OnOpenedTimelineTandem;
    struct SeinAbilityRestrictZone *AbilityRestrictZone;
    bool m_hintShowPending;
    SavePedestal_State__Enum CurrentState;
    
    bool _InvalidateParentTimelineCache_k__BackingField;
};

struct SavePedestal {
    struct SavePedestal__Class *klass;
    MonitorData *monitor;
    struct SavePedestal__Fields fields;
};

struct __declspec(align(8)) List_1_SavePedestal___Fields {
    struct SavePedestal__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SavePedestal_ {
    struct List_1_SavePedestal___Class *klass;
    MonitorData *monitor;
    struct List_1_SavePedestal___Fields fields;
};

struct SavePedestal__Array {
    struct SavePedestal__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SavePedestal *vector[32];
};

struct IEnumerator_1_SavePedestal_ {
    struct IEnumerator_1_SavePedestal___Class *klass;
    MonitorData *monitor;
};

enum class SeinAbilityRestrictZoneMode__Enum : int32_t {
    AllAbilities = 0x00000000,
    Dash = 0x00000001,
    Attack = 0x00000002,
    None = 0x00000003,
};

struct SeinAbilityRestrictZoneMode__Enum__Boxed {
    struct SeinAbilityRestrictZoneMode__Enum__Class *klass;
    MonitorData *monitor;
    SeinAbilityRestrictZoneMode__Enum value;
    
};

struct SeinAbilityRestrictZone__Fields {
    struct MonoBehaviour__Fields _;
    bool m_inside;
    float m_characterPositionNormalized;
    struct Rect m_bounds;
    SeinAbilityRestrictZoneMask__Enum RestrictMask;
    
    SeinAbilityRestrictZoneMask__Enum RestrictMaskLeft;
    
    SeinAbilityRestrictZoneMask__Enum RestrictMaskRight;
    
    SeinAbilityRestrictZoneMode__Enum RestrictMode;
    
    struct Condition_1 *Condition;
    float InfluenceWhenMovingLeft;
    float InfluenceWhenMovingRight;
    bool BlockMovementLeft;
    bool BlockMovementRight;
    bool PreventMovingThroughZone;
    bool UseNormalizedValues;
    bool m_subscribedToSeinEvents;
    bool m_subscribedToKuEvents;
    struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array *HorizontalMovementSettings;
    struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array *GravityMovementSettings;
    struct AnimationSwapSet *AnimationSetRight;
    struct AnimationSwapSet *AnimationSetLeft;
    struct Color EditorColor;
};

struct SeinAbilityRestrictZone {
    struct SeinAbilityRestrictZone__Class *klass;
    MonitorData *monitor;
    struct SeinAbilityRestrictZone__Fields fields;
};

struct __declspec(align(8)) List_1_SeinAbilityRestrictZone___Fields {
    struct SeinAbilityRestrictZone__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SeinAbilityRestrictZone_ {
    struct List_1_SeinAbilityRestrictZone___Class *klass;
    MonitorData *monitor;
    struct List_1_SeinAbilityRestrictZone___Fields fields;
};

struct SeinAbilityRestrictZone__Array {
    struct SeinAbilityRestrictZone__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SeinAbilityRestrictZone *vector[32];
};

struct IEnumerator_1_SeinAbilityRestrictZone_ {
    struct IEnumerator_1_SeinAbilityRestrictZone___Class *klass;
    MonitorData *monitor;
};

struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting {
    struct HorizontalPlatformMovementSettings *HorizontalMovementSetting;
    float Time;
};

struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Boxed {
    struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Class *klass;
    MonitorData *monitor;
    struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting fields;
};

struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array {
    struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting vector[32];
};

struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings {
    struct GravityPlatformMovementSettings *GravityMovementSettings;
    float Time;
};

struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Boxed {
    struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Class *klass;
    MonitorData *monitor;
    struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings fields;
};

struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array {
    struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings vector[32];
};

struct AnimationSwapSet__Fields {
    struct ScriptableObject__Fields _;
    struct IdleOverride *Idle;
    struct RunOverride *Move;
    bool m_blockTurning;
};

struct AnimationSwapSet {
    struct AnimationSwapSet__Class *klass;
    MonitorData *monitor;
    struct AnimationSwapSet__Fields fields;
};

struct __declspec(align(8)) IdleOverride__Fields {
    bool ShouldOverride;
    struct AnimationSwap *IdleBlend;
    struct AnimationSwap *IdleYawn;
    struct MoonAnimation *LookBackAnimationIn;
    struct MoonAnimation *LookBackAnimationLoop;
    struct MoonAnimation *LookBackAnimationOut;
};

struct IdleOverride {
    struct IdleOverride__Class *klass;
    MonitorData *monitor;
    struct IdleOverride__Fields fields;
};

struct __declspec(align(8)) AnimationSwap__Fields {
    bool ShouldOverride;
    struct MoonAnimation *AnimationOverride;
    struct MoonAnimation *OverriddenAnimation;
};

struct AnimationSwap {
    struct AnimationSwap__Class *klass;
    MonitorData *monitor;
    struct AnimationSwap__Fields fields;
};

struct __declspec(align(8)) RunOverride__Fields {
    bool ShouldOverride;
    struct AnimationSwap *MoveBlend;
    struct AnimationSwap *RunTurn;
    struct AnimationParameterSwap *Speed;
};

struct RunOverride {
    struct RunOverride__Class *klass;
    MonitorData *monitor;
    struct RunOverride__Fields fields;
};

struct __declspec(align(8)) AnimationParameterSwap__Fields {
    bool ShouldOverride;
    struct FloatAnimationParameter *ParameterOverride;
    struct FloatAnimationParameter *OverriddenParameter;
};

struct AnimationParameterSwap {
    struct AnimationParameterSwap__Class *klass;
    MonitorData *monitor;
    struct AnimationParameterSwap__Fields fields;
};

struct SavePedestal__Array__VTable {
};

struct SavePedestal__Array__StaticFields {
};

struct SavePedestal__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SavePedestal__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SavePedestal__Array__VTable vtable;
};

struct IEnumerator_1_SavePedestal___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_SavePedestal___StaticFields {
};

struct IEnumerator_1_SavePedestal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_SavePedestal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_SavePedestal___VTable vtable;
};

struct List_1_SavePedestal___VTable {
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

struct List_1_SavePedestal___StaticFields {
    struct SavePedestal__Array *_emptyArray;
};

struct List_1_SavePedestal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_SavePedestal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_SavePedestal___VTable vtable;
};

struct SeinAbilityRestrictZoneMode__Enum__VTable {
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

struct SeinAbilityRestrictZoneMode__Enum__StaticFields {
};

struct SeinAbilityRestrictZoneMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinAbilityRestrictZoneMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinAbilityRestrictZoneMode__Enum__VTable vtable;
};

struct SeinAbilityRestrictZone__Array__VTable {
};

struct SeinAbilityRestrictZone__Array__StaticFields {
};

struct SeinAbilityRestrictZone__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinAbilityRestrictZone__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinAbilityRestrictZone__Array__VTable vtable;
};

struct IEnumerator_1_SeinAbilityRestrictZone___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_SeinAbilityRestrictZone___StaticFields {
};

struct IEnumerator_1_SeinAbilityRestrictZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_SeinAbilityRestrictZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_SeinAbilityRestrictZone___VTable vtable;
};

struct List_1_SeinAbilityRestrictZone___VTable {
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

struct List_1_SeinAbilityRestrictZone___StaticFields {
    struct SeinAbilityRestrictZone__Array *_emptyArray;
};

struct List_1_SeinAbilityRestrictZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_SeinAbilityRestrictZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_SeinAbilityRestrictZone___VTable vtable;
};

struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__StaticFields {
};

struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__VTable vtable;
};

struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__VTable {
};

struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__StaticFields {
};

struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__VTable vtable;
};

struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__StaticFields {
};

struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__VTable vtable;
};

struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__VTable {
};

struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__StaticFields {
};

struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__VTable vtable;
};

struct AnimationSwap__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationSwap__StaticFields {
};

struct AnimationSwap__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationSwap__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationSwap__VTable vtable;
};

struct IdleOverride__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct IdleOverride__StaticFields {
};

struct IdleOverride__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IdleOverride__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IdleOverride__VTable vtable;
};

struct AnimationParameterSwap__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationParameterSwap__StaticFields {
};

struct AnimationParameterSwap__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationParameterSwap__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationParameterSwap__VTable vtable;
};

struct RunOverride__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RunOverride__StaticFields {
};

struct RunOverride__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RunOverride__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RunOverride__VTable vtable;
};

struct AnimationSwapSet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationSwapSet__StaticFields {
};

struct AnimationSwapSet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationSwapSet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationSwapSet__VTable vtable;
};

struct SeinAbilityRestrictZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData get_VirtualTimelineTarget;
    VirtualInvokeData get_VirtualTimelineGroup;
    VirtualInvokeData get_NameDisplayedOnClip;
};

struct SeinAbilityRestrictZone__StaticFields {
    struct List_1_SeinAbilityRestrictZone_ *All;
};

struct SeinAbilityRestrictZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinAbilityRestrictZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinAbilityRestrictZone__VTable vtable;
};

struct SavePedestal_State__Enum__VTable {
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

struct SavePedestal_State__Enum__StaticFields {
};

struct SavePedestal_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SavePedestal_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SavePedestal_State__Enum__VTable vtable;
};

struct SavePedestal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
    VirtualInvokeData Highlight;
    VirtualInvokeData Unhighlight;
    VirtualInvokeData FixedUpdate;
};

}
