namespace app {
struct AAMode__Enum__StaticFields {
};

struct AAMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AAMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AAMode__Enum__VTable vtable;
};

struct Antialiasing__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CheckResources;
};

struct Antialiasing__StaticFields {
};

struct Antialiasing__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Antialiasing__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Antialiasing__VTable vtable;
};

enum class Bloom_TweakMode__Enum : int32_t {
    Basic = 0x00000000,
    Complex = 0x00000001,
};

struct Bloom_TweakMode__Enum__Boxed {
    struct Bloom_TweakMode__Enum__Class *klass;
    MonitorData *monitor;
    Bloom_TweakMode__Enum value;
    
};

enum class Bloom_BloomScreenBlendMode__Enum : int32_t {
    Screen = 0x00000000,
    Add = 0x00000001,
};

struct Bloom_BloomScreenBlendMode__Enum__Boxed {
    struct Bloom_BloomScreenBlendMode__Enum__Class *klass;
    MonitorData *monitor;
    Bloom_BloomScreenBlendMode__Enum value;
    
};

enum class Bloom_HDRBloomMode__Enum : int32_t {
    Auto = 0x00000000,
    On = 0x00000001,
    Off = 0x00000002,
};

struct Bloom_HDRBloomMode__Enum__Boxed {
    struct Bloom_HDRBloomMode__Enum__Class *klass;
    MonitorData *monitor;
    Bloom_HDRBloomMode__Enum value;
    
};

enum class Bloom_BloomQuality__Enum : int32_t {
    Cheap = 0x00000000,
    High = 0x00000001,
};

struct Bloom_BloomQuality__Enum__Boxed {
    struct Bloom_BloomQuality__Enum__Class *klass;
    MonitorData *monitor;
    Bloom_BloomQuality__Enum value;
    
};

enum class Bloom_LensFlareStyle__Enum : int32_t {
    Ghosting = 0x00000000,
    Anamorphic = 0x00000001,
    Combined = 0x00000002,
};

struct Bloom_LensFlareStyle__Enum__Boxed {
    struct Bloom_LensFlareStyle__Enum__Class *klass;
    MonitorData *monitor;
    Bloom_LensFlareStyle__Enum value;
    
};

struct Bloom__Fields {
    struct PostEffectsBase__Fields _;
    Bloom_TweakMode__Enum tweakMode;
    
    Bloom_BloomScreenBlendMode__Enum screenBlendMode;
    
    Bloom_HDRBloomMode__Enum hdr;
    
    bool doHdr;
    float sepBlurSpread;
    Bloom_BloomQuality__Enum quality;
    
    float bloomIntensity;
    float bloomThreshold;
    struct Color bloomThresholdColor;
    int32_t bloomBlurIterations;
    int32_t hollywoodFlareBlurIterations;
    float flareRotation;
    Bloom_LensFlareStyle__Enum lensflareMode;
    
    float hollyStretchWidth;
    float lensflareIntensity;
    float lensflareThreshold;
    float lensFlareSaturation;
    struct Color flareColorA;
    struct Color flareColorB;
    struct Color flareColorC;
    struct Color flareColorD;
    struct Texture2D *lensFlareVignetteMask;
    struct Shader *lensFlareShader;
    struct Material *lensFlareMaterial;
    struct Shader *screenBlendShader;
    struct Material *screenBlend;
    struct Shader *blurAndFlaresShader;
    struct Material *blurAndFlaresMaterial;
    struct Shader *brightPassFilterShader;
    struct Material *brightPassFilterMaterial;
};

struct Bloom {
    struct Bloom__Class *klass;
    MonitorData *monitor;
    struct Bloom__Fields fields;
};

struct Bloom_TweakMode__Enum__VTable {
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

struct Bloom_TweakMode__Enum__StaticFields {
};

struct Bloom_TweakMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Bloom_TweakMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Bloom_TweakMode__Enum__VTable vtable;
};

struct Bloom_BloomScreenBlendMode__Enum__VTable {
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

struct Bloom_BloomScreenBlendMode__Enum__StaticFields {
};

struct Bloom_BloomScreenBlendMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Bloom_BloomScreenBlendMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Bloom_BloomScreenBlendMode__Enum__VTable vtable;
};

