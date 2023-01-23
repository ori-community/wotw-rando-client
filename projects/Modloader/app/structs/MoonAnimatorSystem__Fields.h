#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimatorSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimatorSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorSystem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/PlayableGraph.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_PlayableGraph_DEFINED)
#define IL2CPP_STRUCT_MoonAnimatorSystem__Fields_DEFINED
struct List_1_Moon_MoonAnimator_;
struct Queue_1_Moon_MoonAnimator_;
struct MoonAnimatorSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct PlayableGraph _PlayableGraph_k__BackingField;
    struct List_1_Moon_MoonAnimator_* m_animators;
    struct Queue_1_Moon_MoonAnimator_* m_unregisterQueue;
    int32_t m_processedAnimatorIndex;
    bool m_updating;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimatorSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimatorSystem__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_.h>
#include <Modloader/app/structs/Queue_1_Moon_MoonAnimator_.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimatorSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimatorSystem__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimatorSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimatorSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
