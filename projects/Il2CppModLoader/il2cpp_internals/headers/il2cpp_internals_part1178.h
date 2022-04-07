namespace app {
enum WaterPoison_CombineDamageMode__Enum : int32_t {
  WaterPoison_CombineDamageMode__Enum_Max = 0,
  WaterPoison_CombineDamageMode__Enum_Sum = 1,
  WaterPoison_CombineDamageMode__Enum_Average = 2,
};
struct WaterPoison_CombineDamageMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WaterPoison_CombineDamageMode__Enum value;
};
struct WaterPoison__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterPoison__StaticFields {
  struct List_1_Damage_ * m_allDamages;
};
struct WaterPoison__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterPoison__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterPoison__VTable vtable;
};

struct SendMouseEvents {
  struct SendMouseEvents__Class *klass;
  struct MonitorData *monitor;
};
struct SendMouseEvents__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SendMouseEvents__StaticFields {
  bool s_MouseUsed;
  struct SendMouseEvents_HitInfo__Array * m_LastHit;
  struct SendMouseEvents_HitInfo__Array * m_MouseDownHit;
  struct SendMouseEvents_HitInfo__Array * m_CurrentHit;
  struct Camera__Array * m_Cameras;
};
struct SendMouseEvents__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SendMouseEvents__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SendMouseEvents__VTable vtable;
};

struct IReferenceRebuilder {
  struct IReferenceRebuilder__Class *klass;
  struct MonitorData *monitor;
};
struct IReferenceRebuilder__VTable {
  VirtualInvokeData RebuildReferences;
};
struct IReferenceRebuilder__StaticFields {
};
struct IReferenceRebuilder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IReferenceRebuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IReferenceRebuilder__VTable vtable;
};

struct UberTypeTracker {
  struct UberTypeTracker__Class *klass;
  struct MonitorData *monitor;
};
struct UberTypeTracker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberTypeTracker__StaticFields {
  struct Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ * s_allTrackers;
};
struct UberTypeTracker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberTypeTracker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberTypeTracker__VTable vtable;
};

struct ShaderTimeUtils {
  struct ShaderTimeUtils__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderTimeUtils__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderTimeUtils__StaticFields {
  int32_t _GameTime;
  int32_t _TurbulenceTime;
};
struct ShaderTimeUtils__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderTimeUtils__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderTimeUtils__VTable vtable;
};

struct ShaderID_AtlasSpriteTexture {
  struct ShaderID_AtlasSpriteTexture__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_AtlasSpriteTexture__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_AtlasSpriteTexture__StaticFields {
  int32_t _Uvs;
};
struct ShaderID_AtlasSpriteTexture__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_AtlasSpriteTexture__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_AtlasSpriteTexture__VTable vtable;
};

struct ShaderID_ColorAnimator {
  struct ShaderID_ColorAnimator__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_ColorAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_ColorAnimator__StaticFields {
  int32_t _TintColor;
};
struct ShaderID_ColorAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_ColorAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_ColorAnimator__VTable vtable;
};

struct ShaderID_ContrastVignette {
  struct ShaderID_ContrastVignette__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_ContrastVignette__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_ContrastVignette__StaticFields {
  int32_t _Params;
  int32_t _Coeffs;
  int32_t _Center;
};
struct ShaderID_ContrastVignette__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_ContrastVignette__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_ContrastVignette__VTable vtable;
};

struct ShaderID_DistortionAnimator {
  struct ShaderID_DistortionAnimator__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_DistortionAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_DistortionAnimator__StaticFields {
  int32_t _Color;
};
struct ShaderID_DistortionAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_DistortionAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_DistortionAnimator__VTable vtable;
};

struct ShaderID_GlobalAlphaCutoffMenuItem {
  struct ShaderID_GlobalAlphaCutoffMenuItem__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_GlobalAlphaCutoffMenuItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_GlobalAlphaCutoffMenuItem__StaticFields {
  int32_t _GlobalAlphaCutoff;
};
struct ShaderID_GlobalAlphaCutoffMenuItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_GlobalAlphaCutoffMenuItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_GlobalAlphaCutoffMenuItem__VTable vtable;
};

