#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEmitEventRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEmitEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEmitEventRequest_DEFINED)
#include <Modloader/app/structs/PlayFabEmitEventRequest__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabEmitEventRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabEmitEventRequest_DEFINED
struct PlayFabEmitEventRequest__Class;
struct PlayFabEmitEventRequest {
    struct PlayFabEmitEventRequest__Class* klass;
    MonitorData* monitor;
    struct PlayFabEmitEventRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEmitEventRequest_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEmitEventRequest_FWDDECL
#include <Modloader/app/structs/PlayFabEmitEventRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEmitEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEmitEventRequest_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEmitEventRequest_FWDDECL)
#include <Modloader/app/structs/PlayFabEmitEventRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEmitEventRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