struct Bloom_HDRBloomMode__Enum__VTable {
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

struct Bloom_HDRBloomMode__Enum__StaticFields {
};

struct Bloom_HDRBloomMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Bloom_HDRBloomMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Bloom_HDRBloomMode__Enum__VTable vtable;
};

struct Bloom_BloomQuality__Enum__VTable {
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

struct Bloom_BloomQuality__Enum__StaticFields {
};

struct Bloom_BloomQuality__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Bloom_BloomQuality__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Bloom_BloomQuality__Enum__VTable vtable;
};

struct Bloom_LensFlareStyle__Enum__VTable {
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

struct Bloom_LensFlareStyle__Enum__StaticFields {
};

struct Bloom_LensFlareStyle__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Bloom_LensFlareStyle__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Bloom_LensFlareStyle__Enum__VTable vtable;
};

struct Bloom__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CheckResources;
};

struct Bloom__StaticFields {
};

struct Bloom__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Bloom__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Bloom__VTable vtable;
};

enum class TweakMode34__Enum : int32_t {
    Basic = 0x00000000,
    Complex = 0x00000001,
};

struct TweakMode34__Enum__Boxed {
    struct TweakMode34__Enum__Class *klass;
    MonitorData *monitor;
    TweakMode34__Enum value;
    
};

enum class BloomScreenBlendMode__Enum : int32_t {
    Screen = 0x00000000,
    Add = 0x00000001,
};

struct BloomScreenBlendMode__Enum__Boxed {
    struct BloomScreenBlendMode__Enum__Class *klass;
    MonitorData *monitor;
    BloomScreenBlendMode__Enum value;
    
};

enum class HDRBloomMode__Enum : int32_t {
    Auto = 0x00000000,
    On = 0x00000001,
    Off = 0x00000002,
};

struct HDRBloomMode__Enum__Boxed {
    struct HDRBloomMode__Enum__Class *klass;
    MonitorData *monitor;
    HDRBloomMode__Enum value;
    
};

enum class LensflareStyle34__Enum : int32_t {
    Ghosting = 0x00000000,
    Anamorphic = 0x00000001,
    Combined = 0x00000002,
};

struct LensflareStyle34__Enum__Boxed {
    struct LensflareStyle34__Enum__Class *klass;
    MonitorData *monitor;
    LensflareStyle34__Enum value;
    
};

struct BloomAndFlares__Fields {
    struct PostEffectsBase__Fields _;
    TweakMode34__Enum tweakMode;
    
    BloomScreenBlendMode__Enum screenBlendMode;
    
    HDRBloomMode__Enum hdr;
    
    bool doHdr;
    float sepBlurSpread;
    float useSrcAlphaAsMask;
    float bloomIntensity;
    float bloomThreshold;
    int32_t bloomBlurIterations;
    bool lensflares;
    int32_t hollywoodFlareBlurIterations;
    LensflareStyle34__Enum lensflareMode;
    
    float hollyStretchWidth;
    float lensflareIntensity;
    float lensflareThreshold;
    struct Color flareColorA;
    struct Color flareColorB;
    struct Color flareColorC;
    struct Color flareColorD;
    struct Texture2D *lensFlareVignetteMask;
    struct Shader *lensFlareShader;
    struct Material *lensFlareMaterial;
    struct Shader *vignetteShader;
    struct Material *vignetteMaterial;
    struct Shader *separableBlurShader;
    struct Material *separableBlurMaterial;
    struct Shader *addBrightStuffOneOneShader;
    struct Material *addBrightStuffBlendOneOneMaterial;
    struct Shader *screenBlendShader;
    struct Material *screenBlend;
    struct Shader *hollywoodFlaresShader;
    struct Material *hollywoodFlaresMaterial;
    struct Shader *brightPassFilterShader;
    struct Material *brightPassFilterMaterial;
};

struct BloomAndFlares {
    struct BloomAndFlares__Class *klass;
    MonitorData *monitor;
    struct BloomAndFlares__Fields fields;
};

struct TweakMode34__Enum__VTable {
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

struct TweakMode34__Enum__StaticFields {
};

struct TweakMode34__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TweakMode34__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TweakMode34__Enum__VTable vtable;
};

