namespace app {
struct TurbulenceBrightnessModifier__StaticFields {
};

struct TurbulenceBrightnessModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceBrightnessModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceBrightnessModifier__VTable vtable;
};

struct TurbulenceDistortionModifier__Fields {
    struct TurbulenceModifier__Fields _;
    struct UberShaderVector *LocalSettings;
    struct UberShaderVector *ScaleVarSettings;
    struct UberShaderVector *BiasSettings;
    struct UberShaderTexture *TurbulenceMask;
};

struct TurbulenceDistortionModifier {
    struct TurbulenceDistortionModifier__Class *klass;
    MonitorData *monitor;
    struct TurbulenceDistortionModifier__Fields fields;
};

struct TurbulenceDistortionModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SetProperties;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
};

struct TurbulenceDistortionModifier__StaticFields {
};

struct TurbulenceDistortionModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceDistortionModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceDistortionModifier__VTable vtable;
};

struct TurbulenceRotationModifier__Fields {
    struct TurbulenceModifier__Fields _;
    struct UberShaderTexture *TurbulenceMask;
    struct UberShaderVector *LocalSettings;
    struct UberShaderVector *RotationPivot;
    struct UberShaderVector *RotationPivotMask;
    struct UberShaderTexture *TurbulenceMask2;
    struct UberShaderVector *LocalSettingsPivot2;
    struct UberShaderVector *RotationPivot2;
    struct UberShaderVector *RotationPivotMask2;
    struct UberShaderFloat *RightDir;
    bool IgnoreTransformRotation;
};

struct TurbulenceRotationModifier {
    struct TurbulenceRotationModifier__Class *klass;
    MonitorData *monitor;
    struct TurbulenceRotationModifier__Fields fields;
};

struct UberShaderFloat__Fields {
    struct UberShaderProperty__Fields _;
    float m_floatValue;
    float Scale;
    struct String *m_DefaultShaderValue;
};

struct UberShaderFloat {
    struct UberShaderFloat__Class *klass;
    MonitorData *monitor;
    struct UberShaderFloat__Fields fields;
};

struct UberShaderFloat__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData BindProperties;
    VirtualInvokeData Set;
};

struct UberShaderFloat__StaticFields {
};

struct UberShaderFloat__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderFloat__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderFloat__VTable vtable;
};

struct TurbulenceRotationModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SetProperties;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
};

struct TurbulenceRotationModifier__StaticFields {
};

struct TurbulenceRotationModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceRotationModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceRotationModifier__VTable vtable;
};

struct __declspec(align(8)) TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Fields {
    int32_t __1__state;
    struct String *__2__current;
    int32_t __l__initialThreadId;
};

struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11 {
    struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Class *klass;
    MonitorData *monitor;
    struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Fields fields;
};

struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_String__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_String__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__StaticFields {
};

struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__VTable vtable;
};

struct __declspec(align(8)) TurbulenceRotationModifier_GetKeywordsForShader_d_13__Fields {
    int32_t __1__state;
    struct String *__2__current;
    int32_t __l__initialThreadId;
    struct TurbulenceRotationModifier *__4__this;
};

struct TurbulenceRotationModifier_GetKeywordsForShader_d_13 {
    struct TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class *klass;
    MonitorData *monitor;
    struct TurbulenceRotationModifier_GetKeywordsForShader_d_13__Fields fields;
};

struct TurbulenceRotationModifier_GetKeywordsForShader_d_13__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_String__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_String__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TurbulenceRotationModifier_GetKeywordsForShader_d_13__StaticFields {
};

struct TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceRotationModifier_GetKeywordsForShader_d_13__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceRotationModifier_GetKeywordsForShader_d_13__VTable vtable;
};

struct TurbulenceScaleModifier__Fields {
    struct TurbulenceModifier__Fields _;
    struct UberShaderVector *LocalSettings;
    struct UberShaderTexture *TurbulenceMask;
    struct UberShaderVector *ScalePivot;
    struct UberShaderVector *SquishScale;
};

struct TurbulenceScaleModifier {
    struct TurbulenceScaleModifier__Class *klass;
    MonitorData *monitor;
    struct TurbulenceScaleModifier__Fields fields;
};

struct TurbulenceScaleModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SetProperties;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
};

struct TurbulenceScaleModifier__StaticFields {
};

struct TurbulenceScaleModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceScaleModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceScaleModifier__VTable vtable;
};

