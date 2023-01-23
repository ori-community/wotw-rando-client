#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkipCutsceneController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkipCutsceneController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkipCutsceneController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SkipCutsceneController__Fields_DEFINED
struct List_1_ISkipCutscene_;
struct DelayedAction;
struct SceneRoot;
struct SkipCutsceneController__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_ISkipCutscene_* m_skips;
    struct DelayedAction* m_delayedAction;
    struct SceneRoot* m_kuFlyAway;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkipCutsceneController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkipCutsceneController__Fields_FWDDECL
#include <Modloader/app/structs/DelayedAction.h>
#include <Modloader/app/structs/List_1_ISkipCutscene_.h>
#include <Modloader/app/structs/SceneRoot.h>
#endif
#undef IL2CPP_STRUCT_SkipCutsceneController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkipCutsceneController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkipCutsceneController__Fields_FWDDECL)
#include <Modloader/app/structs/SkipCutsceneController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkipCutsceneController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
