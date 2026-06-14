#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerTransition__Fields_DEFINED)
#include <Modloader/app/structs/CutsceneTransition__Fields.h>
#if defined(IL2CPP_STRUCT_CutsceneTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerTransition__Fields_DEFINED
struct TimerTransition__Fields {
    struct CutsceneTransition__Fields _;
    float Time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimerTransition__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimerTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimerTransition__Fields_FWDDECL)
#include <Modloader/app/structs/TimerTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
