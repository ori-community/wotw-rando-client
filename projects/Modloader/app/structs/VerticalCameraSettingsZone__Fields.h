#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerticalCameraSettingsZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerticalCameraSettingsZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerticalCameraSettingsZone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/VerticalCameraSettingsZone_Mode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_VerticalCameraSettingsZone_Mode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_VerticalCameraSettingsZone__Fields_DEFINED
struct CameraSettings;
struct List_1_VerticalCameraSettingsZone_CameraPostMetaData_;
struct VerticalCameraSettingsZone__Fields {
    struct MonoBehaviour__Fields _;
    VerticalCameraSettingsZone_Mode__Enum mode;

    float Time;
    float Duration;
    struct CameraSettings* m_currentSettings;
    struct Rect m_bounds;
    float _Weight_k__BackingField;
    bool m_jobsQueued;
    struct List_1_VerticalCameraSettingsZone_CameraPostMetaData_* Items;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerticalCameraSettingsZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerticalCameraSettingsZone__Fields_FWDDECL
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/List_1_VerticalCameraSettingsZone_CameraPostMetaData_.h>
#endif
#undef IL2CPP_STRUCT_VerticalCameraSettingsZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerticalCameraSettingsZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerticalCameraSettingsZone__Fields_FWDDECL)
#include <Modloader/app/structs/VerticalCameraSettingsZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerticalCameraSettingsZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
