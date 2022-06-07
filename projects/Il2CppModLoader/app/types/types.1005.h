namespace app {
struct UberPostBloomAnimator__StaticFields {
    struct List_1_UberPostBloomAnimator_ *m_animators;
};

struct UberPostBloomAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberPostBloomAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberPostBloomAnimator__VTable vtable;
};

struct UberPostContrastAndBrightnessAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve *ContrastAnimationCurve;
    struct AnimationCurve *BrightnessAnimationCurve;
    struct CameraPostProcessing *m_cameraPostProcessing;
};

struct UberPostContrastAndBrightnessAnimator {
    struct UberPostContrastAndBrightnessAnimator__Class *klass;
    MonitorData *monitor;
    struct UberPostContrastAndBrightnessAnimator__Fields fields;
};

struct __declspec(align(8)) List_1_UberPostContrastAndBrightnessAnimator___Fields {
    struct UberPostContrastAndBrightnessAnimator__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberPostContrastAndBrightnessAnimator_ {
    struct List_1_UberPostContrastAndBrightnessAnimator___Class *klass;
    MonitorData *monitor;
    struct List_1_UberPostContrastAndBrightnessAnimator___Fields fields;
};

struct UberPostContrastAndBrightnessAnimator__Array {
    struct UberPostContrastAndBrightnessAnimator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberPostContrastAndBrightnessAnimator *vector[32];
};

struct IEnumerator_1_UberPostContrastAndBrightnessAnimator_ {
    struct IEnumerator_1_UberPostContrastAndBrightnessAnimator___Class *klass;
    MonitorData *monitor;
};

struct UberPostContrastAndBrightnessAnimator__Array__VTable {
};

struct UberPostContrastAndBrightnessAnimator__Array__StaticFields {
};

struct UberPostContrastAndBrightnessAnimator__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberPostContrastAndBrightnessAnimator__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberPostContrastAndBrightnessAnimator__Array__VTable vtable;
};

struct IEnumerator_1_UberPostContrastAndBrightnessAnimator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UberPostContrastAndBrightnessAnimator___StaticFields {
};

struct IEnumerator_1_UberPostContrastAndBrightnessAnimator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UberPostContrastAndBrightnessAnimator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UberPostContrastAndBrightnessAnimator___VTable vtable;
};

struct List_1_UberPostContrastAndBrightnessAnimator___VTable {
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

struct List_1_UberPostContrastAndBrightnessAnimator___StaticFields {
    struct UberPostContrastAndBrightnessAnimator__Array *_emptyArray;
};

struct List_1_UberPostContrastAndBrightnessAnimator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UberPostContrastAndBrightnessAnimator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UberPostContrastAndBrightnessAnimator___VTable vtable;
};

struct UberPostContrastAndBrightnessAnimator__VTable {
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

struct UberPostContrastAndBrightnessAnimator__StaticFields {
    struct List_1_UberPostContrastAndBrightnessAnimator_ *m_animators;
};

struct UberPostContrastAndBrightnessAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberPostContrastAndBrightnessAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberPostContrastAndBrightnessAnimator__VTable vtable;
};

struct UberPostDesaturationAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve *AnimationCurve;
    struct CameraPostProcessing *m_cameraPostProcessing;
};

struct UberPostDesaturationAnimator {
    struct UberPostDesaturationAnimator__Class *klass;
    MonitorData *monitor;
    struct UberPostDesaturationAnimator__Fields fields;
};

struct UberPostDesaturationAnimator__VTable {
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

struct UberPostDesaturationAnimator__StaticFields {
};

struct UberPostDesaturationAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberPostDesaturationAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberPostDesaturationAnimator__VTable vtable;
};

enum class UberTextureSettingsAnimator_TextureName__Enum : int32_t {
    MainTexture = 0x00000000,
    MaskTexture = 0x00000001,
    MaskTextureExtra = 0x00000002,
    Distortion = 0x00000003,
    DistortionMask = 0x00000004,
    DistortionExtra = 0x00000005,
    DistortionExtraMask = 0x00000006,
    MultiplyLayer = 0x00000007,
    MultiplyLayerMask = 0x00000008,
    MultiplyLayerExtra = 0x00000009,
    MultiplyLayerExtraMask = 0x0000000a,
    MultiplyLayerThird = 0x0000000b,
    MultiplyLayerThirdMask = 0x0000000c,
    DodgeLayer = 0x0000000d,
    AdditiveLayer = 0x0000000e,
    AdditiveLayerMask = 0x0000000f,
    AdditiveLayerExtra = 0x00000010,
    AdditiveLayerExtraMask = 0x00000011,
    MaskDissolveTexture = 0x00000012,
};

struct UberTextureSettingsAnimator_TextureName__Enum__Boxed {
    struct UberTextureSettingsAnimator_TextureName__Enum__Class *klass;
    MonitorData *monitor;
    UberTextureSettingsAnimator_TextureName__Enum value;
    
};

