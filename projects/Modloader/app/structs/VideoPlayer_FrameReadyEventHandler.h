#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoPlayer_FrameReadyEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoPlayer_FrameReadyEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer_FrameReadyEventHandler_DEFINED)
#include <Modloader/app/structs/VideoPlayer_FrameReadyEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_VideoPlayer_FrameReadyEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoPlayer_FrameReadyEventHandler_DEFINED
struct VideoPlayer_FrameReadyEventHandler__Class;
struct VideoPlayer_FrameReadyEventHandler {
    struct VideoPlayer_FrameReadyEventHandler__Class* klass;
    MonitorData* monitor;
    struct VideoPlayer_FrameReadyEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoPlayer_FrameReadyEventHandler_FWDDECL)
#define IL2CPP_STRUCT_VideoPlayer_FrameReadyEventHandler_FWDDECL
#include <Modloader/app/structs/VideoPlayer_FrameReadyEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_VideoPlayer_FrameReadyEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer_FrameReadyEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_VideoPlayer_FrameReadyEventHandler_FWDDECL)
#include <Modloader/app/structs/VideoPlayer_FrameReadyEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoPlayer_FrameReadyEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
