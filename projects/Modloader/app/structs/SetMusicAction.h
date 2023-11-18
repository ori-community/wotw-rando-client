#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetMusicAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetMusicAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMusicAction_DEFINED)
#include <Modloader/app/structs/SetMusicAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetMusicAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetMusicAction_DEFINED
struct SetMusicAction__Class;
struct SetMusicAction {
    struct SetMusicAction__Class* klass;
    MonitorData* monitor;
    struct SetMusicAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetMusicAction_FWDDECL)
#define IL2CPP_STRUCT_SetMusicAction_FWDDECL
#include <Modloader/app/structs/SetMusicAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetMusicAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMusicAction_DEFINED) && !defined(IL2CPP_STRUCT_SetMusicAction_FWDDECL)
#include <Modloader/app/structs/SetMusicAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetMusicAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