struct ShaderID_HoldableRigidBody {
  struct ShaderID_HoldableRigidBody__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_HoldableRigidBody__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_HoldableRigidBody__StaticFields {
  int32_t _MultiplyLayerColor;
};
struct ShaderID_HoldableRigidBody__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_HoldableRigidBody__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_HoldableRigidBody__VTable vtable;
};

struct ShaderID_MotionAbsorbCharacter {
  struct ShaderID_MotionAbsorbCharacter__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_MotionAbsorbCharacter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_MotionAbsorbCharacter__StaticFields {
  int32_t MotionAbsorbWeight;
};
struct ShaderID_MotionAbsorbCharacter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_MotionAbsorbCharacter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_MotionAbsorbCharacter__VTable vtable;
};

struct ShaderID_SceneScreenshotManager {
  struct ShaderID_SceneScreenshotManager__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_SceneScreenshotManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_SceneScreenshotManager__StaticFields {
  int32_t _ScreenshotDesaturation;
  int32_t _Color;
};
struct ShaderID_SceneScreenshotManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_SceneScreenshotManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_SceneScreenshotManager__VTable vtable;
};

struct ShaderID_SceneScreenshot {
  struct ShaderID_SceneScreenshot__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_SceneScreenshot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_SceneScreenshot__StaticFields {
  int32_t _TintColor;
  int32_t _MainTex;
  int32_t _Color;
  int32_t _Saturation;
};
struct ShaderID_SceneScreenshot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_SceneScreenshot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_SceneScreenshot__VTable vtable;
};

struct ShaderID_SeinController3D {
  struct ShaderID_SeinController3D__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_SeinController3D__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_SeinController3D__StaticFields {
  int32_t slope;
};
struct ShaderID_SeinController3D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_SeinController3D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_SeinController3D__VTable vtable;
};

struct ShaderID_SeinSpiritLeashAbility {
  struct ShaderID_SeinSpiritLeashAbility__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_SeinSpiritLeashAbility__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_SeinSpiritLeashAbility__StaticFields {
  int32_t lookDirectionHorizontal;
};
struct ShaderID_SeinSpiritLeashAbility__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_SeinSpiritLeashAbility__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_SeinSpiritLeashAbility__VTable vtable;
};

struct ShaderID_ShadowsMidtonesHighlights {
  struct ShaderID_ShadowsMidtonesHighlights__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_ShadowsMidtonesHighlights__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_ShadowsMidtonesHighlights__StaticFields {
  int32_t _Shadows;
  int32_t _Midtones;
  int32_t _Highlights;
  int32_t _Amount;
};
struct ShaderID_ShadowsMidtonesHighlights__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_ShadowsMidtonesHighlights__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_ShadowsMidtonesHighlights__VTable vtable;
};

struct ShaderID_Sharpen {
  struct ShaderID_Sharpen__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Sharpen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Sharpen__StaticFields {
  int32_t _Params;
};
struct ShaderID_Sharpen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Sharpen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Sharpen__VTable vtable;
};

struct ShaderID_SimpleLocomotion {
  struct ShaderID_SimpleLocomotion__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_SimpleLocomotion__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_SimpleLocomotion__StaticFields {
  int32_t Speed;
};
struct ShaderID_SimpleLocomotion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_SimpleLocomotion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_SimpleLocomotion__VTable vtable;
};

struct ShaderID_SmartSaturation {
  struct ShaderID_SmartSaturation__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_SmartSaturation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_SmartSaturation__StaticFields {
  int32_t _Curve;
  int32_t _Boost;
};
struct ShaderID_SmartSaturation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_SmartSaturation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_SmartSaturation__VTable vtable;
};

struct ShaderID_Strokes {
  struct ShaderID_Strokes__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Strokes__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Strokes__StaticFields {
  int32_t _Params1;
  int32_t _Params2;
  int32_t _Params3;
};
struct ShaderID_Strokes__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Strokes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Strokes__VTable vtable;
};

