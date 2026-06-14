#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer__Fields_DEFINED)
#include <Modloader/app/structs/Behaviour__Fields.h>
#if defined(IL2CPP_STRUCT_Behaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoPlayer__Fields_DEFINED
struct VideoPlayer_EventHandler;
struct VideoPlayer_ErrorEventHandler;
struct VideoPlayer_TimeEventHandler;
struct VideoPlayer_FrameReadyEventHandler;
struct VideoPlayer__Fields {
    struct Behaviour__Fields _;
    struct VideoPlayer_EventHandler* prepareCompleted;
    struct VideoPlayer_EventHandler* loopPointReached;
    struct VideoPlayer_EventHandler* started;
    struct VideoPlayer_EventHandler* frameDropped;
    struct VideoPlayer_ErrorEventHandler* errorReceived;
    struct VideoPlayer_EventHandler* seekCompleted;
    struct VideoPlayer_TimeEventHandler* clockResyncOccurred;
    struct VideoPlayer_FrameReadyEventHandler* frameReady;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_VideoPlayer__Fields_FWDDECL
#include <Modloader/app/structs/VideoPlayer_ErrorEventHandler.h>
#include <Modloader/app/structs/VideoPlayer_EventHandler.h>
#include <Modloader/app/structs/VideoPlayer_FrameReadyEventHandler.h>
#include <Modloader/app/structs/VideoPlayer_TimeEventHandler.h>
#endif
#undef IL2CPP_STRUCT_VideoPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VideoPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/VideoPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
