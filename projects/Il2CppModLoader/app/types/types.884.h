namespace app {
enum class NPCMessageBox_State__Enum : int32_t {
    Writing = 0x00000000,
    Completed = 0x00000001,
    Inactive = 0x00000002,
};

struct NPCMessageBox_State__Enum__Boxed {
    struct NPCMessageBox_State__Enum__Class *klass;
    MonitorData *monitor;
    NPCMessageBox_State__Enum value;
    
};

struct NPCMessageBox__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox *MessageBox;
    struct InteractionBinding *XInteractionBinding;
    struct InteractionBinding *YInteractionBinding;
    struct InteractionBinding *AInteractionBinding;
    struct InteractionBinding *BInteractionBinding;
    struct GameObject *ButtonGroup;
    struct GameObject *ButtonX;
    struct GameObject *ButtonY;
    struct GameObject *ButtonA;
    struct GameObject *ButtonB;
    float ButtonXStep;
    NPCMessageBox_State__Enum m_state;
    
    struct BaseAnimator *ButtonAnimator;
    float WaitTimeFirstMessage;
    float m_remainingWaitTime;
    bool m_prevLockState;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
    struct SoundHost *SoundHost;
    struct SoundSource *MessageProviderSoundSource;
    struct SoundSource *MessageFinishedSound;
    struct SoundSource *NextMessageSound;
    struct SoundSource *CloseMessageBoxSound;
    float m_buttonLayoutOffset;
    float m_lastButtonRightX;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct NPCMessageBox {
    struct NPCMessageBox__Class *klass;
    MonitorData *monitor;
    struct NPCMessageBox__Fields fields;
};

struct NPCMessageBox_State__Enum__VTable {
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

struct NPCMessageBox_State__Enum__StaticFields {
};

struct NPCMessageBox_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NPCMessageBox_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NPCMessageBox_State__Enum__VTable vtable;
};

struct NPCMessageBox__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
};

struct NPCMessageBox__StaticFields {
};

struct NPCMessageBox__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NPCMessageBox__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NPCMessageBox__VTable vtable;
};

struct NPCMessageBoxModifier__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject__Array *HideableGameObjects;
};

struct NPCMessageBoxModifier {
    struct NPCMessageBoxModifier__Class *klass;
    MonitorData *monitor;
    struct NPCMessageBoxModifier__Fields fields;
};

struct NPCMessageBoxModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NPCMessageBoxModifier__StaticFields {
};

struct NPCMessageBoxModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NPCMessageBoxModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NPCMessageBoxModifier__VTable vtable;
};

struct LookBlendAnimationControl__Fields {
    struct MonoBehaviour__Fields _;
    struct FloatAnimationParameter *LookAngleParameter;
    struct MoonAnimator *Animator;
    float LookOffsetX;
    struct Sensor *m_sensor;
};

struct LookBlendAnimationControl {
    struct LookBlendAnimationControl__Class *klass;
    MonitorData *monitor;
    struct LookBlendAnimationControl__Fields fields;
};

struct LookBlendAnimationControl__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LookBlendAnimationControl__StaticFields {
};

struct LookBlendAnimationControl__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LookBlendAnimationControl__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LookBlendAnimationControl__VTable vtable;
};

enum class ShardTraderNPC_State__Enum : int32_t {
    Idle = 0x00000000,
    MoveOriToPosition = 0x00000001,
    Interaction = 0x00000002,
    OpenShop = 0x00000003,
    AfterShop = 0x00000004,
    DidNotBuy = 0x00000005,
};

struct ShardTraderNPC_State__Enum__Boxed {
    struct ShardTraderNPC_State__Enum__Class *klass;
    MonitorData *monitor;
    ShardTraderNPC_State__Enum value;
    
};

struct ShardTraderNPC__Fields {
    struct BaseNPC__Fields _;
    struct LayerMask CollisionMaskCanInteract;
    struct List_1_SpiritShardType_ *ShardsInStock;
    struct MessageProvider *InteractionHintMessage;
    struct MessageProvider *InteractionMessageProvider;
    struct InteractionSettings *OpenShopInteraction;
    struct InteractionSettings *ShardsPurcahsedInteraction;
    struct MessageProvider *NoPurchaseMessageProvider;
    struct MessageProvider *AfterShopMessageProvider;
    struct CameraOffsetZone *InteractionCameraOffsetZone;
    struct MoonTimeline *TalkingTimeline;
    struct MoonTimeline *OpenShopTimeline;
    struct Locomotion *TurningHandler;
    struct Transform *OriPositionForInteraction;
    float OriPositionMoveRate;
    struct MoonAnimation *OriMoveToPositionAnimation;
    struct GameObject *m_shardEntity;
    ShardTraderNPC_State__Enum m_currentState;
    
