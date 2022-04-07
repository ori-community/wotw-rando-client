namespace app {
struct InteractionPunchModifier__StaticFields {
  struct String * s_name;
  struct UberInteractionManager_PropertyIDCache * s_cache;
};
struct InteractionPunchModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionPunchModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionPunchModifier__VTable vtable;
};

struct __declspec(align(8)) InteractionPunchModifier_GetKeywordsForShader_d_12__Fields {
  int32_t __1__state;
  struct String * __2__current;
  int32_t __l__initialThreadId;
  struct InteractionPunchModifier * __4__this;
  struct IEnumerator_1_System_String_ * __7__wrap1;
};
struct InteractionPunchModifier_GetKeywordsForShader_d_12 {
  struct InteractionPunchModifier_GetKeywordsForShader_d_12__Class *klass;
  struct MonitorData *monitor;
  struct InteractionPunchModifier_GetKeywordsForShader_d_12__Fields fields;
};
struct InteractionPunchModifier_GetKeywordsForShader_d_12__VTable {
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
struct InteractionPunchModifier_GetKeywordsForShader_d_12__StaticFields {
};
struct InteractionPunchModifier_GetKeywordsForShader_d_12__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionPunchModifier_GetKeywordsForShader_d_12__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionPunchModifier_GetKeywordsForShader_d_12__VTable vtable;
};

enum InteractionRotationModifier_AudioType__Enum : int32_t {
  InteractionRotationModifier_AudioType__Enum_Bush = 0,
  InteractionRotationModifier_AudioType__Enum_DesertBush = 1,
  InteractionRotationModifier_AudioType__Enum_Paper = 2,
};
struct InteractionRotationModifier_AudioType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InteractionRotationModifier_AudioType__Enum value;
};
struct InteractionRotationModifier__Fields {
  struct UberInteractionModifier__Fields _;
  struct UberShaderTexture * DistortionMask;
  enum InteractionRotationModifier_AudioType__Enum Sound;
  float Strength;
  struct UberShaderVector * Settings;
  struct UberShaderVector * Pivot;
  float m_lastSoundPlay;
};
struct InteractionRotationModifier {
  struct InteractionRotationModifier__Class *klass;
  struct MonitorData *monitor;
  struct InteractionRotationModifier__Fields fields;
};
struct InteractionRotationModifier__VTable {
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
  VirtualInvokeData SetInteraction;
  VirtualInvokeData RemoveInteraction;
  VirtualInvokeData DoesOverlap;
  VirtualInvokeData GetPosition;
  VirtualInvokeData GetExplodePoint;
  VirtualInvokeData MaxRadius;
  VirtualInvokeData OnRegistered;
  VirtualInvokeData IsWater;
  VirtualInvokeData get_Index;
  VirtualInvokeData set_Index;
  VirtualInvokeData get_IsRegistered;
  VirtualInvokeData set_IsRegistered;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_IsStatic;
  VirtualInvokeData get_InteractionName;
  VirtualInvokeData GetStrength;
  VirtualInvokeData get_PropertyCache;
  VirtualInvokeData get_OverrideDifficulty;
  VirtualInvokeData GetFlip;
  VirtualInvokeData OnPlay;
};
struct InteractionRotationModifier__StaticFields {
  struct Varying2DSoundProvider * s_bushSoundProvider;
  struct Varying2DSoundProvider * s_desertBushSoundProvider;
  struct Varying2DSoundProvider * s_paperSoundProvider;
  struct String * s_name;
  struct UberInteractionManager_PropertyIDCache * s_cache;
};
struct InteractionRotationModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionRotationModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionRotationModifier__VTable vtable;
};

struct __declspec(align(8)) InteractionRotationModifier_GetKeywordsForShader_d_18__Fields {
  int32_t __1__state;
  struct String * __2__current;
  int32_t __l__initialThreadId;
  struct InteractionRotationModifier * __4__this;
  struct IEnumerator_1_System_String_ * __7__wrap1;
};
struct InteractionRotationModifier_GetKeywordsForShader_d_18 {
  struct InteractionRotationModifier_GetKeywordsForShader_d_18__Class *klass;
  struct MonitorData *monitor;
  struct InteractionRotationModifier_GetKeywordsForShader_d_18__Fields fields;
};
struct InteractionRotationModifier_GetKeywordsForShader_d_18__VTable {
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
struct InteractionRotationModifier_GetKeywordsForShader_d_18__StaticFields {
};
struct InteractionRotationModifier_GetKeywordsForShader_d_18__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionRotationModifier_GetKeywordsForShader_d_18__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionRotationModifier_GetKeywordsForShader_d_18__VTable vtable;
};

struct AlphaMaskModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderTexture * FadeMaskTexture;
  struct UberShaderFloat * FadeRange;
  struct UberShaderTexture * BackgroundTexture;
  struct UberShaderColor * BackGroundColor;
  struct UberShaderFloat * FadeAmount;
};
struct AlphaMaskModifier {
  struct AlphaMaskModifier__Class *klass;
  struct MonitorData *monitor;
  struct AlphaMaskModifier__Fields fields;
};
struct AlphaMaskModifier__VTable {
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
struct AlphaMaskModifier__StaticFields {
};
struct AlphaMaskModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AlphaMaskModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AlphaMaskModifier__VTable vtable;
};

