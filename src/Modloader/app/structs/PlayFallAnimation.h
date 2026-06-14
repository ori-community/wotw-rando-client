#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFallAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFallAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFallAnimation_DEFINED)
#include <Modloader/app/structs/PlayFallAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFallAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFallAnimation_DEFINED
struct PlayFallAnimation__Class;
struct PlayFallAnimation {
    struct PlayFallAnimation__Class* klass;
    MonitorData* monitor;
    struct PlayFallAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFallAnimation_FWDDECL)
#define IL2CPP_STRUCT_PlayFallAnimation_FWDDECL
#include <Modloader/app/structs/PlayFallAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFallAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFallAnimation_DEFINED) && !defined(IL2CPP_STRUCT_PlayFallAnimation_FWDDECL)
#include <Modloader/app/structs/PlayFallAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFallAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
