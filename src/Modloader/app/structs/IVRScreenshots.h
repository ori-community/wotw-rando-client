#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRScreenshots_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRScreenshots_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRScreenshots_DEFINED)
#define IL2CPP_STRUCT_IVRScreenshots_DEFINED
struct IVRScreenshots_RequestScreenshot;
struct IVRScreenshots_HookScreenshot;
struct IVRScreenshots_GetScreenshotPropertyType;
struct IVRScreenshots_GetScreenshotPropertyFilename;
struct IVRScreenshots_UpdateScreenshotProgress;
struct IVRScreenshots_TakeStereoScreenshot;
struct IVRScreenshots_SubmitScreenshot;
struct IVRScreenshots {
    struct IVRScreenshots_RequestScreenshot* RequestScreenshot;
    struct IVRScreenshots_HookScreenshot* HookScreenshot;
    struct IVRScreenshots_GetScreenshotPropertyType* GetScreenshotPropertyType;
    struct IVRScreenshots_GetScreenshotPropertyFilename* GetScreenshotPropertyFilename;
    struct IVRScreenshots_UpdateScreenshotProgress* UpdateScreenshotProgress;
    struct IVRScreenshots_TakeStereoScreenshot* TakeStereoScreenshot;
    struct IVRScreenshots_SubmitScreenshot* SubmitScreenshot;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRScreenshots_FWDDECL)
#define IL2CPP_STRUCT_IVRScreenshots_FWDDECL
#include <Modloader/app/structs/IVRScreenshots_GetScreenshotPropertyFilename.h>
#include <Modloader/app/structs/IVRScreenshots_GetScreenshotPropertyType.h>
#include <Modloader/app/structs/IVRScreenshots_HookScreenshot.h>
#include <Modloader/app/structs/IVRScreenshots_RequestScreenshot.h>
#include <Modloader/app/structs/IVRScreenshots_SubmitScreenshot.h>
#include <Modloader/app/structs/IVRScreenshots_TakeStereoScreenshot.h>
#include <Modloader/app/structs/IVRScreenshots_UpdateScreenshotProgress.h>
#endif
#undef IL2CPP_STRUCT_IVRScreenshots_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRScreenshots_DEFINED) && !defined(IL2CPP_STRUCT_IVRScreenshots_FWDDECL)
#include <Modloader/app/structs/IVRScreenshots.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRScreenshots.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
