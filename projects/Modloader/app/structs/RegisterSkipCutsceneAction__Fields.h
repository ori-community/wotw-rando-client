#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisterSkipCutsceneAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisterSkipCutsceneAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterSkipCutsceneAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_RegisterSkipCutsceneAction__Fields_DEFINED
struct MasterTimelineSequence;
struct RegisterSkipCutsceneAction__Fields {
    struct ActionMethod__Fields _;
    struct MasterTimelineSequence* MasterTimelineSequence;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisterSkipCutsceneAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegisterSkipCutsceneAction__Fields_FWDDECL
#include <Modloader/app/structs/MasterTimelineSequence.h>
#endif
#undef IL2CPP_STRUCT_RegisterSkipCutsceneAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterSkipCutsceneAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegisterSkipCutsceneAction__Fields_FWDDECL)
#include <Modloader/app/structs/RegisterSkipCutsceneAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisterSkipCutsceneAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
