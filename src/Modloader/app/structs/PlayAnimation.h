#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimation_DEFINED)
#include <Modloader/app/structs/PlayAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_PlayAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayAnimation_DEFINED
struct PlayAnimation__Class;
struct PlayAnimation {
    struct PlayAnimation__Class* klass;
    MonitorData* monitor;
    struct PlayAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayAnimation_FWDDECL)
#define IL2CPP_STRUCT_PlayAnimation_FWDDECL
#include <Modloader/app/structs/PlayAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimation_DEFINED) && !defined(IL2CPP_STRUCT_PlayAnimation_FWDDECL)
#include <Modloader/app/structs/PlayAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
