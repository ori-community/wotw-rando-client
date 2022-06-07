namespace app {
struct SkinningModifier {
    struct SkinningModifier__Class *klass;
    MonitorData *monitor;
    struct SkinningModifier__Fields fields;
};

struct SkinningModifier__VTable {
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
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnUpdatePhysics;
    VirtualInvokeData get_TimelineSamplePriority;
    VirtualInvokeData TimelineSample;
    VirtualInvokeData EnterTimelinePreview;
    VirtualInvokeData ExitTimelinePreview;
};

struct SkinningModifier__StaticFields {
};

struct SkinningModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkinningModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkinningModifier__VTable vtable;
};

struct VerletSkinningModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct Int32__Array *linkIndices;
    struct VerletStructure *verletStructure;
    struct Vector4__Array *m_bonePositions;
    struct Vector4__Array *m_boneInitialPositions;
    int32_t m_intialBonePositionsID;
    int32_t m_bonePositionsID;
    int32_t m_skinningIntensityID;
    bool m_positionsInitialised;
    struct Vector3 m_initialPosition;
    struct Material *m_oldMaterial;
    bool m_isSuspended;
    struct Transform *m_transform;
    bool m_frameSkipped;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct VerletSkinningModifier {
    struct VerletSkinningModifier__Class *klass;
    MonitorData *monitor;
    struct VerletSkinningModifier__Fields fields;
};

struct VerletSkinning2DModifier__Fields {
    struct VerletSkinningModifier__Fields _;
};

struct VerletSkinning2DModifier {
    struct VerletSkinning2DModifier__Class *klass;
    MonitorData *monitor;
    struct VerletSkinning2DModifier__Fields fields;
};

struct VerletSkinningModifier__VTable {
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
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnUpdatePhysics;
    VirtualInvokeData OnEnable;
    VirtualInvokeData InitializeBonePostions;
    VirtualInvokeData UpdatePositions;
    VirtualInvokeData OnUpdatePhysics_1;
};

struct VerletSkinningModifier__StaticFields {
    bool SkipFrames;
    bool m_frameSkipStart;
};

struct VerletSkinningModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletSkinningModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletSkinningModifier__VTable vtable;
};

struct VerletSkinning2DModifier__VTable {
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
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnUpdatePhysics;
    VirtualInvokeData OnEnable;
    VirtualInvokeData InitializeBonePostions;
    VirtualInvokeData UpdatePositions;
    VirtualInvokeData OnUpdatePhysics_1;
};

struct VerletSkinning2DModifier__StaticFields {
};

struct VerletSkinning2DModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletSkinning2DModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletSkinning2DModifier__VTable vtable;
};

struct VerletSkinning3DModifier__Fields {
    struct VerletSkinningModifier__Fields _;
    struct Vector4__Array *m_boneTangents;
    struct Vector4__Array *m_boneNormals;
    struct Vector4__Array *m_boneInitialTangents;
    struct Vector4__Array *m_boneInitialNormals;
    bool FixedBasis;
    float ZScaling;
    int32_t m_intialBoneTangentsID;
    int32_t m_intialBoneNormalsID;
    int32_t m_boneTangentsID;
    int32_t m_boneNormalsID;
    int32_t m_SkinningAdditionalScalingID;
    struct SkinnedMeshRenderer *m_skinnedMeshRenderer;
    struct Matrix4x4 m_boneTransformMatrix;
};

struct VerletSkinning3DModifier {
    struct VerletSkinning3DModifier__Class *klass;
    MonitorData *monitor;
    struct VerletSkinning3DModifier__Fields fields;
};

struct VerletSkinning3DModifier__VTable {
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
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnUpdatePhysics;
    VirtualInvokeData OnEnable;
    VirtualInvokeData InitializeBonePostions;
    VirtualInvokeData UpdatePositions;
    VirtualInvokeData OnUpdatePhysics_1;
};

struct VerletSkinning3DModifier__StaticFields {
};

struct VerletSkinning3DModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletSkinning3DModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletSkinning3DModifier__VTable vtable;
};

struct TessellationModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture *DisplacementMapTexture;
    struct UberShaderVector *TessParams;
    float m_prevWorldRotation;
};

struct TessellationModifier {
    struct TessellationModifier__Class *klass;
    MonitorData *monitor;
    struct TessellationModifier__Fields fields;
};

struct TessellationModifier__VTable {
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

struct TessellationModifier__StaticFields {
};

struct TessellationModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TessellationModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TessellationModifier__VTable vtable;
};

struct WaterDisplacementModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderVector *TessParams;
};

struct WaterDisplacementModifier {
    struct WaterDisplacementModifier__Class *klass;
    MonitorData *monitor;
    struct WaterDisplacementModifier__Fields fields;
};

struct WaterDisplacementModifier__VTable {
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

struct WaterDisplacementModifier__StaticFields {
};

struct WaterDisplacementModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaterDisplacementModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaterDisplacementModifier__VTable vtable;
};

struct TextAnimDistortModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture *DistortTexture;
    struct UberShaderVector *Strength;
};