struct ShaderID_SunShafts {
  struct ShaderID_SunShafts__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_SunShafts__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_SunShafts__StaticFields {
  int32_t _BlurRadius4;
  int32_t _SunPosition;
  int32_t _SunThreshold;
  int32_t _Skybox;
  int32_t _SunColor;
  int32_t _ColorBuffer;
};
struct ShaderID_SunShafts__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_SunShafts__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_SunShafts__VTable vtable;
};

struct ShaderID_TVVignette {
  struct ShaderID_TVVignette__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_TVVignette__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_TVVignette__StaticFields {
  int32_t _Params;
};
struct ShaderID_TVVignette__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_TVVignette__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_TVVignette__VTable vtable;
};

struct ShaderID_Technicolor {
  struct ShaderID_Technicolor__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Technicolor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Technicolor__StaticFields {
  int32_t _Exposure;
  int32_t _Balance;
  int32_t _Amount;
};
struct ShaderID_Technicolor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Technicolor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Technicolor__VTable vtable;
};

struct ShaderID_TelemetryHeatMap {
  struct ShaderID_TelemetryHeatMap__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_TelemetryHeatMap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_TelemetryHeatMap__StaticFields {
  int32_t _Points_Length;
  int32_t _Points;
  int32_t _Properties;
};
struct ShaderID_TelemetryHeatMap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_TelemetryHeatMap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_TelemetryHeatMap__VTable vtable;
};

struct ShaderID_TestBoneUpdater {
  struct ShaderID_TestBoneUpdater__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_TestBoneUpdater__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_TestBoneUpdater__StaticFields {
  int32_t _BoneInitialPositions;
  int32_t _BoneCount;
  int32_t _Skinning;
  int32_t _BonePositions;
};
struct ShaderID_TestBoneUpdater__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_TestBoneUpdater__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_TestBoneUpdater__VTable vtable;
};

struct ShaderID_TextifyModifier {
  struct ShaderID_TextifyModifier__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_TextifyModifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_TextifyModifier__StaticFields {
  int32_t _TxtAlphaCenter;
};
struct ShaderID_TextifyModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_TextifyModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_TextifyModifier__VTable vtable;
};

struct ShaderID_Threshold {
  struct ShaderID_Threshold__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Threshold__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Threshold__StaticFields {
  int32_t _Threshold;
  int32_t _Range;
};
struct ShaderID_Threshold__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Threshold__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Threshold__VTable vtable;
};

struct ShaderID_TiltShift {
  struct ShaderID_TiltShift__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_TiltShift__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_TiltShift__StaticFields {
  int32_t _BlurSize;
  int32_t _BlurArea;
  int32_t _Blurred;
};
struct ShaderID_TiltShift__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_TiltShift__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_TiltShift__VTable vtable;
};

struct ShaderID_Tonemapping {
  struct ShaderID_Tonemapping__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Tonemapping__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Tonemapping__StaticFields {
  int32_t _RangeScale;
  int32_t _Curve;
  int32_t _ExposureAdjustment;
  int32_t _AdaptionSpeed;
  int32_t _HdrParams;
  int32_t _SmallTex;
};
struct ShaderID_Tonemapping__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Tonemapping__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Tonemapping__VTable vtable;
};

struct ShaderID_UberDofTextureGenerator {
  struct ShaderID_UberDofTextureGenerator__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_UberDofTextureGenerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_UberDofTextureGenerator__StaticFields {
  int32_t GaussianTexture;
  int32_t BlurWidth;
  int32_t BlurDirection;
  int32_t TextureScalingAndOffset;
};
struct ShaderID_UberDofTextureGenerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_UberDofTextureGenerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_UberDofTextureGenerator__VTable vtable;
};

struct ShaderID_UberPostProcess {
  struct ShaderID_UberPostProcess__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_UberPostProcess__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_UberPostProcess__StaticFields {
  int32_t colorA;
  int32_t colorB;
  int32_t colorC;
  int32_t colorD;
};
struct ShaderID_UberPostProcess__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_UberPostProcess__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_UberPostProcess__VTable vtable;
};

struct ShaderID_UberScreenManager {
  struct ShaderID_UberScreenManager__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_UberScreenManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_UberScreenManager__StaticFields {
  int32_t _Tweak;
};
struct ShaderID_UberScreenManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_UberScreenManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_UberScreenManager__VTable vtable;
};