struct UberTextureSettingsAnimator__Fields {
    struct BaseAnimator__Fields _;
    bool UseOffset;
    bool UseScale;
    bool UseRotation;
    bool Relative;
    struct AnimationCurve *OffsetX;
    struct AnimationCurve *OffsetY;
    struct AnimationCurve *ScaleX;
    struct AnimationCurve *ScaleY;
    struct AnimationCurve *Rotation;
    struct Vector2 m_originalOffset;
    struct Vector2 m_originalScale;
    float m_originalRotation;
    struct Renderer *m_renderer;
    UberTextureSettingsAnimator_TextureName__Enum TextureTarget;
    
};

struct UberTextureSettingsAnimator {
    struct UberTextureSettingsAnimator__Class *klass;
    MonitorData *monitor;
    struct UberTextureSettingsAnimator__Fields fields;
};

struct UberTextureSettingsAnimator_TextureName__Enum__VTable {
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

struct UberTextureSettingsAnimator_TextureName__Enum__StaticFields {
};

struct UberTextureSettingsAnimator_TextureName__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberTextureSettingsAnimator_TextureName__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberTextureSettingsAnimator_TextureName__Enum__VTable vtable;
};

struct UberTextureSettingsAnimator__VTable {
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

struct UberTextureSettingsAnimator__StaticFields {
    struct UberShaderProperty_Texture__Enum__Array *TextureProperties;
};

struct UberTextureSettingsAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberTextureSettingsAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberTextureSettingsAnimator__VTable vtable;
};

struct UberVignettingAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve *IntensityAnimationCurve;
    struct CameraPostProcessing *m_cameraPostProcessing;
};

struct UberVignettingAnimator {
    struct UberVignettingAnimator__Class *klass;
    MonitorData *monitor;
    struct UberVignettingAnimator__Fields fields;
};

struct UberVignettingAnimator__VTable {
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

struct UberVignettingAnimator__StaticFields {
};

struct UberVignettingAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberVignettingAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberVignettingAnimator__VTable vtable;
};

struct UberWaterForceAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve *AnimationCurve;
    float m_originalStrength;
    struct UberWaterForceActor *m_actor;
};

struct UberWaterForceAnimator {
    struct UberWaterForceAnimator__Class *klass;
    MonitorData *monitor;
    struct UberWaterForceAnimator__Fields fields;
};

struct UberWaterForceAnimator__VTable {
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

struct UberWaterForceAnimator__StaticFields {
};

struct UberWaterForceAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberWaterForceAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberWaterForceAnimator__VTable vtable;
};

struct UberWaterAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct UberWaterControl *UberWater;
    struct AnimationCurve *NoiseStrength;
    struct AnimationCurve *NoiseSpeed;
    struct AnimationCurve *DirectionX;
    struct AnimationCurve *DirectionY;
    float m_originalStrength;
    float m_originalSpeed;
    float m_originalDirX;
    float m_originalDirY;
};

struct UberWaterAnimator {
    struct UberWaterAnimator__Class *klass;
    MonitorData *monitor;
    struct UberWaterAnimator__Fields fields;
};

struct UberWaterAnimator__VTable {
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

struct UberWaterAnimator__StaticFields {
};

struct UberWaterAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberWaterAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberWaterAnimator__VTable vtable;
};

struct WideScreenAdjustmentAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve *WideScreenHorizontalPanCurve;
    struct AnimationCurve *WideScreenVerticalPanCurve;
    struct AnimationCurve *WideScreenZoomCurve;
    struct CameraPuppetController *m_puppet;
};

struct WideScreenAdjustmentAnimator {
    struct WideScreenAdjustmentAnimator__Class *klass;
    MonitorData *monitor;
    struct WideScreenAdjustmentAnimator__Fields fields;
};

struct WideScreenAdjustmentAnimator__VTable {
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

struct WideScreenAdjustmentAnimator__StaticFields {
};

struct WideScreenAdjustmentAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WideScreenAdjustmentAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WideScreenAdjustmentAnimator__VTable vtable;
};

struct BrainScript_c {
    struct BrainScript_c__Class *klass;
    MonitorData *monitor;
};

struct Predicate_1_LegacyTimelineSequence_SequenceEntry___Fields {
    struct MulticastDelegate__Fields _;
};

struct Predicate_1_LegacyTimelineSequence_SequenceEntry_ {
    struct Predicate_1_LegacyTimelineSequence_SequenceEntry___Class *klass;
    MonitorData *monitor;
    struct Predicate_1_LegacyTimelineSequence_SequenceEntry___Fields fields;
};

struct Predicate_1_LegacyTimelineSequence_SequenceEntry___VTable {
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

struct Predicate_1_LegacyTimelineSequence_SequenceEntry___StaticFields {
};

struct Predicate_1_LegacyTimelineSequence_SequenceEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Predicate_1_LegacyTimelineSequence_SequenceEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Predicate_1_LegacyTimelineSequence_SequenceEntry___VTable vtable;
};

struct BrainScript_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BrainScript_c__StaticFields {
    struct BrainScript_c *__9;
    struct Predicate_1_LegacyTimelineSequence_SequenceEntry_ *__9__23_0;
    struct Predicate_1_LegacyTimelineSequence_SequenceEntry_ *__9__24_0;
};

struct BrainScript_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BrainScript_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BrainScript_c__VTable vtable;
};