struct __declspec(align(8)) TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Fields {
    int32_t __1__state;
    struct String *__2__current;
    int32_t __l__initialThreadId;
};

struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5 {
    struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Class *klass;
    MonitorData *monitor;
    struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Fields fields;
};

struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_String__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_String__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__StaticFields {
};

struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__VTable vtable;
};

struct __declspec(align(8)) TurbulenceScaleModifier_GetKeywordsForShader_d_6__Fields {
    int32_t __1__state;
    struct String *__2__current;
    int32_t __l__initialThreadId;
    struct TurbulenceScaleModifier *__4__this;
};

struct TurbulenceScaleModifier_GetKeywordsForShader_d_6 {
    struct TurbulenceScaleModifier_GetKeywordsForShader_d_6__Class *klass;
    MonitorData *monitor;
    struct TurbulenceScaleModifier_GetKeywordsForShader_d_6__Fields fields;
};

struct TurbulenceScaleModifier_GetKeywordsForShader_d_6__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_String__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_String__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TurbulenceScaleModifier_GetKeywordsForShader_d_6__StaticFields {
};

struct TurbulenceScaleModifier_GetKeywordsForShader_d_6__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceScaleModifier_GetKeywordsForShader_d_6__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceScaleModifier_GetKeywordsForShader_d_6__VTable vtable;
};

struct TurbulenceTranslationModifier__Fields {
    struct TurbulenceModifier__Fields _;
    struct UberShaderVector *LocalSettings;
    struct UberShaderTexture *TurbulenceMask;
    struct UberShaderVector *ScaleVarSettings;
    struct UberShaderVector *BiasSettings;
    float PresetScaleMagnitude;
};

struct TurbulenceTranslationModifier {
    struct TurbulenceTranslationModifier__Class *klass;
    MonitorData *monitor;
    struct TurbulenceTranslationModifier__Fields fields;
};

struct TurbulenceTranslationModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SetProperties;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
};

struct TurbulenceTranslationModifier__StaticFields {
};

struct TurbulenceTranslationModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceTranslationModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceTranslationModifier__VTable vtable;
};

struct __declspec(align(8)) TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Fields {
    int32_t __1__state;
    struct String *__2__current;
    int32_t __l__initialThreadId;
};

struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8 {
    struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Class *klass;
    MonitorData *monitor;
    struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Fields fields;
};

struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_String__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_String__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__StaticFields {
};

struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__VTable vtable;
};

struct __declspec(align(8)) TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Fields {
    int32_t __1__state;
    struct String *__2__current;
    int32_t __l__initialThreadId;
    struct TurbulenceTranslationModifier *__4__this;
};

struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9 {
    struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Class *klass;
    MonitorData *monitor;
    struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Fields fields;
};

struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_String__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_String__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9__StaticFields {
};

struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9__VTable vtable;
};

struct TurbulenceTransparencyModifier__Fields {
    struct TurbulenceModifier__Fields _;
    struct UberShaderVector *LocalSettings;
    struct UberShaderVector *ScaleVarSettings;
};

struct TurbulenceTransparencyModifier {
    struct TurbulenceTransparencyModifier__Class *klass;
    MonitorData *monitor;
    struct TurbulenceTransparencyModifier__Fields fields;
};

struct TurbulenceTransparencyModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SetProperties;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
};

struct TurbulenceTransparencyModifier__StaticFields {
};

struct TurbulenceTransparencyModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TurbulenceTransparencyModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TurbulenceTransparencyModifier__VTable vtable;
};

struct ClusterModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture *Mask_1;
    struct Transform *Handle;
    struct Vector3 m_posOffset;
    float m_rotOffset;
    float RotationWeight;
    bool m_didRebind;
    int32_t m_varsId;
    int32_t m_pivotId;
};

struct ClusterModifier {
    struct ClusterModifier__Class *klass;
    MonitorData *monitor;
    struct ClusterModifier__Fields fields;
};

struct ClusterModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SetProperties;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
    VirtualInvokeData get_BoneName;
    VirtualInvokeData get_ControlMask;
};

struct ClusterModifier__StaticFields {
};

struct ClusterModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClusterModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClusterModifier__VTable vtable;
};

struct ClusterModifierBone0__Fields {
    struct ClusterModifier__Fields _;
};

struct ClusterModifierBone0 {
    struct ClusterModifierBone0__Class *klass;
    MonitorData *monitor;
    struct ClusterModifierBone0__Fields fields;
};