    float m_currentStateTime;
    struct MessageBox *m_interactionHintMessageBox;
    struct RuntimeGameWorldArea *m_runtimeArea;
    bool m_moveOri;
    struct Vector2 m_oriInteractionPosition;
    struct DynamicDataResolver *m_dataResolver;
};

struct ShardTraderNPC {
    struct ShardTraderNPC__Class *klass;
    MonitorData *monitor;
    struct ShardTraderNPC__Fields fields;
};

struct ShardTraderNPC_State__Enum__VTable {
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

struct ShardTraderNPC_State__Enum__StaticFields {
};

struct ShardTraderNPC_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShardTraderNPC_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShardTraderNPC_State__Enum__VTable vtable;
};

struct ShardTraderNPC__VTable {
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
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData GetResolverForType;
};

struct ShardTraderNPC__StaticFields {
};

struct ShardTraderNPC__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShardTraderNPC__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShardTraderNPC__VTable vtable;
};

struct __declspec(align(8)) MeshRendererFrustrumOptimiser__Fields {
    struct GameObject *GameObject;
    struct Bounds BoundingBox;
    bool m_outsideFrustum;
};

struct MeshRendererFrustrumOptimiser {
    struct MeshRendererFrustrumOptimiser__Class *klass;
    MonitorData *monitor;
    struct MeshRendererFrustrumOptimiser__Fields fields;
};

struct MeshRendererFrustrumOptimiser__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnFrustumEnter;
    VirtualInvokeData OnFrustumExit;
    VirtualInvokeData get_InsideFrustum;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_AllowCacheBounds;
};

struct MeshRendererFrustrumOptimiser__StaticFields {
};

struct MeshRendererFrustrumOptimiser__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeshRendererFrustrumOptimiser__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeshRendererFrustrumOptimiser__VTable vtable;
};

struct CameraFrustumArtOptimizer__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_MeshRendererFrustrumOptimiser_ *Sprites;
};

struct CameraFrustumArtOptimizer {
    struct CameraFrustumArtOptimizer__Class *klass;
    MonitorData *monitor;
    struct CameraFrustumArtOptimizer__Fields fields;
};

struct __declspec(align(8)) List_1_MeshRendererFrustrumOptimiser___Fields {
    struct MeshRendererFrustrumOptimiser__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_MeshRendererFrustrumOptimiser_ {
    struct List_1_MeshRendererFrustrumOptimiser___Class *klass;
    MonitorData *monitor;
    struct List_1_MeshRendererFrustrumOptimiser___Fields fields;
};

struct MeshRendererFrustrumOptimiser__Array {
    struct MeshRendererFrustrumOptimiser__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MeshRendererFrustrumOptimiser *vector[32];
};

struct IEnumerator_1_MeshRendererFrustrumOptimiser_ {
    struct IEnumerator_1_MeshRendererFrustrumOptimiser___Class *klass;
    MonitorData *monitor;
};

struct MeshRendererFrustrumOptimiser__Array__VTable {
};

struct MeshRendererFrustrumOptimiser__Array__StaticFields {
};

struct MeshRendererFrustrumOptimiser__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeshRendererFrustrumOptimiser__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeshRendererFrustrumOptimiser__Array__VTable vtable;
};

struct IEnumerator_1_MeshRendererFrustrumOptimiser___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_MeshRendererFrustrumOptimiser___StaticFields {
};

struct IEnumerator_1_MeshRendererFrustrumOptimiser___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_MeshRendererFrustrumOptimiser___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_MeshRendererFrustrumOptimiser___VTable vtable;
};

struct List_1_MeshRendererFrustrumOptimiser___VTable {
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

struct List_1_MeshRendererFrustrumOptimiser___StaticFields {
    struct MeshRendererFrustrumOptimiser__Array *_emptyArray;
};

struct List_1_MeshRendererFrustrumOptimiser___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_MeshRendererFrustrumOptimiser___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_MeshRendererFrustrumOptimiser___VTable vtable;
};

struct CameraFrustumArtOptimizer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CameraFrustumArtOptimizer__StaticFields {
};

