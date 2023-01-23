#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayAnimationOnStart_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayAnimationOnStart_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimationOnStart_DEFINED)
#include <Modloader/app/structs/PlayAnimationOnStart__Fields.h>
#if defined(IL2CPP_STRUCT_PlayAnimationOnStart__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayAnimationOnStart_DEFINED
struct PlayAnimationOnStart__Class;
struct PlayAnimationOnStart {
    struct PlayAnimationOnStart__Class* klass;
    MonitorData* monitor;
    struct PlayAnimationOnStart__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayAnimationOnStart_FWDDECL)
#define IL2CPP_STRUCT_PlayAnimationOnStart_FWDDECL
#include <Modloader/app/structs/PlayAnimationOnStart__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayAnimationOnStart_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimationOnStart_DEFINED) && !defined(IL2CPP_STRUCT_PlayAnimationOnStart_FWDDECL)
#include <Modloader/app/structs/PlayAnimationOnStart.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayAnimationOnStart.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
