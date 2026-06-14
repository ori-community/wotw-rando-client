#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEvents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEvents_DEFINED)
#include <Modloader/app/structs/PlayFabEvents__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabEvents__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabEvents_DEFINED
struct PlayFabEvents__Class;
struct PlayFabEvents {
    struct PlayFabEvents__Class* klass;
    MonitorData* monitor;
    struct PlayFabEvents__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEvents_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEvents_FWDDECL
#include <Modloader/app/structs/PlayFabEvents__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEvents_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEvents_FWDDECL)
#include <Modloader/app/structs/PlayFabEvents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEvents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