struct TextAnimDistortModifier {
    struct TextAnimDistortModifier__Class *klass;
    MonitorData *monitor;
    struct TextAnimDistortModifier__Fields fields;
};

struct TextAnimDistortModifier__VTable {
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

struct TextAnimDistortModifier__StaticFields {
};

struct TextAnimDistortModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextAnimDistortModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextAnimDistortModifier__VTable vtable;
};

struct TextAnimFadeModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture *TextFadeMask;
    struct UberShaderFloat *Strength;
};

struct TextAnimFadeModifier {
    struct TextAnimFadeModifier__Class *klass;
    MonitorData *monitor;
    struct TextAnimFadeModifier__Fields fields;
};

struct TextAnimFadeModifier__VTable {
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

struct TextAnimFadeModifier__StaticFields {
};

struct TextAnimFadeModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextAnimFadeModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextAnimFadeModifier__VTable vtable;
};

struct TextAnimGlowModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderFloat *GlowSize;
    struct UberShaderColor *GlowColor;
};

struct TextAnimGlowModifier {
    struct TextAnimGlowModifier__Class *klass;
    MonitorData *monitor;
    struct TextAnimGlowModifier__Fields fields;
};

struct TextAnimGlowModifier__VTable {
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

struct TextAnimGlowModifier__StaticFields {
};

struct TextAnimGlowModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextAnimGlowModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextAnimGlowModifier__VTable vtable;
};

struct TextGlowModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderFloat *GlowSize;
    struct UberShaderColor *GlowColor;
};

struct TextGlowModifier {
    struct TextGlowModifier__Class *klass;
    MonitorData *monitor;
    struct TextGlowModifier__Fields fields;
};

struct TextGlowModifier__VTable {
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

struct TextGlowModifier__StaticFields {
};

struct TextGlowModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextGlowModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextGlowModifier__VTable vtable;
};

struct TextifyModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture *TextTexture;
};

struct TextifyModifier {
    struct TextifyModifier__Class *klass;
    MonitorData *monitor;
    struct TextifyModifier__Fields fields;
};

struct TextifyModifier__VTable {
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

struct TextifyModifier__StaticFields {
};

struct TextifyModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextifyModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextifyModifier__VTable vtable;
};

struct TextOutlineModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderFloat *OutlineSize;
    struct UberShaderColor *OutlineColor;
};

struct TextOutlineModifier {
    struct TextOutlineModifier__Class *klass;
    MonitorData *monitor;
    struct TextOutlineModifier__Fields fields;
};

struct TextOutlineModifier__VTable {
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

struct TextOutlineModifier__StaticFields {
};

struct TextOutlineModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextOutlineModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextOutlineModifier__VTable vtable;
};

struct TextShadowModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderColor *ShadowColor;
    struct UberShaderVector *ShadowOffset;
};

struct TextShadowModifier {
    struct TextShadowModifier__Class *klass;
    MonitorData *monitor;
    struct TextShadowModifier__Fields fields;
};

struct TextShadowModifier__VTable {
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

struct TextShadowModifier__StaticFields {
};

struct TextShadowModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextShadowModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextShadowModifier__VTable vtable;
};

struct UberTextConstants {
    struct UberTextConstants__Class *klass;
    MonitorData *monitor;
};

struct UberTextConstants__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberTextConstants__StaticFields {
};

struct UberTextConstants__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberTextConstants__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberTextConstants__VTable vtable;
};

struct FakeMotionBlurModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture *FakeRotationMotionBlurMask;
    struct UberShaderVector *FakeMotionBlurSettings;
    struct UberShaderVector *FakeMotionBlurSettings2;
};

struct FakeMotionBlurModifier {
    struct FakeMotionBlurModifier__Class *klass;
    MonitorData *monitor;
    struct FakeMotionBlurModifier__Fields fields;
};

struct FakeMotionBlurModifier__VTable {
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

struct FakeMotionBlurModifier__StaticFields {
};

struct FakeMotionBlurModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FakeMotionBlurModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FakeMotionBlurModifier__VTable vtable;
};

struct NightBerryModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderColor *HurtColor;
};

struct NightBerryModifier {
    struct NightBerryModifier__Class *klass;
    MonitorData *monitor;
    struct NightBerryModifier__Fields fields;
};

struct NightBerryModifier__VTable {
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

struct NightBerryModifier__StaticFields {
};

struct NightBerryModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NightBerryModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NightBerryModifier__VTable vtable;
};

struct OutlineModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderColor *OutlineColor;
    struct UberShaderFloat *Size;
};

struct OutlineModifier {
    struct OutlineModifier__Class *klass;
    MonitorData *monitor;
    struct OutlineModifier__Fields fields;
};

struct OutlineModifier__VTable {
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

struct OutlineModifier__StaticFields {
};

struct OutlineModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OutlineModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OutlineModifier__VTable vtable;
};

struct SeparationMapModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture *SepartationMapTexture;
};

struct SeparationMapModifier {
    struct SeparationMapModifier__Class *klass;
    MonitorData *monitor;
    struct SeparationMapModifier__Fields fields;
};

struct SeparationMapModifier__VTable {
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

}
