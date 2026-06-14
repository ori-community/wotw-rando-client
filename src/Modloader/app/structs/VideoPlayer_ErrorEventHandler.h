#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoPlayer_ErrorEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoPlayer_ErrorEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer_ErrorEventHandler_DEFINED)
#include <Modloader/app/structs/VideoPlayer_ErrorEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_VideoPlayer_ErrorEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoPlayer_ErrorEventHandler_DEFINED
struct VideoPlayer_ErrorEventHandler__Class;
struct VideoPlayer_ErrorEventHandler {
    struct VideoPlayer_ErrorEventHandler__Class* klass;
    MonitorData* monitor;
    struct VideoPlayer_ErrorEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoPlayer_ErrorEventHandler_FWDDECL)
#define IL2CPP_STRUCT_VideoPlayer_ErrorEventHandler_FWDDECL
#include <Modloader/app/structs/VideoPlayer_ErrorEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_VideoPlayer_ErrorEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer_ErrorEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_VideoPlayer_ErrorEventHandler_FWDDECL)
#include <Modloader/app/structs/VideoPlayer_ErrorEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoPlayer_ErrorEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
