#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossFight1StartBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1StartBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1StartBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1StartBehaviour__Fields_DEFINED
struct MoonTimeline;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct MoonReference_1_UnityEngine_GameObject_;
struct PetrifiedOwlBossFight1StartBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* WillowCeremonyTimeline;
    struct MoonReference_1_UnityEngine_GameObject_* TreeVisualsParent;
    struct CheckpointFunctionality m_checkpoint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1StartBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1StartBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossFight1StartBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1StartBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1StartBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossFight1StartBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossFight1StartBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
