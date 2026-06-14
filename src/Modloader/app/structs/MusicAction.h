#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MusicAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MusicAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicAction_DEFINED)
#include <Modloader/app/structs/MusicAction__Fields.h>
#if defined(IL2CPP_STRUCT_MusicAction__Fields_DEFINED)
#define IL2CPP_STRUCT_MusicAction_DEFINED
struct MusicAction__Class;
struct MusicAction {
    struct MusicAction__Class* klass;
    MonitorData* monitor;
    struct MusicAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MusicAction_FWDDECL)
#define IL2CPP_STRUCT_MusicAction_FWDDECL
#include <Modloader/app/structs/MusicAction__Class.h>
#endif
#undef IL2CPP_STRUCT_MusicAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicAction_DEFINED) && !defined(IL2CPP_STRUCT_MusicAction_FWDDECL)
#include <Modloader/app/structs/MusicAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MusicAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