struct CameraFrustumArtOptimizer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraFrustumArtOptimizer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraFrustumArtOptimizer__VTable vtable;
};

struct Timer_2 {
    struct Timer_2__Class *klass;
    MonitorData *monitor;
};

struct Timer_2__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Timer_2__StaticFields {
};

struct Timer_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Timer_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Timer_2__VTable vtable;
};

struct CameraFrustumOptimizer__Fields {
    struct MonoBehaviour__Fields _;
    bool m_visualDebugRegistered;
    bool m_debugEnabled;
    bool EnableDebugForArtCells;
    bool Debug;
    bool m_enabled;
    struct Vector3 m_lastCalculationCameraPosition;
    bool m_activating;
    struct NativeArray_1_System_Byte_ insideResults;
    int32_t m_forceCount;
};

struct CameraFrustumOptimizer {
    struct CameraFrustumOptimizer__Class *klass;
    MonitorData *monitor;
    struct CameraFrustumOptimizer__Fields fields;
};

struct CameraFrustumOptimizer_BoundsCache {
    struct NativeArray_1_UnityEngine_Bounds_ cachedBounds;
    struct Int32__Array *nonCachable;
    int32_t cachedBoundsCount;
    int32_t nonCachableCount;
    bool dirty;
};

struct CameraFrustumOptimizer_BoundsCache__Boxed {
    struct CameraFrustumOptimizer_BoundsCache__Class *klass;
    MonitorData *monitor;
    struct CameraFrustumOptimizer_BoundsCache fields;
};

struct __declspec(align(8)) AllContainer_1_IFrustumOptimizable___Fields {
    struct List_1_IFrustumOptimizable_ *m_objects;
};

struct AllContainer_1_IFrustumOptimizable_ {
    struct AllContainer_1_IFrustumOptimizable___Class *klass;
    MonitorData *monitor;
    struct AllContainer_1_IFrustumOptimizable___Fields fields;
};

struct __declspec(align(8)) List_1_IFrustumOptimizable___Fields {
    struct IFrustumOptimizable__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_IFrustumOptimizable_ {
    struct List_1_IFrustumOptimizable___Class *klass;
    MonitorData *monitor;
    struct List_1_IFrustumOptimizable___Fields fields;
};

struct IFrustumOptimizable {
    struct IFrustumOptimizable__Class *klass;
    MonitorData *monitor;
};

struct IFrustumOptimizable__Array {
    struct IFrustumOptimizable__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IFrustumOptimizable *vector[32];
};

struct IEnumerator_1_IFrustumOptimizable_ {
    struct IEnumerator_1_IFrustumOptimizable___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Game_IFrustumEnabled___Fields {
    struct IFrustumEnabled__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Game_IFrustumEnabled_ {
    struct List_1_Game_IFrustumEnabled___Class *klass;
    MonitorData *monitor;
    struct List_1_Game_IFrustumEnabled___Fields fields;
};

struct IFrustumEnabled {
    struct IFrustumEnabled__Class *klass;
    MonitorData *monitor;
};

struct IFrustumEnabled__Array {
    struct IFrustumEnabled__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IFrustumEnabled *vector[32];
};

struct IEnumerator_1_Game_IFrustumEnabled_ {
    struct IEnumerator_1_Game_IFrustumEnabled___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_CameraFrustumOptimizer_EarlyZActivation___Fields {
    struct CameraFrustumOptimizer_EarlyZActivation__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CameraFrustumOptimizer_EarlyZActivation_ {
    struct List_1_CameraFrustumOptimizer_EarlyZActivation___Class *klass;
    MonitorData *monitor;
    struct List_1_CameraFrustumOptimizer_EarlyZActivation___Fields fields;
};

struct CameraFrustumOptimizer_EarlyZActivation {
    struct MeshRenderer *renderer;
    int32_t delayCount;
};

struct CameraFrustumOptimizer_EarlyZActivation__Boxed {
    struct CameraFrustumOptimizer_EarlyZActivation__Class *klass;
    MonitorData *monitor;
    struct CameraFrustumOptimizer_EarlyZActivation fields;
};

struct CameraFrustumOptimizer_EarlyZActivation__Array {
    struct CameraFrustumOptimizer_EarlyZActivation__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CameraFrustumOptimizer_EarlyZActivation vector[32];
};

struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation_ {
    struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___Class *klass;
    MonitorData *monitor;
};

enum class RenderingType__Enum : int32_t {
    Primitives = 0x00000000,
    Meshes = 0x00000001,
};

struct RenderingType__Enum__Boxed {
    struct RenderingType__Enum__Class *klass;
    MonitorData *monitor;
    RenderingType__Enum value;
    
};

struct CameraFrustumOptimizer_BoundsCache__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CameraFrustumOptimizer_BoundsCache__StaticFields {
};

struct CameraFrustumOptimizer_BoundsCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraFrustumOptimizer_BoundsCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraFrustumOptimizer_BoundsCache__VTable vtable;
};

struct IFrustumOptimizable__VTable {
    VirtualInvokeData OnFrustumEnter;
    VirtualInvokeData OnFrustumExit;
    VirtualInvokeData get_InsideFrustum;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_AllowCacheBounds;
};

struct IFrustumOptimizable__StaticFields {
};

struct IFrustumOptimizable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IFrustumOptimizable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IFrustumOptimizable__VTable vtable;
};

struct IFrustumOptimizable__Array__VTable {
};

struct IFrustumOptimizable__Array__StaticFields {
};

struct IFrustumOptimizable__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IFrustumOptimizable__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IFrustumOptimizable__Array__VTable vtable;
};

struct IEnumerator_1_IFrustumOptimizable___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_IFrustumOptimizable___StaticFields {
};

struct IEnumerator_1_IFrustumOptimizable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_IFrustumOptimizable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_IFrustumOptimizable___VTable vtable;
};

struct List_1_IFrustumOptimizable___VTable {
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

struct List_1_IFrustumOptimizable___StaticFields {
    struct IFrustumOptimizable__Array *_emptyArray;
};

struct List_1_IFrustumOptimizable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_IFrustumOptimizable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_IFrustumOptimizable___VTable vtable;
};

struct AllContainer_1_IFrustumOptimizable___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AllContainer_1_IFrustumOptimizable___StaticFields {
};

struct AllContainer_1_IFrustumOptimizable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AllContainer_1_IFrustumOptimizable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AllContainer_1_IFrustumOptimizable___VTable vtable;
};

