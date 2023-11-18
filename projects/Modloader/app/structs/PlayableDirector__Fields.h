#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableDirector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableDirector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableDirector__Fields_DEFINED)
#include <Modloader/app/structs/Behaviour__Fields.h>
#if defined(IL2CPP_STRUCT_Behaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayableDirector__Fields_DEFINED
struct Action_1_UnityEngine_Playables_PlayableDirector_;
struct PlayableDirector__Fields {
    struct Behaviour__Fields _;
    struct Action_1_UnityEngine_Playables_PlayableDirector_* played;
    struct Action_1_UnityEngine_Playables_PlayableDirector_* paused;
    struct Action_1_UnityEngine_Playables_PlayableDirector_* stopped;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableDirector__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayableDirector__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_Playables_PlayableDirector_.h>
#endif
#undef IL2CPP_STRUCT_PlayableDirector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableDirector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayableDirector__Fields_FWDDECL)
#include <Modloader/app/structs/PlayableDirector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableDirector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