struct ClusterModifierBone0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SetProperties;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
    VirtualInvokeData get_BoneName;
    VirtualInvokeData get_ControlMask;
};

struct ClusterModifierBone0__StaticFields {
};

struct ClusterModifierBone0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClusterModifierBone0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClusterModifierBone0__VTable vtable;
};

struct ClusterModifierBone1__Fields {
    struct ClusterModifier__Fields _;
};

struct ClusterModifierBone1 {
    struct ClusterModifierBone1__Class *klass;
    MonitorData *monitor;
    struct ClusterModifierBone1__Fields fields;
};

struct ClusterModifierBone1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SetProperties;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
    VirtualInvokeData get_BoneName;
    VirtualInvokeData get_ControlMask;
};

struct ClusterModifierBone1__StaticFields {
};

struct ClusterModifierBone1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClusterModifierBone1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClusterModifierBone1__VTable vtable;
};

struct ClusterModifierBone2__Fields {
    struct ClusterModifier__Fields _;
};

struct ClusterModifierBone2 {
    struct ClusterModifierBone2__Class *klass;
    MonitorData *monitor;
    struct ClusterModifierBone2__Fields fields;
};

struct ClusterModifierBone2__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SetProperties;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
    VirtualInvokeData get_BoneName;
    VirtualInvokeData get_ControlMask;
};

struct ClusterModifierBone2__StaticFields {
};

struct ClusterModifierBone2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClusterModifierBone2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClusterModifierBone2__VTable vtable;
};

struct EnvironmentShadingModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct EnvironmentLight *LastLight;
    struct EnvironmentLight *FadeLight;
    float m_fadeTime;
    int32_t m_frame;
};

struct EnvironmentShadingModifier {
    struct EnvironmentShadingModifier__Class *klass;
    MonitorData *monitor;
    struct EnvironmentShadingModifier__Fields fields;
};

struct EnvironmentLightingModifier__Fields {
    struct EnvironmentShadingModifier__Fields _;
    struct UberShaderFloat *MainStrength;
    struct UberShaderFloat *BounceStrength;
    float m_randomOffset;
};

struct EnvironmentLightingModifier {
    struct EnvironmentLightingModifier__Class *klass;
    MonitorData *monitor;
    struct EnvironmentLightingModifier__Fields fields;
};

struct EnvironmentLight__Fields {
    struct MonoBehaviour__Fields _;
    struct EnvironmentLightTexture *MainLight;
    struct EnvironmentLightTexture *BounceLight;
    struct Rect Area;
    struct Color ChannelColorOri;
    struct Color ChannelColorNaru;
    struct Color ChannelColorEffects;
    struct Color ChannelColorEnemies;
    int32_t ChannelMask;
};

struct EnvironmentLight {
    struct EnvironmentLight__Class *klass;
    MonitorData *monitor;
    struct EnvironmentLight__Fields fields;
};

struct __declspec(align(8)) EnvironmentLightTexture__Fields {
    struct Vector2 Offset;
    struct Vector2 Scale;
    float Rotation;
    struct Color Color;
    struct Texture2D *Texture;
    float TurbulenceStrength;
    float TurbulenceSpeed;
    float TurbulenceBias;
    struct Vector2 TurbulenceScale;
};

struct EnvironmentLightTexture {
    struct EnvironmentLightTexture__Class *klass;
    MonitorData *monitor;
    struct EnvironmentLightTexture__Fields fields;
};

struct Int32__Array_1 {
    struct Int32__Array_1__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    int32_t vector[32];
};

struct EnvironmentLightTexture__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EnvironmentLightTexture__StaticFields {
};

struct EnvironmentLightTexture__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnvironmentLightTexture__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnvironmentLightTexture__VTable vtable;
};

struct Int32__Array_1__VTable {
};

struct Int32__Array_1__StaticFields {
};

struct Int32__Array_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Int32__Array_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Int32__Array_1__VTable vtable;
};

struct EnvironmentLight__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EnvironmentLight__StaticFields {
    struct Int32__Array_1 *LightNames;
};

struct EnvironmentLight__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnvironmentLight__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnvironmentLight__VTable vtable;
};

struct EnvironmentShadingModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData __unknown;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
};

struct EnvironmentShadingModifier__StaticFields {
};

struct EnvironmentShadingModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnvironmentShadingModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnvironmentShadingModifier__VTable vtable;
};

struct EnvironmentLightingModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SetProperties;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
    VirtualInvokeData UpdateBaseBind;
    VirtualInvokeData BindNow;
    VirtualInvokeData ClearBind;
};

}