struct ProjectileSpawnerPinkPlantBrain__Fields {
    struct BrainScript__Fields _;
    float CooldownTime;
    bool Repeat;
    struct BaseAnimator *ShootSequence;
    struct ProjectileSpawner *ProjectileSpawner;
    float m_time;
    bool m_finishCicle;
    bool m_projectileWasSpawned;
};

struct ProjectileSpawnerPinkPlantBrain {
    struct ProjectileSpawnerPinkPlantBrain__Class *klass;
    MonitorData *monitor;
    struct ProjectileSpawnerPinkPlantBrain__Fields fields;
};

struct ProjectileSpawnerPinkPlantBrain__VTable {
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
    VirtualInvokeData UpdateEntries;
    VirtualInvokeData ExecuteEntry;
    VirtualInvokeData ExecuteEntry_1;
    VirtualInvokeData UpdateEntries_1;
};

struct ProjectileSpawnerPinkPlantBrain__StaticFields {
};

struct ProjectileSpawnerPinkPlantBrain__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProjectileSpawnerPinkPlantBrain__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProjectileSpawnerPinkPlantBrain__VTable vtable;
};

struct LegacyTimelineSequence_c {
    struct LegacyTimelineSequence_c__Class *klass;
    MonitorData *monitor;
};

struct Comparison_1_LegacyTimelineSequence_SequenceEntry___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_LegacyTimelineSequence_SequenceEntry_ {
    struct Comparison_1_LegacyTimelineSequence_SequenceEntry___Class *klass;
    MonitorData *monitor;
    struct Comparison_1_LegacyTimelineSequence_SequenceEntry___Fields fields;
};

struct Comparison_1_LegacyTimelineSequence_SequenceEntry___VTable {
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

struct Comparison_1_LegacyTimelineSequence_SequenceEntry___StaticFields {
};

struct Comparison_1_LegacyTimelineSequence_SequenceEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparison_1_LegacyTimelineSequence_SequenceEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Comparison_1_LegacyTimelineSequence_SequenceEntry___VTable vtable;
};

struct LegacyTimelineSequence_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LegacyTimelineSequence_c__StaticFields {
    struct LegacyTimelineSequence_c *__9;
    struct Predicate_1_LegacyTimelineSequence_SequenceEntry_ *__9__20_0;
    struct Comparison_1_LegacyTimelineSequence_SequenceEntry_ *__9__20_1;
    struct Predicate_1_LegacyTimelineSequence_SequenceEntry_ *__9__21_0;
    struct Comparison_1_LegacyTimelineSequence_SequenceEntry_ *__9__21_1;
    struct Predicate_1_LegacyTimelineSequence_SequenceEntry_ *__9__25_0;
};

struct LegacyTimelineSequence_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyTimelineSequence_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyTimelineSequence_c__VTable vtable;
};

struct Counter__Fields {
    struct MonoBehaviour__Fields _;
    float Value;
};

struct Counter {
    struct Counter__Class *klass;
    MonitorData *monitor;
    struct Counter__Fields fields;
};

struct Counter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Counter__StaticFields {
};

struct Counter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Counter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Counter__VTable vtable;
};

struct LookAt__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *Target;
};

struct LookAt {
    struct LookAt__Class *klass;
    MonitorData *monitor;
    struct LookAt__Fields fields;
};

struct LookAt__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LookAt__StaticFields {
};

struct LookAt__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LookAt__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LookAt__VTable vtable;
};

struct TimelineOverviewGroup__Fields {
    struct MonoBehaviour__Fields _;
    bool _InvalidateParentTimelineCache_k__BackingField;
};

struct TimelineOverviewGroup {
    struct TimelineOverviewGroup__Class *klass;
    MonitorData *monitor;
    struct TimelineOverviewGroup__Fields fields;
};

struct TimelineOverviewGroup__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
    VirtualInvokeData DoStrip;
};

struct TimelineOverviewGroup__StaticFields {
};

struct TimelineOverviewGroup__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineOverviewGroup__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineOverviewGroup__VTable vtable;
};

struct EmbeddedTimelinePreview__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyTimelineSequence *TimelineSequence;
};

struct EmbeddedTimelinePreview {
    struct EmbeddedTimelinePreview__Class *klass;
    MonitorData *monitor;
    struct EmbeddedTimelinePreview__Fields fields;
};

struct EmbeddedTimelinePreview__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EmbeddedTimelinePreview__StaticFields {
};

struct EmbeddedTimelinePreview__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EmbeddedTimelinePreview__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EmbeddedTimelinePreview__VTable vtable;
};

struct IntStateTransition__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedIntUberState *IntUberState;
    int32_t BeforeStateIndex;
    int32_t DuringStateIndex;
    int32_t AfterStateIndex;
    struct Condition_1 *Condition;
    struct MoonTimeline *Timeline;
    bool CheckpointAtStart;
    bool PerformSaveAtStart;
    struct CheckpointFunctionality CheckpointSettingsAtStart;
    bool CheckpointAtEnd;
    bool PerformSaveAtEnd;
    struct CheckpointFunctionality CheckpointSettingsAtEnd;
};

}
