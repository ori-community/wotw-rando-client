#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoPlayer_EventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoPlayer_EventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer_EventHandler_DEFINED)
#include <Modloader/app/structs/VideoPlayer_EventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_VideoPlayer_EventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoPlayer_EventHandler_DEFINED
struct VideoPlayer_EventHandler__Class;
struct VideoPlayer_EventHandler {
    struct VideoPlayer_EventHandler__Class* klass;
    MonitorData* monitor;
    struct VideoPlayer_EventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoPlayer_EventHandler_FWDDECL)
#define IL2CPP_STRUCT_VideoPlayer_EventHandler_FWDDECL
#include <Modloader/app/structs/VideoPlayer_EventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_VideoPlayer_EventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer_EventHandler_DEFINED) && !defined(IL2CPP_STRUCT_VideoPlayer_EventHandler_FWDDECL)
#include <Modloader/app/structs/VideoPlayer_EventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoPlayer_EventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