struct BloomScreenBlendMode__Enum__VTable {
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

struct BloomScreenBlendMode__Enum__StaticFields {
};

struct BloomScreenBlendMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BloomScreenBlendMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BloomScreenBlendMode__Enum__VTable vtable;
};

struct HDRBloomMode__Enum__VTable {
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

struct HDRBloomMode__Enum__StaticFields {
};

struct HDRBloomMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HDRBloomMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HDRBloomMode__Enum__VTable vtable;
};

struct LensflareStyle34__Enum__VTable {
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

struct LensflareStyle34__Enum__StaticFields {
};

struct LensflareStyle34__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LensflareStyle34__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LensflareStyle34__Enum__VTable vtable;
};

struct BloomAndFlares__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CheckResources;
};

struct BloomAndFlares__StaticFields {
};

struct BloomAndFlares__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BloomAndFlares__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BloomAndFlares__VTable vtable;
};

enum class BloomOptimized_Resolution__Enum : int32_t {
    Low = 0x00000000,
    High = 0x00000001,
};

struct BloomOptimized_Resolution__Enum__Boxed {
    struct BloomOptimized_Resolution__Enum__Class *klass;
    MonitorData *monitor;
    BloomOptimized_Resolution__Enum value;
    
};

enum class BloomOptimized_BlurType__Enum : int32_t {
    Standard = 0x00000000,
    Sgx = 0x00000001,
};

struct BloomOptimized_BlurType__Enum__Boxed {
    struct BloomOptimized_BlurType__Enum__Class *klass;
    MonitorData *monitor;
    BloomOptimized_BlurType__Enum value;
    
};

struct BloomOptimized__Fields {
    struct PostEffectsBase__Fields _;
    float threshold;
    float intensity;
    float blurSize;
    BloomOptimized_Resolution__Enum resolution;
    
    int32_t blurIterations;
    BloomOptimized_BlurType__Enum blurType;
    
    struct Shader *fastBloomShader;
    struct Material *fastBloomMaterial;
};

struct BloomOptimized {
    struct BloomOptimized__Class *klass;
    MonitorData *monitor;
    struct BloomOptimized__Fields fields;
};

struct BloomOptimized_Resolution__Enum__VTable {
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

struct BloomOptimized_Resolution__Enum__StaticFields {
};

struct BloomOptimized_Resolution__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BloomOptimized_Resolution__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BloomOptimized_Resolution__Enum__VTable vtable;
};

struct BloomOptimized_BlurType__Enum__VTable {
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

struct BloomOptimized_BlurType__Enum__StaticFields {
};

struct BloomOptimized_BlurType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BloomOptimized_BlurType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BloomOptimized_BlurType__Enum__VTable vtable;
};

struct BloomOptimized__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CheckResources;
};

struct BloomOptimized__StaticFields {
};

struct BloomOptimized__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BloomOptimized__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BloomOptimized__VTable vtable;
};

enum class BlurOptimized_BlurType__Enum : int32_t {
    StandardGauss = 0x00000000,
    SgxGauss = 0x00000001,
};

struct BlurOptimized_BlurType__Enum__Boxed {
    struct BlurOptimized_BlurType__Enum__Class *klass;
    MonitorData *monitor;
    BlurOptimized_BlurType__Enum value;
    
};

struct BlurOptimized__Fields {
    struct PostEffectsBase__Fields _;
    int32_t downsample;
    float blurSize;
    int32_t blurIterations;
    BlurOptimized_BlurType__Enum blurType;
    
    struct Shader *blurShader;
    struct Material *blurMaterial;
};

struct BlurOptimized {
    struct BlurOptimized__Class *klass;
    MonitorData *monitor;
    struct BlurOptimized__Fields fields;
};

struct BlurOptimized_BlurType__Enum__VTable {
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

struct BlurOptimized_BlurType__Enum__StaticFields {
};

struct BlurOptimized_BlurType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BlurOptimized_BlurType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BlurOptimized_BlurType__Enum__VTable vtable;
};

struct BlurOptimized__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CheckResources;
};

struct BlurOptimized__StaticFields {
};

