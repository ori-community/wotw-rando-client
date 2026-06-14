#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoPlayer_TimeEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoPlayer_TimeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer_TimeEventHandler_DEFINED)
#include <Modloader/app/structs/VideoPlayer_TimeEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_VideoPlayer_TimeEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoPlayer_TimeEventHandler_DEFINED
struct VideoPlayer_TimeEventHandler__Class;
struct VideoPlayer_TimeEventHandler {
    struct VideoPlayer_TimeEventHandler__Class* klass;
    MonitorData* monitor;
    struct VideoPlayer_TimeEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoPlayer_TimeEventHandler_FWDDECL)
#define IL2CPP_STRUCT_VideoPlayer_TimeEventHandler_FWDDECL
#include <Modloader/app/structs/VideoPlayer_TimeEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_VideoPlayer_TimeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer_TimeEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_VideoPlayer_TimeEventHandler_FWDDECL)
#include <Modloader/app/structs/VideoPlayer_TimeEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoPlayer_TimeEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
