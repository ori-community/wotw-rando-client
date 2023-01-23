#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayRandomSound_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayRandomSound_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayRandomSound_DEFINED)
#include <Modloader/app/structs/PlayRandomSound__Fields.h>
#if defined(IL2CPP_STRUCT_PlayRandomSound__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayRandomSound_DEFINED
struct PlayRandomSound__Class;
struct PlayRandomSound {
    struct PlayRandomSound__Class* klass;
    MonitorData* monitor;
    struct PlayRandomSound__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayRandomSound_FWDDECL)
#define IL2CPP_STRUCT_PlayRandomSound_FWDDECL
#include <Modloader/app/structs/PlayRandomSound__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayRandomSound_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayRandomSound_DEFINED) && !defined(IL2CPP_STRUCT_PlayRandomSound_FWDDECL)
#include <Modloader/app/structs/PlayRandomSound.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayRandomSound.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