struct DepthPrecullModifier__Fields {
  struct UberShaderModifier__Fields _;
  bool AlphaTest;
  struct UberShaderVector * ResultMask;
};
struct DepthPrecullModifier {
  struct DepthPrecullModifier__Class *klass;
  struct MonitorData *monitor;
  struct DepthPrecullModifier__Fields fields;
};
struct DepthPrecullModifier__VTable {
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
struct DepthPrecullModifier__StaticFields {
};
struct DepthPrecullModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DepthPrecullModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DepthPrecullModifier__VTable vtable;
};

enum TextureMergeMode__Enum : int32_t {
  TextureMergeMode__Enum_Multiply = 0,
  TextureMergeMode__Enum_Max = 1,
  TextureMergeMode__Enum_Min = 2,
};
struct TextureMergeMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextureMergeMode__Enum value;
};
enum AlphaCombineMode__Enum : int32_t {
  AlphaCombineMode__Enum_Multiply = 0,
  AlphaCombineMode__Enum_Override = 1,
};
struct AlphaCombineMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AlphaCombineMode__Enum value;
};
struct MaskDissolveModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderTexture * MaskTexture;
  struct UberShaderTexture * DistortTexture;
  struct UberShaderTexture * SecondaryMaskTexture;
  struct UberShaderVector * DistortStrength;
  struct UberShaderVector * SecondDistortStrength;
  struct UberShaderColor * DissolveColor;
  enum TextureMergeMode__Enum MaskMergeMode;
  enum AlphaCombineMode__Enum AlphaMergeMode;
  bool UseVertexColorAlpha;
  bool UseVertexColorRGB;
  bool ModulateDistortionStrenghtByTrailAuxA;
};
struct MaskDissolveModifier {
  struct MaskDissolveModifier__Class *klass;
  struct MonitorData *monitor;
  struct MaskDissolveModifier__Fields fields;
};
struct MaskDissolveModifier__VTable {
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
struct MaskDissolveModifier__StaticFields {
};
struct MaskDissolveModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaskDissolveModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaskDissolveModifier__VTable vtable;
};

struct __declspec(align(8)) MaskDissolveModifier_GetKeywordsForShader_d_11__Fields {
  int32_t __1__state;
  struct String * __2__current;
  int32_t __l__initialThreadId;
  struct MaskDissolveModifier * __4__this;
};
struct MaskDissolveModifier_GetKeywordsForShader_d_11 {
  struct MaskDissolveModifier_GetKeywordsForShader_d_11__Class *klass;
  struct MonitorData *monitor;
  struct MaskDissolveModifier_GetKeywordsForShader_d_11__Fields fields;
};
struct MaskDissolveModifier_GetKeywordsForShader_d_11__VTable {
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
struct MaskDissolveModifier_GetKeywordsForShader_d_11__StaticFields {
};
struct MaskDissolveModifier_GetKeywordsForShader_d_11__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaskDissolveModifier_GetKeywordsForShader_d_11__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaskDissolveModifier_GetKeywordsForShader_d_11__VTable vtable;
};

struct MaskExtraModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderTexture * MaskTexture;
  struct UberShaderFloat * MaskStrength;
};
struct MaskExtraModifier {
  struct MaskExtraModifier__Class *klass;
  struct MonitorData *monitor;
  struct MaskExtraModifier__Fields fields;
};
struct MaskExtraModifier__VTable {
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
struct MaskExtraModifier__StaticFields {
};
struct MaskExtraModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaskExtraModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaskExtraModifier__VTable vtable;
};

struct MaskModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderTexture * MaskTexture;
  struct UberShaderFloat * MaskStrength;
};
struct MaskModifier {
  struct MaskModifier__Class *klass;
  struct MonitorData *monitor;
  struct MaskModifier__Fields fields;
};
struct MaskModifier__VTable {
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
struct MaskModifier__StaticFields {
};
struct MaskModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaskModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaskModifier__VTable vtable;
};

struct SpiritLightMaskModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderTexture * SpiritLighMaskFalloffGradient;
  struct UberShaderVector * SpiritLightMaskSettings;
  struct UberShaderVector * SpiritLightMaskSettingsB;
  bool OptimizeForRaces;
};
struct SpiritLightMaskModifier {
  struct SpiritLightMaskModifier__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLightMaskModifier__Fields fields;
};
struct SpiritLightMaskModifier__VTable {
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
struct SpiritLightMaskModifier__StaticFields {
};
struct SpiritLightMaskModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLightMaskModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLightMaskModifier__VTable vtable;
};

