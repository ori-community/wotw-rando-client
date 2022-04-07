namespace app {
struct UberCageMesh__StaticFields {
};
struct UberCageMesh__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberCageMesh__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberCageMesh__VTable vtable;
};

struct NotNull {
  struct NotNull__Class *klass;
  struct MonitorData *monitor;
};
struct NotNull__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct NotNull__StaticFields {
};
struct NotNull__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NotNull__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NotNull__VTable vtable;
};

struct __declspec(align(8)) DistortModifier_GetKeywordsForShader_d_4__Fields {
  int32_t __1__state;
  struct String * __2__current;
  int32_t __l__initialThreadId;
  struct DistortModifier * __4__this;
};
struct DistortModifier_GetKeywordsForShader_d_4 {
  struct DistortModifier_GetKeywordsForShader_d_4__Class *klass;
  struct MonitorData *monitor;
  struct DistortModifier_GetKeywordsForShader_d_4__Fields fields;
};
struct DistortModifier_GetKeywordsForShader_d_4__VTable {
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
struct DistortModifier_GetKeywordsForShader_d_4__StaticFields {
};
struct DistortModifier_GetKeywordsForShader_d_4__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DistortModifier_GetKeywordsForShader_d_4__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DistortModifier_GetKeywordsForShader_d_4__VTable vtable;
};

struct RotationAnimationModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderCurve * RotationCurve;
  struct UberShaderTexture * Mask;
  struct UberShaderVector * Offset;
};
struct RotationAnimationModifier {
  struct RotationAnimationModifier__Class *klass;
  struct MonitorData *monitor;
  struct RotationAnimationModifier__Fields fields;
};
struct UberShaderCurve__Fields {
  struct UberShaderProperty__Fields _;
  struct AnimationCurve * m_curve;
  float TimeScale;
  float CurveScale;
  float TimeOffset;
  enum TextureWrapMode__Enum WrapMode;
  float m_curveScale;
  float m_curveDuration;
  struct Texture2D * m_texture;
  int32_t m_settingsId;
};
struct UberShaderCurve {
  struct UberShaderCurve__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderCurve__Fields fields;
};
struct UberShaderCurve__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData BindProperties;
  VirtualInvokeData Set;
};
struct UberShaderCurve__StaticFields {
};
struct UberShaderCurve__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderCurve__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderCurve__VTable vtable;
};
struct RotationAnimationModifier__VTable {
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
struct RotationAnimationModifier__StaticFields {
};
struct RotationAnimationModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotationAnimationModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotationAnimationModifier__VTable vtable;
};

struct SandWormModifier__Fields {
  struct UberShaderModifier__Fields _;
};
struct SandWormModifier {
  struct SandWormModifier__Class *klass;
  struct MonitorData *monitor;
  struct SandWormModifier__Fields fields;
};
struct SandWormModifier__VTable {
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
struct SandWormModifier__StaticFields {
};
struct SandWormModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormModifier__VTable vtable;
};

struct ScaleAnimationModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderCurve * ScaleCurve;
  struct UberShaderTexture * Mask;
  struct UberShaderVector * ScalePivot;
};
struct ScaleAnimationModifier {
  struct ScaleAnimationModifier__Class *klass;
  struct MonitorData *monitor;
  struct ScaleAnimationModifier__Fields fields;
};
struct ScaleAnimationModifier__VTable {
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
struct ScaleAnimationModifier__StaticFields {
};
struct ScaleAnimationModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScaleAnimationModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScaleAnimationModifier__VTable vtable;
};

struct TranslateModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderCurve * TranslateXCurve;
  struct UberShaderCurve * TranslateYCurve;
  struct UberShaderVector * Offset;
};
struct TranslateModifier {
  struct TranslateModifier__Class *klass;
  struct MonitorData *monitor;
  struct TranslateModifier__Fields fields;
};
struct TranslateModifier__VTable {
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
struct TranslateModifier__StaticFields {
};
struct TranslateModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TranslateModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TranslateModifier__VTable vtable;
};

struct TransparancyAnimatorModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderCurve * TransparancyCurve;
};
struct TransparancyAnimatorModifier {
  struct TransparancyAnimatorModifier__Class *klass;
  struct MonitorData *monitor;
  struct TransparancyAnimatorModifier__Fields fields;
};
struct TransparancyAnimatorModifier__VTable {
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
struct TransparancyAnimatorModifier__StaticFields {
};
struct TransparancyAnimatorModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransparancyAnimatorModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransparancyAnimatorModifier__VTable vtable;
};

struct TurbulenceModifier__Fields {
  struct UberShaderModifier__Fields _;
};
struct TurbulenceModifier {
  struct TurbulenceModifier__Class *klass;
  struct MonitorData *monitor;
  struct TurbulenceModifier__Fields fields;
};
struct TurbulenceBrightnessModifier__Fields {
  struct TurbulenceModifier__Fields _;
  struct UberShaderVector * LocalSettings;
  struct UberShaderVector * ScaleVarSettings;
};
struct TurbulenceBrightnessModifier {
  struct TurbulenceBrightnessModifier__Class *klass;
  struct MonitorData *monitor;
  struct TurbulenceBrightnessModifier__Fields fields;
};
struct TurbulenceModifier__VTable {
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
};
struct TurbulenceModifier__StaticFields {
};
struct TurbulenceModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceModifier__VTable vtable;
};
struct TurbulenceBrightnessModifier__VTable {
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
struct TurbulenceBrightnessModifier__StaticFields {
};
struct TurbulenceBrightnessModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceBrightnessModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceBrightnessModifier__VTable vtable;
};