struct BlurOptimized__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BlurOptimized__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BlurOptimized__VTable vtable;
};

enum class CameraMotionBlur_MotionBlurFilter__Enum : int32_t {
    CameraMotion = 0x00000000,
    LocalBlur = 0x00000001,
    Reconstruction = 0x00000002,
    ReconstructionDX11 = 0x00000003,
    ReconstructionDisc = 0x00000004,
};

struct CameraMotionBlur_MotionBlurFilter__Enum__Boxed {
    struct CameraMotionBlur_MotionBlurFilter__Enum__Class *klass;
    MonitorData *monitor;
    CameraMotionBlur_MotionBlurFilter__Enum value;
    
};

struct CameraMotionBlur__Fields {
    struct PostEffectsBase__Fields _;
    CameraMotionBlur_MotionBlurFilter__Enum filterType;
    
    bool preview;
    struct Vector3 previewScale;
    float movementScale;
    float rotationScale;
    float maxVelocity;
    float minVelocity;
    float velocityScale;
    float softZDistance;
    int32_t velocityDownsample;
    struct LayerMask excludeLayers;
    struct GameObject *tmpCam;
    struct Shader *shader;
    struct Shader *dx11MotionBlurShader;
    struct Shader *replacementClear;
    struct Material *motionBlurMaterial;
    struct Material *dx11MotionBlurMaterial;
    struct Texture2D *noiseTexture;
    float jitter;
    bool showVelocity;
    float showVelocityScale;
    struct Matrix4x4 currentViewProjMat;
    struct Matrix4x4 prevViewProjMat;
    int32_t prevFrameCount;
    bool wasActive;
    struct Vector3 prevFrameForward;
    struct Vector3 prevFrameUp;
    struct Vector3 prevFramePos;
    struct Camera *_camera;
};

struct CameraMotionBlur {
    struct CameraMotionBlur__Class *klass;
    MonitorData *monitor;
    struct CameraMotionBlur__Fields fields;
};

struct CameraMotionBlur_MotionBlurFilter__Enum__VTable {
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

struct CameraMotionBlur_MotionBlurFilter__Enum__StaticFields {
};

struct CameraMotionBlur_MotionBlurFilter__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraMotionBlur_MotionBlurFilter__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraMotionBlur_MotionBlurFilter__Enum__VTable vtable;
};

struct CameraMotionBlur__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CheckResources;
};

struct CameraMotionBlur__StaticFields {
    float MAX_RADIUS;
};

struct CameraMotionBlur__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraMotionBlur__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraMotionBlur__VTable vtable;
};

enum class ColorCorrectionCurves_ColorCorrectionMode__Enum : int32_t {
    Simple = 0x00000000,
    Advanced = 0x00000001,
};

struct ColorCorrectionCurves_ColorCorrectionMode__Enum__Boxed {
    struct ColorCorrectionCurves_ColorCorrectionMode__Enum__Class *klass;
    MonitorData *monitor;
    ColorCorrectionCurves_ColorCorrectionMode__Enum value;
    
};

struct ColorCorrectionCurves__Fields {
    struct PostEffectsBase__Fields _;
    struct AnimationCurve *redChannel;
    struct AnimationCurve *greenChannel;
    struct AnimationCurve *blueChannel;
    bool useDepthCorrection;
    struct AnimationCurve *zCurve;
    struct AnimationCurve *depthRedChannel;
    struct AnimationCurve *depthGreenChannel;
    struct AnimationCurve *depthBlueChannel;
    struct Material *ccMaterial;
    struct Material *ccDepthMaterial;
    struct Material *selectiveCcMaterial;
    struct Texture2D *rgbChannelTex;
    struct Texture2D *rgbDepthChannelTex;
    struct Texture2D *zCurveTex;
    float saturation;
    bool selectiveCc;
    struct Color selectiveFromColor;
    struct Color selectiveToColor;
    ColorCorrectionCurves_ColorCorrectionMode__Enum mode;
    
    bool updateTextures;
    struct Shader *colorCorrectionCurvesShader;
    struct Shader *simpleColorCorrectionCurvesShader;
    struct Shader *colorCorrectionSelectiveShader;
    bool updateTexturesOnStartup;
};

}
