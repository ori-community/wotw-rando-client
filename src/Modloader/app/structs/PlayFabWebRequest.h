#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabWebRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabWebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabWebRequest_DEFINED)
#include <Modloader/app/structs/PlayFabWebRequest__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabWebRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabWebRequest_DEFINED
struct PlayFabWebRequest__Class;
struct PlayFabWebRequest {
    struct PlayFabWebRequest__Class* klass;
    MonitorData* monitor;
    struct PlayFabWebRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabWebRequest_FWDDECL)
#define IL2CPP_STRUCT_PlayFabWebRequest_FWDDECL
#include <Modloader/app/structs/PlayFabWebRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabWebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabWebRequest_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabWebRequest_FWDDECL)
#include <Modloader/app/structs/PlayFabWebRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabWebRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
