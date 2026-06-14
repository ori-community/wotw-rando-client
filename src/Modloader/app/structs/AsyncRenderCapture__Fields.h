#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncRenderCapture__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncRenderCapture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRenderCapture__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncRenderCapture__Fields_DEFINED
struct String;
struct Action_1_Int32_;
struct AsyncRenderCapture__Fields {
    struct MonoBehaviour__Fields _;
    struct String* m_outputPath;
    int32_t m_framesToRecord;
    struct Action_1_Int32_* m_onComplete;
    float m_deltaTime;
    int32_t _CaptureCount_k__BackingField;
    bool m_showFrameCount;
    int32_t m_startFrame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncRenderCapture__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsyncRenderCapture__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AsyncRenderCapture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRenderCapture__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncRenderCapture__Fields_FWDDECL)
#include <Modloader/app/structs/AsyncRenderCapture__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncRenderCapture__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
