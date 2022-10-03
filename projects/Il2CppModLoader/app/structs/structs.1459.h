namespace app {
    struct IClipGroup {
        struct IClipGroup__Class* klass;
        MonitorData* monitor;
    };

    struct IClipGroup__VTable {
        VirtualInvokeData UpdateEntries;
    };

    struct IClipGroup__StaticFields {
    };

    struct IClipGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IClipGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IClipGroup__VTable vtable;
    };

    struct ShaderID_BrightnessContrastGamma {
        struct ShaderID_BrightnessContrastGamma__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_BrightnessContrastGamma__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_BrightnessContrastGamma__StaticFields {
        int32_t _BCG;
        int32_t _Coeffs;
    };

    struct ShaderID_BrightnessContrastGamma__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_BrightnessContrastGamma__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_BrightnessContrastGamma__VTable vtable;
    };

    struct BrowserNative {
        struct BrowserNative__Class* klass;
        MonitorData* monitor;
    };

    struct BrowserNative__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BrowserNative__StaticFields {
        bool _NativeLoaded_k__BackingField;
        bool _SymbolsLoaded_k__BackingField;
        struct Object* symbolsLock;
        struct List_1_System_String_* commandLineSwitches;
        struct WebResources* webResources;
        bool isAppDomainUnloading;
        struct String* _profilePath;
        void* moduleHandle;
        struct BrowserNative_Calltype_zfb_noop* zfb_noop;
        struct BrowserNative_Calltype_zfb_flatColorTexture* zfb_flatColorTexture;
        struct BrowserNative_Calltype_zfb_copyToColor32* zfb_copyToColor32;
        struct BrowserNative_Calltype_zfb_free* zfb_free;
        struct BrowserNative_Calltype_zfb_memcpy* zfb_memcpy;
        struct BrowserNative_Calltype_zfb_getVersion* zfb_getVersion;
        struct BrowserNative_Calltype_zfb_setDebugFunc* zfb_setDebugFunc;
        struct BrowserNative_Calltype_zfb_setLocalRequestHandler* zfb_setLocalRequestHandler;
        struct BrowserNative_Calltype_zfb_sendRequestHeaders* zfb_sendRequestHeaders;
        struct BrowserNative_Calltype_zfb_sendRequestData* zfb_sendRequestData;
        struct BrowserNative_Calltype_zfb_setCallbacksEnabled* zfb_setCallbacksEnabled;
        struct BrowserNative_Calltype_zfb_destroyAllBrowsers* zfb_destroyAllBrowsers;
        struct BrowserNative_Calltype_zfb_addCLISwitch* zfb_addCLISwitch;
        struct BrowserNative_Calltype_zfb_init* zfb_init;
        struct BrowserNative_Calltype_zfb_shutdown* zfb_shutdown;
        struct BrowserNative_Calltype_zfb_createBrowser* zfb_createBrowser;
        struct BrowserNative_Calltype_zfb_numBrowsers* zfb_numBrowsers;
        struct BrowserNative_Calltype_zfb_destroyBrowser* zfb_destroyBrowser;
        struct BrowserNative_Calltype_zfb_tick* zfb_tick;
        struct BrowserNative_Calltype_zfb_setReadyCallback* zfb_setReadyCallback;
        struct BrowserNative_Calltype_zfb_resize* zfb_resize;
        struct BrowserNative_Calltype_zfb_setOverlay* zfb_setOverlay;
        struct BrowserNative_Calltype_zfb_getImage* zfb_getImage;
        struct BrowserNative_Calltype_zfb_registerNavStateCallback* zfb_registerNavStateCallback;
        struct BrowserNative_Calltype_zfb_goToURL* zfb_goToURL;
        struct BrowserNative_Calltype_zfb_goToHTML* zfb_goToHTML;
        struct BrowserNative_Calltype_zfb_doNav* zfb_doNav;
        struct BrowserNative_Calltype_zfb_setZoom* zfb_setZoom;
        struct BrowserNative_Calltype_zfb_changeLoading* zfb_changeLoading;
        struct BrowserNative_Calltype_zfb_showDevTools* zfb_showDevTools;
        struct BrowserNative_Calltype_zfb_setFocused* zfb_setFocused;
        struct BrowserNative_Calltype_zfb_mouseMove* zfb_mouseMove;
        struct BrowserNative_Calltype_zfb_mouseButton* zfb_mouseButton;
        struct BrowserNative_Calltype_zfb_mouseScroll* zfb_mouseScroll;
        struct BrowserNative_Calltype_zfb_keyEvent* zfb_keyEvent;
        struct BrowserNative_Calltype_zfb_characterEvent* zfb_characterEvent;
        struct BrowserNative_Calltype_zfb_registerConsoleCallback* zfb_registerConsoleCallback;
        struct BrowserNative_Calltype_zfb_evalJS* zfb_evalJS;
        struct BrowserNative_Calltype_zfb_registerJSCallback* zfb_registerJSCallback;
        struct BrowserNative_Calltype_zfb_registerChangeCallback* zfb_registerChangeCallback;
        struct BrowserNative_Calltype_zfb_getMouseCursor* zfb_getMouseCursor;
        struct BrowserNative_Calltype_zfb_getMouseCustomCursor* zfb_getMouseCustomCursor;
        struct BrowserNative_Calltype_zfb_registerDialogCallback* zfb_registerDialogCallback;
        struct BrowserNative_Calltype_zfb_sendDialogResults* zfb_sendDialogResults;
        struct BrowserNative_Calltype_zfb_registerPopupCallback* zfb_registerPopupCallback;
        struct BrowserNative_Calltype_zfb_registerContextMenuCallback* zfb_registerContextMenuCallback;
        struct BrowserNative_Calltype_zfb_sendContextMenuResults* zfb_sendContextMenuResults;
        struct BrowserNative_Calltype_zfb_sendCommandToFocusedFrame* zfb_sendCommandToFocusedFrame;
        struct BrowserNative_Calltype_zfb_getCookies* zfb_getCookies;
        struct BrowserNative_Calltype_zfb_editCookie* zfb_editCookie;
        struct BrowserNative_Calltype_zfb_clearCookies* zfb_clearCookies;
        struct BrowserNative_Calltype_zfb_downloadCommand* zfb_downloadCommand;
    };

    struct BrowserNative__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BrowserNative__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BrowserNative__VTable vtable;
    };

    struct KeyMappings {
        struct KeyMappings__Class* klass;
        MonitorData* monitor;
    };

    struct KeyMappings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyMappings__StaticFields {
        struct Dictionary_2_UnityEngine_KeyCode_System_Int32_* mappings;
        struct Dictionary_2_System_Int32_UnityEngine_KeyCode_* reverseMappings;
    };

    struct KeyMappings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyMappings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyMappings__VTable vtable;
    };

    struct DateTimeUtils {
        struct DateTimeUtils__Class* klass;
        MonitorData* monitor;
    };

    struct DateTimeUtils__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DateTimeUtils__StaticFields {
        int64_t InitialJavaScriptDateTicks;
        struct Int32__Array* DaysToMonth365;
        struct Int32__Array* DaysToMonth366;
    };

    struct DateTimeUtils__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DateTimeUtils__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DateTimeUtils__VTable vtable;
    };

    struct IEnumerator_1_System_IO_FileInfo_ {
        struct IEnumerator_1_System_IO_FileInfo___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_System_IO_FileInfo___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_IO_FileInfo___StaticFields {
    };

    struct IEnumerator_1_System_IO_FileInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_IO_FileInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_IO_FileInfo___VTable vtable;
    };

    struct BuilderInfo {
        struct BuilderInfo__Class* klass;
        MonitorData* monitor;
    };

    struct BuilderInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BuilderInfo__StaticFields {
        bool m_isSimulatingBuild;
        bool m_isBuilding;
        bool m_isCookingBuild;
        bool m_isExperimentalBuild;
        bool m_checkedExperimentalEnvVar;
    };

    struct BuilderInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuilderInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuilderInfo__VTable vtable;
    };

    struct ButtonIconUtility {
        struct ButtonIconUtility__Class* klass;
        MonitorData* monitor;
    };

    struct ButtonIconUtility__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ButtonIconUtility__StaticFields {
        struct Dictionary_2_UnityEngine_KeyCode_System_String_* m_keycodeToIconString;
        struct Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_* m_controllerButtonToIconString;
        struct Dictionary_2_frameworks_Switch_Button_System_String_* m_switchButtonToIconString;
        struct Dictionary_2_XboxOneController_Button_System_String_* m_xboxOneControllerButtonToIconString;
        struct Dictionary_2_XboxOneController_Axis_System_String_* m_xboxOneControllerAxisToIconString;
        struct Dictionary_2_frameworks_Switch_Axis_System_String_* m_switchControllerAxisToIconString;
    };

    struct ButtonIconUtility__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ButtonIconUtility__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ButtonIconUtility__VTable vtable;
    };

    struct CCDistanceMapGenerator {
        struct CCDistanceMapGenerator__Class* klass;
        MonitorData* monitor;
    };

    struct CCDistanceMapGenerator_Pixel__Array {
        struct CCDistanceMapGenerator_Pixel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CCDistanceMapGenerator_Pixel* vector[32];
    };

    struct CCDistanceMapGenerator_Pixel__Array__VTable {
    };

    struct CCDistanceMapGenerator_Pixel__Array__StaticFields {
    };

    struct CCDistanceMapGenerator_Pixel__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CCDistanceMapGenerator_Pixel__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CCDistanceMapGenerator_Pixel__Array__VTable vtable;
    };

    struct CCDistanceMapGenerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CCDistanceMapGenerator__StaticFields {
        int32_t width;
        int32_t height;
        struct CCDistanceMapGenerator_Pixel__Array* pixels;
    };

    struct CCDistanceMapGenerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CCDistanceMapGenerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CCDistanceMapGenerator__VTable vtable;
    };

    struct CCText__Array {
        struct CCText__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CCText* vector[32];
    };

    struct CCText__Array__VTable {
    };

    struct CCText__Array__StaticFields {
    };

    struct CCText__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CCText__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CCText__Array__VTable vtable;
    };

    struct CCStringBuilderUtility {
        struct CCStringBuilderUtility__Class* klass;
        MonitorData* monitor;
    };

    struct CCStringBuilderUtility__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CCStringBuilderUtility__StaticFields {
        uint16_t decimalSeparator;
        uint16_t groupSeparator;
        uint16_t padding;
    };

    struct CCStringBuilderUtility__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CCStringBuilderUtility__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CCStringBuilderUtility__VTable vtable;
    };

    struct ShaderID_CC_AnalogTV {
        struct ShaderID_CC_AnalogTV__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_AnalogTV__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_AnalogTV__StaticFields {
        int32_t _phase;
        int32_t _grayscale;
        int32_t _noiseIntensity;
        int32_t _scanlinesIntensity;
        int32_t _scanlinesCount;
        int32_t _distortion;
        int32_t _cubicDistortion;
        int32_t _scale;
    };

    struct ShaderID_CC_AnalogTV__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_AnalogTV__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_AnalogTV__VTable vtable;
    };

    struct ShaderID_CC_BleachBypass {
        struct ShaderID_CC_BleachBypass__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_BleachBypass__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_BleachBypass__StaticFields {
        int32_t _amount;
    };

    struct ShaderID_CC_BleachBypass__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_BleachBypass__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_BleachBypass__VTable vtable;
    };

    struct ShaderID_CC_BrightnessContrastGamma {
        struct ShaderID_CC_BrightnessContrastGamma__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_BrightnessContrastGamma__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_BrightnessContrastGamma__StaticFields {
        int32_t _rCoeff;
        int32_t _gCoeff;
        int32_t _bCoeff;
        int32_t _brightness;
        int32_t _contrast;
        int32_t _gamma;
    };

    struct ShaderID_CC_BrightnessContrastGamma__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_BrightnessContrastGamma__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_BrightnessContrastGamma__VTable vtable;
    };

    struct ShaderID_CC_ChannelMixer {
        struct ShaderID_CC_ChannelMixer__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_ChannelMixer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_ChannelMixer__StaticFields {
        int32_t _red;
        int32_t _green;
        int32_t _blue;
        int32_t _constant;
    };

    struct ShaderID_CC_ChannelMixer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_ChannelMixer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_ChannelMixer__VTable vtable;
    };

    struct ShaderID_CC_DoubleVision {
        struct ShaderID_CC_DoubleVision__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_DoubleVision__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_DoubleVision__StaticFields {
        int32_t _displace;
        int32_t _amount;
    };

    struct ShaderID_CC_DoubleVision__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_DoubleVision__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_DoubleVision__VTable vtable;
    };

    struct ShaderID_CC_FastVignette {
        struct ShaderID_CC_FastVignette__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_FastVignette__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_FastVignette__StaticFields {
        int32_t _sharpness;
        int32_t _darkness;
    };

    struct ShaderID_CC_FastVignette__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_FastVignette__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_FastVignette__VTable vtable;
    };

    struct ShaderID_CC_Frost {
        struct ShaderID_CC_Frost__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_Frost__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_Frost__StaticFields {
        int32_t _scale;
        int32_t _enableVignette;
        int32_t _sharpness;
        int32_t _darkness;
    };

    struct ShaderID_CC_Frost__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_Frost__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_Frost__VTable vtable;
    };

    struct ShaderID_CC_Grayscale {
        struct ShaderID_CC_Grayscale__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_Grayscale__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_Grayscale__StaticFields {
        int32_t _rLum;
        int32_t _gLum;
        int32_t _bLum;
        int32_t _amount;
    };

    struct ShaderID_CC_Grayscale__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_Grayscale__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_Grayscale__VTable vtable;
    };

    struct ShaderID_CC_HueSaturationValue {
        struct ShaderID_CC_HueSaturationValue__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_HueSaturationValue__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_HueSaturationValue__StaticFields {
        int32_t _hue;
        int32_t _saturation;
        int32_t _value;
    };

    struct ShaderID_CC_HueSaturationValue__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_HueSaturationValue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_HueSaturationValue__VTable vtable;
    };

    struct ShaderID_CC_Led {
        struct ShaderID_CC_Led__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_Led__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_Led__StaticFields {
        int32_t _scale;
        int32_t _brightness;
    };

    struct ShaderID_CC_Led__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_Led__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_Led__VTable vtable;
    };

    struct ShaderID_CC_Levels {
        struct ShaderID_CC_Levels__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_Levels__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_Levels__StaticFields {
        int32_t _inputMin;
        int32_t _inputMax;
        int32_t _inputGamma;
        int32_t _outputMin;
        int32_t _outputMax;
    };

    struct ShaderID_CC_Levels__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_Levels__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_Levels__VTable vtable;
    };

    struct ShaderID_CC_PhotoFilter {
        struct ShaderID_CC_PhotoFilter__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_PhotoFilter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_PhotoFilter__StaticFields {
        int32_t _rgb;
        int32_t _density;
    };

    struct ShaderID_CC_PhotoFilter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_PhotoFilter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_PhotoFilter__VTable vtable;
    };

    struct ShaderID_CC_Pixelate {
        struct ShaderID_CC_Pixelate__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_Pixelate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_Pixelate__StaticFields {
        int32_t _scale;
    };

    struct ShaderID_CC_Pixelate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_Pixelate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_Pixelate__VTable vtable;
    };

    struct ShaderID_CC_Posterize {
        struct ShaderID_CC_Posterize__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_Posterize__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_Posterize__StaticFields {
        int32_t _levels;
    };

    struct ShaderID_CC_Posterize__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_Posterize__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_Posterize__VTable vtable;
    };

    struct ShaderID_CC_RadialBlur {
        struct ShaderID_CC_RadialBlur__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_RadialBlur__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_RadialBlur__StaticFields {
        int32_t amount;
        int32_t center;
    };

    struct ShaderID_CC_RadialBlur__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_RadialBlur__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_RadialBlur__VTable vtable;
    };

    struct ShaderID_CC_Threshold {
        struct ShaderID_CC_Threshold__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_Threshold__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_Threshold__StaticFields {
        int32_t _threshold;
    };

    struct ShaderID_CC_Threshold__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_Threshold__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_Threshold__VTable vtable;
    };

    struct ShaderID_CC_Vibrance {
        struct ShaderID_CC_Vibrance__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_CC_Vibrance__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_CC_Vibrance__StaticFields {
        int32_t _amount;
    };

    struct ShaderID_CC_Vibrance__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_CC_Vibrance__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_CC_Vibrance__VTable vtable;
    };

    struct CFNetwork {
        struct CFNetwork__Class* klass;
        MonitorData* monitor;
    };

    struct CFNetwork__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CFNetwork__StaticFields {
        struct Object* lock_obj;
        struct Queue_1_Mono_Net_CFNetwork_GetProxyData_* get_proxy_queue;
        struct AutoResetEvent* proxy_event;
    };

    struct CFNetwork__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CFNetwork__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CFNetwork__VTable vtable;
    };

    struct CSteamAPIContext {
        struct CSteamAPIContext__Class* klass;
        MonitorData* monitor;
    };

    struct CSteamAPIContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CSteamAPIContext__StaticFields {
        void* m_pSteamClient;
        void* m_pSteamUser;
        void* m_pSteamFriends;
        void* m_pSteamUtils;
        void* m_pSteamMatchmaking;
        void* m_pSteamUserStats;
        void* m_pSteamApps;
        void* m_pSteamMatchmakingServers;
        void* m_pSteamNetworking;
        void* m_pSteamRemoteStorage;
        void* m_pSteamScreenshots;
        void* m_pSteamGameSearch;
        void* m_pSteamHTTP;
        void* m_pController;
        void* m_pSteamUGC;
        void* m_pSteamAppList;
        void* m_pSteamMusic;
        void* m_pSteamMusicRemote;
        void* m_pSteamHTMLSurface;
        void* m_pSteamInventory;
        void* m_pSteamVideo;
        void* m_pSteamParentalSettings;
        void* m_pSteamInput;
        void* m_pSteamParties;
        void* m_pSteamRemotePlay;
    };

    struct CSteamAPIContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CSteamAPIContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CSteamAPIContext__VTable vtable;
    };

    struct CSteamGameServerAPIContext {
        struct CSteamGameServerAPIContext__Class* klass;
        MonitorData* monitor;
    };

    struct CSteamGameServerAPIContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CSteamGameServerAPIContext__StaticFields {
        void* m_pSteamClient;
        void* m_pSteamGameServer;
        void* m_pSteamUtils;
        void* m_pSteamNetworking;
        void* m_pSteamGameServerStats;
        void* m_pSteamHTTP;
        void* m_pSteamInventory;
        void* m_pSteamUGC;
        void* m_pSteamApps;
    };

    struct CSteamGameServerAPIContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CSteamGameServerAPIContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CSteamGameServerAPIContext__VTable vtable;
    };

    struct Console {
        struct Console__Class* klass;
        MonitorData* monitor;
    };

    struct Console__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Console__StaticFields {
        struct TextWriter* stdout_1;
        struct TextWriter* stderr_1;
        struct TextReader* stdin_1;
        struct Encoding* inputEncoding;
        struct Encoding* outputEncoding;
        struct ConsoleCancelEventHandler* cancel_event;
        struct Console_InternalCancelHandler* cancel_handler;
    };

    struct Console__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Console__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Console__VTable vtable;
    };

    struct ConsoleDriver {
        struct ConsoleDriver__Class* klass;
        MonitorData* monitor;
    };

    struct ConsoleDriver__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConsoleDriver__StaticFields {
        struct IConsoleDriver* driver;
        bool is_console;
        bool called_isatty;
    };

    struct ConsoleDriver__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConsoleDriver__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConsoleDriver__VTable vtable;
    };

    struct CallSiteOps {
        struct CallSiteOps__Class* klass;
        MonitorData* monitor;
    };

    struct CallSiteOps__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CallSiteOps__StaticFields {
    };

} // namespace app
