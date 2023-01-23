#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabError_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabError_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabError_DEFINED)
#include <Modloader/app/structs/PlayFabError__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabError__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabError_DEFINED
struct PlayFabError__Class;
struct PlayFabError {
    struct PlayFabError__Class* klass;
    MonitorData* monitor;
    struct PlayFabError__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabError_FWDDECL)
#define IL2CPP_STRUCT_PlayFabError_FWDDECL
#include <Modloader/app/structs/PlayFabError__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabError_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabError_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabError_FWDDECL)
#include <Modloader/app/structs/PlayFabError.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabError.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
