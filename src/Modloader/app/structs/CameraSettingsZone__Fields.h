#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSettingsZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSettingsZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingsZone__Fields_DEFINED)
#include <Modloader/app/structs/CameraSettingsZone_Direction__Enum.h>
#include <Modloader/app/structs/CameraSettingsZone_ZoneMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CameraSettingsZone_ZoneMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_CameraSettingsZone_Direction__Enum_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_CameraSettingsZone__Fields_DEFINED
struct Condition_1;
struct CameraSettingsAsset;
struct Gradient;
struct CameraSettings;
struct CameraSettingsZone__Fields {
    struct MonoBehaviour__Fields _;
    CameraSettingsZone_ZoneMode__Enum Mode;

    CameraSettingsZone_Direction__Enum GradientDirection;

    struct Condition_1* Condition;
    struct CameraSettingsAsset* Settings;
    struct Gradient* FogGradient;
    struct Gradient* MultiplyFogGradient;
    float FogRange;
    struct CameraSettingsAsset* Settings2;
    struct Gradient* FogGradient2;
    struct Gradient* MultiplyFogGradient2;
    float FogRange2;
    float LeftPadding;
    float RightPadding;
    float TopPadding;
    float BottomPadding;
    float Duration;
    float AnimatedStrength;
    int32_t Priority;
    struct CameraSettings* m_settings;
    struct Rect m_area;
    float m_strength;
    bool m_isActive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSettingsZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraSettingsZone__Fields_FWDDECL
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Gradient.h>
#endif
#undef IL2CPP_STRUCT_CameraSettingsZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettingsZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraSettingsZone__Fields_FWDDECL)
#include <Modloader/app/structs/CameraSettingsZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSettingsZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
