#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayLoopAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayLoopAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayLoopAnimation_DEFINED)
#include <Modloader/app/structs/PlayLoopAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_PlayLoopAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayLoopAnimation_DEFINED
struct PlayLoopAnimation__Class;
struct PlayLoopAnimation {
    struct PlayLoopAnimation__Class* klass;
    MonitorData* monitor;
    struct PlayLoopAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayLoopAnimation_FWDDECL)
#define IL2CPP_STRUCT_PlayLoopAnimation_FWDDECL
#include <Modloader/app/structs/PlayLoopAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayLoopAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayLoopAnimation_DEFINED) && !defined(IL2CPP_STRUCT_PlayLoopAnimation_FWDDECL)
#include <Modloader/app/structs/PlayLoopAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayLoopAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
