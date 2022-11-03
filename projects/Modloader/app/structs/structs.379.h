namespace app {
    struct CameraFilterPack_Blur_Bloom__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Amount;
        float Glow;
    };

    struct CameraFilterPack_Blur_Bloom {
        struct CameraFilterPack_Blur_Bloom__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Bloom__Fields fields;
    };

    struct CameraFilterPack_Blur_Bloom__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Bloom__StaticFields {
        float ChangeAmount;
        float ChangeGlow;
    };

    struct CameraFilterPack_Blur_Bloom__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Bloom__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Bloom__VTable vtable;
    };

    struct CameraFilterPack_Blur_BlurHole__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        float Size;
        float _Radius;
        float _SpotSize;
        float _CenterX;
        float _CenterY;
        float _AlphaBlur;
        float _AlphaBlurInside;
        struct Material* SCMaterial;
    };

    struct CameraFilterPack_Blur_BlurHole {
        struct CameraFilterPack_Blur_BlurHole__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_BlurHole__Fields fields;
    };

    struct CameraFilterPack_Blur_BlurHole__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_BlurHole__StaticFields {
        float ChangeSize;
    };

    struct CameraFilterPack_Blur_BlurHole__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_BlurHole__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_BlurHole__VTable vtable;
    };

    struct CameraFilterPack_Blur_Blurry__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Amount;
        int32_t FastFilter;
    };

    struct CameraFilterPack_Blur_Blurry {
        struct CameraFilterPack_Blur_Blurry__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Blurry__Fields fields;
    };

    struct CameraFilterPack_Blur_Blurry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Blurry__StaticFields {
        float ChangeAmount;
        int32_t ChangeFastFilter;
    };

    struct CameraFilterPack_Blur_Blurry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Blurry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Blurry__VTable vtable;
    };

    struct CameraFilterPack_Blur_Dithering2x2__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        int32_t Level;
        struct Vector2 Distance;
    };

    struct CameraFilterPack_Blur_Dithering2x2 {
        struct CameraFilterPack_Blur_Dithering2x2__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Dithering2x2__Fields fields;
    };

    struct CameraFilterPack_Blur_Dithering2x2__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Dithering2x2__StaticFields {
        int32_t ChangeLevel;
        struct Vector2 ChangeDistance;
    };

    struct CameraFilterPack_Blur_Dithering2x2__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Dithering2x2__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Dithering2x2__VTable vtable;
    };

    struct CameraFilterPack_Blur_DitherOffset__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        int32_t Level;
        struct Vector2 Distance;
    };

    struct CameraFilterPack_Blur_DitherOffset {
        struct CameraFilterPack_Blur_DitherOffset__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_DitherOffset__Fields fields;
    };

    struct CameraFilterPack_Blur_DitherOffset__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_DitherOffset__StaticFields {
        int32_t ChangeLevel;
        struct Vector2 ChangeDistance;
    };

    struct CameraFilterPack_Blur_DitherOffset__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_DitherOffset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_DitherOffset__VTable vtable;
    };

    struct CameraFilterPack_Blur_Focus__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float CenterX;
        float CenterY;
        float _Size;
        float _Eyes;
    };

    struct CameraFilterPack_Blur_Focus {
        struct CameraFilterPack_Blur_Focus__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Focus__Fields fields;
    };

    struct CameraFilterPack_Blur_Focus__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Focus__StaticFields {
        float ChangeCenterX;
        float ChangeCenterY;
        float ChangeSize;
        float ChangeEyes;
    };

    struct CameraFilterPack_Blur_Focus__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Focus__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Focus__VTable vtable;
    };

    struct CameraFilterPack_Blur_GaussianBlur__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        float Size;
        struct Material* SCMaterial;
    };

    struct CameraFilterPack_Blur_GaussianBlur {
        struct CameraFilterPack_Blur_GaussianBlur__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_GaussianBlur__Fields fields;
    };

    struct CameraFilterPack_Blur_GaussianBlur__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_GaussianBlur__StaticFields {
        float ChangeSize;
    };

    struct CameraFilterPack_Blur_GaussianBlur__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_GaussianBlur__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_GaussianBlur__VTable vtable;
    };

    struct CameraFilterPack_Blur_Movie__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Radius;
        float Factor;
        int32_t FastFilter;
    };

    struct CameraFilterPack_Blur_Movie {
        struct CameraFilterPack_Blur_Movie__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Movie__Fields fields;
    };

    struct CameraFilterPack_Blur_Movie__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Movie__StaticFields {
        float ChangeRadius;
        float ChangeFactor;
        int32_t ChangeFastFilter;
    };

    struct CameraFilterPack_Blur_Movie__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Movie__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Movie__VTable vtable;
    };

    struct CameraFilterPack_Blur_Noise__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        int32_t Level;
        struct Vector2 Distance;
    };

    struct CameraFilterPack_Blur_Noise {
        struct CameraFilterPack_Blur_Noise__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Noise__Fields fields;
    };

    struct CameraFilterPack_Blur_Noise__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Noise__StaticFields {
        int32_t ChangeLevel;
        struct Vector2 ChangeDistance;
    };

    struct CameraFilterPack_Blur_Noise__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Noise__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Noise__VTable vtable;
    };

    struct CameraFilterPack_Blur_Radial__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Intensity;
        float MovX;
        float MovY;
        float blurWidth;
    };

    struct CameraFilterPack_Blur_Radial {
        struct CameraFilterPack_Blur_Radial__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Radial__Fields fields;
    };

    struct CameraFilterPack_Blur_Radial__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Radial__StaticFields {
        float ChangeValue;
        float ChangeValue2;
        float ChangeValue3;
        float ChangeValue4;
    };

    struct CameraFilterPack_Blur_Radial__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Radial__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Radial__VTable vtable;
    };

    struct CameraFilterPack_Blur_Radial_Fast__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Intensity;
        float MovX;
        float MovY;
        float blurWidth;
    };

    struct CameraFilterPack_Blur_Radial_Fast {
        struct CameraFilterPack_Blur_Radial_Fast__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Radial_Fast__Fields fields;
    };

    struct CameraFilterPack_Blur_Radial_Fast__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Radial_Fast__StaticFields {
        float ChangeValue;
        float ChangeValue2;
        float ChangeValue3;
        float ChangeValue4;
    };

    struct CameraFilterPack_Blur_Radial_Fast__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Radial_Fast__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Radial_Fast__VTable vtable;
    };

    struct CameraFilterPack_Blur_Regular__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        int32_t Level;
        struct Vector2 Distance;
    };

    struct CameraFilterPack_Blur_Regular {
        struct CameraFilterPack_Blur_Regular__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Regular__Fields fields;
    };

    struct CameraFilterPack_Blur_Regular__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Regular__StaticFields {
        int32_t ChangeLevel;
        struct Vector2 ChangeDistance;
    };

    struct CameraFilterPack_Blur_Regular__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Regular__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Regular__VTable vtable;
    };

    struct CameraFilterPack_Blur_Steam__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Radius;
        float Quality;
    };

    struct CameraFilterPack_Blur_Steam {
        struct CameraFilterPack_Blur_Steam__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Steam__Fields fields;
    };

    struct CameraFilterPack_Blur_Steam__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Steam__StaticFields {
        float ChangeRadius;
        float ChangeQuality;
    };

    struct CameraFilterPack_Blur_Steam__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Steam__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Steam__VTable vtable;
    };

    struct CameraFilterPack_Blur_Tilt_Shift__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Amount;
        int32_t FastFilter;
        float Smooth;
        float Size;
        float Position;
    };

    struct CameraFilterPack_Blur_Tilt_Shift {
        struct CameraFilterPack_Blur_Tilt_Shift__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Tilt_Shift__Fields fields;
    };

    struct CameraFilterPack_Blur_Tilt_Shift__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Tilt_Shift__StaticFields {
        float ChangeAmount;
        int32_t ChangeFastFilter;
    };

    struct CameraFilterPack_Blur_Tilt_Shift__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Tilt_Shift__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Tilt_Shift__VTable vtable;
    };

    struct CameraFilterPack_Blur_Tilt_Shift_Hole__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Amount;
        int32_t FastFilter;
        float Smooth;
        float Size;
        float PositionX;
        float PositionY;
    };

    struct CameraFilterPack_Blur_Tilt_Shift_Hole {
        struct CameraFilterPack_Blur_Tilt_Shift_Hole__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Tilt_Shift_Hole__Fields fields;
    };

    struct CameraFilterPack_Blur_Tilt_Shift_Hole__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Tilt_Shift_Hole__StaticFields {
        float ChangeAmount;
        int32_t ChangeFastFilter;
    };

    struct CameraFilterPack_Blur_Tilt_Shift_Hole__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Tilt_Shift_Hole__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Tilt_Shift_Hole__VTable vtable;
    };

    struct CameraFilterPack_Blur_Tilt_Shift_V__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Amount;
        int32_t FastFilter;
        float Smooth;
        float Size;
        float Position;
    };

    struct CameraFilterPack_Blur_Tilt_Shift_V {
        struct CameraFilterPack_Blur_Tilt_Shift_V__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Blur_Tilt_Shift_V__Fields fields;
    };

    struct CameraFilterPack_Blur_Tilt_Shift_V__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Blur_Tilt_Shift_V__StaticFields {
        float ChangeAmount;
        int32_t ChangeFastFilter;
    };

    struct CameraFilterPack_Blur_Tilt_Shift_V__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Blur_Tilt_Shift_V__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Blur_Tilt_Shift_V__VTable vtable;
    };

    struct CameraFilterPack_Color_BrightContrastSaturation__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Brightness;
        float Saturation;
        float Contrast;
    };

    struct CameraFilterPack_Color_BrightContrastSaturation {
        struct CameraFilterPack_Color_BrightContrastSaturation__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Color_BrightContrastSaturation__Fields fields;
    };

    struct CameraFilterPack_Color_BrightContrastSaturation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Color_BrightContrastSaturation__StaticFields {
        float ChangeBrightness;
        float ChangeSaturation;
        float ChangeContrast;
    };

    struct CameraFilterPack_Color_BrightContrastSaturation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Color_BrightContrastSaturation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Color_BrightContrastSaturation__VTable vtable;
    };

    struct CameraFilterPack_Color_Chromatic_Aberration__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Offset;
    };

    struct CameraFilterPack_Color_Chromatic_Aberration {
        struct CameraFilterPack_Color_Chromatic_Aberration__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Color_Chromatic_Aberration__Fields fields;
    };

    struct CameraFilterPack_Color_Chromatic_Aberration__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Color_Chromatic_Aberration__StaticFields {
        float ChangeOffset;
    };

    struct CameraFilterPack_Color_Chromatic_Aberration__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Color_Chromatic_Aberration__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Color_Chromatic_Aberration__VTable vtable;
    };

    struct CameraFilterPack_Color_Contrast__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Contrast;
    };

    struct CameraFilterPack_Color_Contrast {
        struct CameraFilterPack_Color_Contrast__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Color_Contrast__Fields fields;
    };

    struct CameraFilterPack_Color_Contrast__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Color_Contrast__StaticFields {
        float ChangeContrast;
    };

    struct CameraFilterPack_Color_Contrast__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Color_Contrast__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Color_Contrast__VTable vtable;
    };

    struct CameraFilterPack_Color_GrayScale__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
    };

    struct CameraFilterPack_Color_GrayScale {
        struct CameraFilterPack_Color_GrayScale__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Color_GrayScale__Fields fields;
    };

    struct CameraFilterPack_Color_GrayScale__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Color_GrayScale__StaticFields {
    };

    struct CameraFilterPack_Color_GrayScale__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Color_GrayScale__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Color_GrayScale__VTable vtable;
    };

    struct CameraFilterPack_Color_Invert__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
    };

    struct CameraFilterPack_Color_Invert {
        struct CameraFilterPack_Color_Invert__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Color_Invert__Fields fields;
    };

    struct CameraFilterPack_Color_Invert__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Color_Invert__StaticFields {
    };

    struct CameraFilterPack_Color_Invert__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Color_Invert__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Color_Invert__VTable vtable;
    };

    struct CameraFilterPack_Color_Noise__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Noise;
    };

    struct CameraFilterPack_Color_Noise {
        struct CameraFilterPack_Color_Noise__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Color_Noise__Fields fields;
    };

    struct CameraFilterPack_Color_Noise__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Color_Noise__StaticFields {
        float ChangeNoise;
    };

    struct CameraFilterPack_Color_Noise__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Color_Noise__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Color_Noise__VTable vtable;
    };

    struct CameraFilterPack_Color_RGB__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        struct Color ColorRGB;
    };

    struct CameraFilterPack_Color_RGB {
        struct CameraFilterPack_Color_RGB__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Color_RGB__Fields fields;
    };

    struct CameraFilterPack_Color_RGB__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Color_RGB__StaticFields {
        struct Color ChangeColorRGB;
    };

    struct CameraFilterPack_Color_RGB__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Color_RGB__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Color_RGB__VTable vtable;
    };

    struct CameraFilterPack_Color_Sepia__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
    };

    struct CameraFilterPack_Color_Sepia {
        struct CameraFilterPack_Color_Sepia__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Color_Sepia__Fields fields;
    };

    struct CameraFilterPack_Color_Sepia__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Color_Sepia__StaticFields {
    };

    struct CameraFilterPack_Color_Sepia__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Color_Sepia__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Color_Sepia__VTable vtable;
    };

    struct CameraFilterPack_Color_Switching__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        int32_t Color;
    };

    struct CameraFilterPack_Color_Switching {
        struct CameraFilterPack_Color_Switching__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Color_Switching__Fields fields;
    };

    struct CameraFilterPack_Color_Switching__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Color_Switching__StaticFields {
        int32_t ChangeColor;
    };

    struct CameraFilterPack_Color_Switching__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Color_Switching__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Color_Switching__VTable vtable;
    };

    struct CameraFilterPack_Color_YUV__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float _Y;
        float _U;
        float _V;
    };

    struct CameraFilterPack_Color_YUV {
        struct CameraFilterPack_Color_YUV__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Color_YUV__Fields fields;
    };

    struct CameraFilterPack_Color_YUV__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Color_YUV__StaticFields {
        float Y;
        float U;
        float V;
    };

    struct CameraFilterPack_Color_YUV__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Color_YUV__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Color_YUV__VTable vtable;
    };

    struct CameraFilterPack_Colors_Adjust_ColorRGB__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Red;
        float Green;
        float Blue;
        float Brightness;
    };

    struct CameraFilterPack_Colors_Adjust_ColorRGB {
        struct CameraFilterPack_Colors_Adjust_ColorRGB__Class* klass;
        MonitorData* monitor;
        struct CameraFilterPack_Colors_Adjust_ColorRGB__Fields fields;
    };

    struct CameraFilterPack_Colors_Adjust_ColorRGB__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CameraFilterPack_Colors_Adjust_ColorRGB__StaticFields {
        float ChangeValue;
        float ChangeValue2;
        float ChangeValue3;
        float ChangeValue4;
    };

    struct CameraFilterPack_Colors_Adjust_ColorRGB__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFilterPack_Colors_Adjust_ColorRGB__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFilterPack_Colors_Adjust_ColorRGB__VTable vtable;
    };

    struct CameraFilterPack_Colors_Adjust_FullColors__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* SCShader;
        float TimeX;
        struct Material* SCMaterial;
        float Red_R;
        float Red_G;
        float Red_B;
        float Red_Constant;
        float Green_R;
        float Green_G;
        float Green_B;
        float Green_Constant;
        float Blue_R;
        float Blue_G;
        float Blue_B;
        float Blue_Constant;
    };

} // namespace app