struct TurbulenceDistortionModifier__Fields {
  struct TurbulenceModifier__Fields _;
  struct UberShaderVector * LocalSettings;
  struct UberShaderVector * ScaleVarSettings;
  struct UberShaderVector * BiasSettings;
  struct UberShaderTexture * TurbulenceMask;
};
struct TurbulenceDistortionModifier {
  struct TurbulenceDistortionModifier__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceDistortionModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceDistortionModifier__VTable vtable;
};

struct TurbulenceRotationModifier__Fields {
  struct TurbulenceModifier__Fields _;
  struct UberShaderTexture * TurbulenceMask;
  struct UberShaderVector * LocalSettings;
  struct UberShaderVector * RotationPivot;
  struct UberShaderVector * RotationPivotMask;
  struct UberShaderTexture * TurbulenceMask2;
  struct UberShaderVector * LocalSettingsPivot2;
  struct UberShaderVector * RotationPivot2;
  struct UberShaderVector * RotationPivotMask2;
  struct UberShaderFloat * RightDir;
  bool IgnoreTransformRotation;
};
struct TurbulenceRotationModifier {
  struct TurbulenceRotationModifier__Class *klass;
  struct MonitorData *monitor;
  struct TurbulenceRotationModifier__Fields fields;
};
struct UberShaderFloat__Fields {
  struct UberShaderProperty__Fields _;
  float m_floatValue;
  float Scale;
  struct String * m_DefaultShaderValue;
};
struct UberShaderFloat {
  struct UberShaderFloat__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderFloat__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceRotationModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceRotationModifier__VTable vtable;
};

struct __declspec(align(8)) TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Fields {
  int32_t __1__state;
  struct String * __2__current;
  int32_t __l__initialThreadId;
};
struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11 {
  struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__VTable vtable;
};

struct __declspec(align(8)) TurbulenceRotationModifier_GetKeywordsForShader_d_13__Fields {
  int32_t __1__state;
  struct String * __2__current;
  int32_t __l__initialThreadId;
  struct TurbulenceRotationModifier * __4__this;
};
struct TurbulenceRotationModifier_GetKeywordsForShader_d_13 {
  struct TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceRotationModifier_GetKeywordsForShader_d_13__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceRotationModifier_GetKeywordsForShader_d_13__VTable vtable;
};

struct TurbulenceScaleModifier__Fields {
  struct TurbulenceModifier__Fields _;
  struct UberShaderVector * LocalSettings;
  struct UberShaderTexture * TurbulenceMask;
  struct UberShaderVector * ScalePivot;
  struct UberShaderVector * SquishScale;
};
struct TurbulenceScaleModifier {
  struct TurbulenceScaleModifier__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceScaleModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceScaleModifier__VTable vtable;
};

struct __declspec(align(8)) TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Fields {
  int32_t __1__state;
  struct String * __2__current;
  int32_t __l__initialThreadId;
};
struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5 {
  struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__VTable vtable;
};

struct __declspec(align(8)) TurbulenceScaleModifier_GetKeywordsForShader_d_6__Fields {
  int32_t __1__state;
  struct String * __2__current;
  int32_t __l__initialThreadId;
  struct TurbulenceScaleModifier * __4__this;
};
struct TurbulenceScaleModifier_GetKeywordsForShader_d_6 {
  struct TurbulenceScaleModifier_GetKeywordsForShader_d_6__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceScaleModifier_GetKeywordsForShader_d_6__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceScaleModifier_GetKeywordsForShader_d_6__VTable vtable;
};

struct TurbulenceTranslationModifier__Fields {
  struct TurbulenceModifier__Fields _;
  struct UberShaderVector * LocalSettings;
  struct UberShaderTexture * TurbulenceMask;
  struct UberShaderVector * ScaleVarSettings;
  struct UberShaderVector * BiasSettings;
  float PresetScaleMagnitude;
};
struct TurbulenceTranslationModifier {
  struct TurbulenceTranslationModifier__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceTranslationModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceTranslationModifier__VTable vtable;
};

struct __declspec(align(8)) TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Fields {
  int32_t __1__state;
  struct String * __2__current;
  int32_t __l__initialThreadId;
};
struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8 {
  struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__VTable vtable;
};

struct __declspec(align(8)) TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Fields {
  int32_t __1__state;
  struct String * __2__current;
  int32_t __l__initialThreadId;
  struct TurbulenceTranslationModifier * __4__this;
};
struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9 {
  struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceTranslationModifier_GetKeywordsForShader_d_9__VTable vtable;
};

struct TurbulenceTransparencyModifier__Fields {
  struct TurbulenceModifier__Fields _;
  struct UberShaderVector * LocalSettings;
  struct UberShaderVector * ScaleVarSettings;
};
struct TurbulenceTransparencyModifier {
  struct TurbulenceTransparencyModifier__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurbulenceTransparencyModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurbulenceTransparencyModifier__VTable vtable;
};

struct ClusterModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderTexture * Mask;
  struct Transform * Handle;
  struct Vector3 m_posOffset;
  float m_rotOffset;
  float RotationWeight;
  bool m_didRebind;
  int32_t m_varsId;
  int32_t m_pivotId;
};}