struct IFrustumEnabled__VTable {
    VirtualInvokeData OnFrustumInstantEnabled;
};

struct IFrustumEnabled__StaticFields {
};

struct IFrustumEnabled__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IFrustumEnabled__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IFrustumEnabled__VTable vtable;
};

struct IFrustumEnabled__Array__VTable {
};

struct IFrustumEnabled__Array__StaticFields {
};

struct IFrustumEnabled__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IFrustumEnabled__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IFrustumEnabled__Array__VTable vtable;
};

struct IEnumerator_1_Game_IFrustumEnabled___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Game_IFrustumEnabled___StaticFields {
};

struct IEnumerator_1_Game_IFrustumEnabled___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Game_IFrustumEnabled___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Game_IFrustumEnabled___VTable vtable;
};

struct List_1_Game_IFrustumEnabled___VTable {
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

struct List_1_Game_IFrustumEnabled___StaticFields {
    struct IFrustumEnabled__Array *_emptyArray;
};

struct List_1_Game_IFrustumEnabled___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Game_IFrustumEnabled___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Game_IFrustumEnabled___VTable vtable;
};

struct CameraFrustumOptimizer_EarlyZActivation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CameraFrustumOptimizer_EarlyZActivation__StaticFields {
};

struct CameraFrustumOptimizer_EarlyZActivation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraFrustumOptimizer_EarlyZActivation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraFrustumOptimizer_EarlyZActivation__VTable vtable;
};

struct CameraFrustumOptimizer_EarlyZActivation__Array__VTable {
};

struct CameraFrustumOptimizer_EarlyZActivation__Array__StaticFields {
};

struct CameraFrustumOptimizer_EarlyZActivation__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraFrustumOptimizer_EarlyZActivation__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraFrustumOptimizer_EarlyZActivation__Array__VTable vtable;
};

struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___StaticFields {
};

struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___VTable vtable;
};

struct List_1_CameraFrustumOptimizer_EarlyZActivation___VTable {
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

struct List_1_CameraFrustumOptimizer_EarlyZActivation___StaticFields {
    struct CameraFrustumOptimizer_EarlyZActivation__Array *_emptyArray;
};

struct List_1_CameraFrustumOptimizer_EarlyZActivation___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_CameraFrustumOptimizer_EarlyZActivation___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_CameraFrustumOptimizer_EarlyZActivation___VTable vtable;
};

struct RenderingType__Enum__VTable {
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

}
