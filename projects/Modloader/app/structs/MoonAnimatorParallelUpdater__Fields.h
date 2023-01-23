#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimatorParallelUpdater__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimatorParallelUpdater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_PlayableGraph_DEFINED) && defined(IL2CPP_STRUCT_UpdateType__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonAnimatorParallelUpdater__Fields_DEFINED
struct MoonAnimatorParallelUpdater_AnimatorState__Array;
struct MoonAnimatorParallelUpdater__Fields {
    struct MonoBehaviour__Fields _;
    struct PlayableGraph m_playableGraph;
    struct MoonAnimatorParallelUpdater_AnimatorState__Array* m_animatorStates;
    int32_t m_validAnimatorStatesCount;
    UpdateType__Enum _UpdateType_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimatorParallelUpdater__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimatorParallelUpdater_AnimatorState__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimatorParallelUpdater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimatorParallelUpdater__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimatorParallelUpdater__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