struct ShaderID_UberShaderAtlasBuildValidator {
  struct ShaderID_UberShaderAtlasBuildValidator__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_UberShaderAtlasBuildValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_UberShaderAtlasBuildValidator__StaticFields {
  int32_t _MainTex;
};
struct ShaderID_UberShaderAtlasBuildValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_UberShaderAtlasBuildValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_UberShaderAtlasBuildValidator__VTable vtable;
};

struct ShaderID_UberWaterEdge {
  struct ShaderID_UberWaterEdge__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_UberWaterEdge__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_UberWaterEdge__StaticFields {
  int32_t _TopSize;
  int32_t _BottomSize;
};
struct ShaderID_UberWaterEdge__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_UberWaterEdge__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_UberWaterEdge__VTable vtable;
};

struct ShaderID_VRAnimatorController {
  struct ShaderID_VRAnimatorController__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_VRAnimatorController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_VRAnimatorController__StaticFields {
  int32_t IsStrafing;
  int32_t Right;
  int32_t Forward;
};
struct ShaderID_VRAnimatorController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_VRAnimatorController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_VRAnimatorController__VTable vtable;
};

struct ShaderID_Vibrance {
  struct ShaderID_Vibrance__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Vibrance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Vibrance__StaticFields {
  int32_t _Amount;
  int32_t _Channels;
};
struct ShaderID_Vibrance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Vibrance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Vibrance__VTable vtable;
};

struct ShaderID_VideoEditor {
  struct ShaderID_VideoEditor__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_VideoEditor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_VideoEditor__StaticFields {
  int32_t _ChromaTex;
};
struct ShaderID_VideoEditor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_VideoEditor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_VideoEditor__VTable vtable;
};

struct ShaderID_VignetteAndChromaticAberration {
  struct ShaderID_VignetteAndChromaticAberration__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_VignetteAndChromaticAberration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_VignetteAndChromaticAberration__StaticFields {
  int32_t offsets;
  int32_t _Intensity;
  int32_t _Blur;
  int32_t _VignetteTex;
  int32_t _ChromaticAberration;
  int32_t _AxialAberration;
  int32_t _BlurDistance;
  int32_t _Luminance;
};
struct ShaderID_VignetteAndChromaticAberration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_VignetteAndChromaticAberration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_VignetteAndChromaticAberration__VTable vtable;
};

struct ShaderID_Water3Manager {
  struct ShaderID_Water3Manager__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Water3Manager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Water3Manager__StaticFields {
  int32_t _NoiseTime;
  int32_t _DisplacementHeightMap;
  int32_t _SecondDisplacementHeightMap;
};
struct ShaderID_Water3Manager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Water3Manager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Water3Manager__VTable vtable;
};

struct ShaderID_Water3UnderwaterEffect {
  struct ShaderID_Water3UnderwaterEffect__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Water3UnderwaterEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Water3UnderwaterEffect__StaticFields {
  int32_t _DepthColor;
  int32_t _UnderwaterColorFade;
  int32_t offsets;
  int32_t _RefrColorDepth;
};
struct ShaderID_Water3UnderwaterEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Water3UnderwaterEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Water3UnderwaterEffect__VTable vtable;
};

struct ShaderID_Water3 {
  struct ShaderID_Water3__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Water3__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Water3__StaticFields {
  int32_t _ReflectionTex;
  int32_t _WorldLightDir;
  int32_t _DistortParams;
  int32_t _InvFadeParemeter;
  int32_t _ShoreTiling;
  int32_t _Shininess;
  int32_t _FoamWaveParams;
  int32_t _WaveOffset;
  int32_t _WaveScale4;
  int32_t _WaveMatrix;
  int32_t _WaveMatrix2;
  int32_t _Displacement;
  int32_t _DisplacementXz;
};
struct ShaderID_Water3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Water3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Water3__VTable vtable;
};

struct ShaderID_WaterLineModifier {
  struct ShaderID_WaterLineModifier__Class *klass;
  struct MonitorData *monitor;
};}