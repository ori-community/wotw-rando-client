#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabException_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabException_DEFINED)
#include <Modloader/app/structs/PlayFabException__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabException__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabException_DEFINED
struct PlayFabException__Class;
struct PlayFabException {
    struct PlayFabException__Class* klass;
    MonitorData* monitor;
    struct PlayFabException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabException_FWDDECL)
#define IL2CPP_STRUCT_PlayFabException_FWDDECL
#include <Modloader/app/structs/PlayFabException__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabException_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabException_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabException_FWDDECL)
#include <Modloader/app/structs/PlayFabException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
