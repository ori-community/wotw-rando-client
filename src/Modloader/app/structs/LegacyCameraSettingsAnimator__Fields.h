#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyCameraSettingsAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyCameraSettingsAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyCameraSettingsAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyCameraSettingsAnimator__Fields_DEFINED
struct CameraSettingsAsset;
struct LegacyCameraSettingsAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct CameraSettingsAsset* CameraSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyCameraSettingsAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyCameraSettingsAnimator__Fields_FWDDECL
#include <Modloader/app/structs/CameraSettingsAsset.h>
#endif
#undef IL2CPP_STRUCT_LegacyCameraSettingsAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyCameraSettingsAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyCameraSettingsAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyCameraSettingsAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyCameraSettingsAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
