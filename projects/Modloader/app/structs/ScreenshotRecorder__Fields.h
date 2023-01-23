#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotRecorder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotRecorder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotRecorder__Fields_DEFINED)
#include <Modloader/app/structs/DeltaTimeManager_ControllerType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_DEFINED)
#define IL2CPP_STRUCT_ScreenshotRecorder__Fields_DEFINED
struct String;
struct ScreenshotRecorder__Fields {
    struct MonoBehaviour__Fields _;
    DeltaTimeManager_ControllerType__Enum m_oldDeltaTimeType;

    int32_t m_recordingIndex;
    int32_t m_screenshotIndex;
    bool m_capturing;
    struct String* m_outputDirCached;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotRecorder__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotRecorder__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotRecorder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotRecorder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotRecorder__Fields_FWDDECL)
#include <Modloader/app/structs/ScreenshotRecorder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotRecorder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
