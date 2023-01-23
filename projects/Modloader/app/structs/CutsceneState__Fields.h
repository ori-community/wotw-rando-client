#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CutsceneState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CutsceneState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneState__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CutsceneState__Fields_DEFINED
struct CutsceneController;
struct HashSet_1_CutsceneTransition_;
struct CutsceneState__Fields {
    struct MonoBehaviour__Fields _;
    struct CutsceneController* Parent;
    struct HashSet_1_CutsceneTransition_* Transitions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CutsceneState__Fields_FWDDECL)
#define IL2CPP_STRUCT_CutsceneState__Fields_FWDDECL
#include <Modloader/app/structs/CutsceneController.h>
#include <Modloader/app/structs/HashSet_1_CutsceneTransition_.h>
#endif
#undef IL2CPP_STRUCT_CutsceneState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CutsceneState__Fields_FWDDECL)
#include <Modloader/app/structs/CutsceneState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CutsceneState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