struct WaterFallMaskModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderFloat * MaskStrength;
  struct UberShaderTexture * MaskTexture;
  struct UberShaderTexture * DistortTexture;
  struct UberShaderVector * DistortStrength;
};
struct WaterFallMaskModifier {
  struct WaterFallMaskModifier__Class *klass;
  struct MonitorData *monitor;
  struct WaterFallMaskModifier__Fields fields;
};
struct WaterFallMaskModifier__VTable {
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
struct WaterFallMaskModifier__StaticFields {
};
struct WaterFallMaskModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterFallMaskModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterFallMaskModifier__VTable vtable;
};

struct AdditiveLayerDistortedModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderTexture * AdditiveLayerTexture;
  struct UberShaderTexture * AdditiveLayerMaskTexture;
  struct UberShaderTexture * DistortTexture;
  struct UberShaderColor * AdditiveLayerColor;
  struct UberShaderVector * DistortStrength;
};
struct AdditiveLayerDistortedModifier {
  struct AdditiveLayerDistortedModifier__Class *klass;
  struct MonitorData *monitor;
  struct AdditiveLayerDistortedModifier__Fields fields;
};
struct AdditiveLayerDistortedModifier__VTable {
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
struct AdditiveLayerDistortedModifier__StaticFields {
};
struct AdditiveLayerDistortedModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AdditiveLayerDistortedModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AdditiveLayerDistortedModifier__VTable vtable;
};

struct AdditiveLayerExtraModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderTexture * AdditiveLayerTexture;
  struct UberShaderTexture * AdditiveLayerMaskTexture;
  struct UberShaderColor * AdditiveLayerColor;
};
struct AdditiveLayerExtraModifier {
  struct AdditiveLayerExtraModifier__Class *klass;
  struct MonitorData *monitor;
  struct AdditiveLayerExtraModifier__Fields fields;
};
struct AdditiveLayerExtraModifier__VTable {
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
struct AdditiveLayerExtraModifier__StaticFields {
};
struct AdditiveLayerExtraModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AdditiveLayerExtraModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AdditiveLayerExtraModifier__VTable vtable;
};

struct AdditiveLayerModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderTexture * AdditiveLayerTexture;
  struct UberShaderTexture * AdditiveLayerMaskTexture;
  struct UberShaderColor * AdditiveLayerColor;
};
struct AdditiveLayerModifier {
  struct AdditiveLayerModifier__Class *klass;
  struct MonitorData *monitor;
  struct AdditiveLayerModifier__Fields fields;
};
struct AdditiveLayerModifier__VTable {
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
struct AdditiveLayerModifier__StaticFields {
};
struct AdditiveLayerModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AdditiveLayerModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AdditiveLayerModifier__VTable vtable;
};

struct BubbleModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderVector * BubbleProps;
  struct UberShaderTexture * RefractionMaskTexture;
};
struct BubbleModifier {
  struct BubbleModifier__Class *klass;
  struct MonitorData *monitor;
  struct BubbleModifier__Fields fields;
};
struct BubbleModifier__VTable {
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
struct BubbleModifier__StaticFields {
};
struct BubbleModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BubbleModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BubbleModifier__VTable vtable;
};

struct CubemapReflection__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderColor * CubeReflColor;
  struct UberShaderTextureCube * CubeReflTexture;
  struct UberShaderTexture * CubeReflMask;
  struct UberShaderTexture * CubeReflDistort;
  struct UberShaderVector * CubeReflParams;
};
struct CubemapReflection {
  struct CubemapReflection__Class *klass;
  struct MonitorData *monitor;
  struct CubemapReflection__Fields fields;
};
struct UberShaderTextureCube__Fields {
  struct UberShaderTextureBase__Fields _;
  struct Cubemap * m_texture;
};
struct UberShaderTextureCube {
  struct UberShaderTextureCube__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderTextureCube__Fields fields;
};
struct UberShaderTextureCube__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData BindProperties;
  VirtualInvokeData Set;
};
struct UberShaderTextureCube__StaticFields {
};
struct UberShaderTextureCube__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderTextureCube__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderTextureCube__VTable vtable;
};
struct CubemapReflection__VTable {
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
struct CubemapReflection__StaticFields {
};
struct CubemapReflection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CubemapReflection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CubemapReflection__VTable vtable;
};

struct DarkeningModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderVector * Props;
};
struct DarkeningModifier {
  struct DarkeningModifier__Class *klass;
  struct MonitorData *monitor;
  struct DarkeningModifier__Fields fields;
};
struct DarkeningModifier__VTable {
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
struct DarkeningModifier__StaticFields {
};
struct DarkeningModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DarkeningModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DarkeningModifier__VTable vtable;
};

struct DecalLayerDistortModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderTexture * DecalLayerTexture;
  struct UberShaderTexture * DecalLayerMaskTexture;
  struct UberShaderColor * DecalLayerColor;
  struct UberShaderTexture * DistortTexture;
  struct UberShaderVector * DistortStrength;
};
struct DecalLayerDistortModifier {
  struct DecalLayerDistortModifier__Class *klass;
  struct MonitorData *monitor;
  struct DecalLayerDistortModifier__Fields fields;
};
struct DecalLayerDistortModifier__VTable {
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
};}