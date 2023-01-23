#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabHttp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabHttp_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabHttp_DEFINED)
#include <Modloader/app/structs/PlayFabHttp__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabHttp__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabHttp_DEFINED
struct PlayFabHttp__Class;
struct PlayFabHttp {
    struct PlayFabHttp__Class* klass;
    MonitorData* monitor;
    struct PlayFabHttp__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabHttp_FWDDECL)
#define IL2CPP_STRUCT_PlayFabHttp_FWDDECL
#include <Modloader/app/structs/PlayFabHttp__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabHttp_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabHttp_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabHttp_FWDDECL)
#include <Modloader/app/structs/PlayFabHttp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabHttp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
