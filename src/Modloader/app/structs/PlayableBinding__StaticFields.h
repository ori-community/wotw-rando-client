#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableBinding__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableBinding__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableBinding__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PlayableBinding__StaticFields_DEFINED
struct PlayableBinding__Array;
struct PlayableBinding__StaticFields {
    struct PlayableBinding__Array* None;
    double DefaultDuration;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayableBinding__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PlayableBinding__StaticFields_FWDDECL
#include <Modloader/app/structs/PlayableBinding__Array.h>
#endif
#undef IL2CPP_STRUCT_PlayableBinding__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableBinding__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PlayableBinding__StaticFields_FWDDECL)
#include <Modloader/app/structs/PlayableBinding__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableBinding__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
