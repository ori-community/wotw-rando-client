#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchSeriesPuzzleSetupData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchSeriesPuzzleSetupData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchSeriesPuzzleSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchSeriesPuzzleSetupData__Fields_DEFINED
struct MoonTimeline;
struct __declspec(align(8)) SwitchSeriesPuzzleSetupData__Fields {
    struct MoonTimeline* m_transition;
    bool m_desiredValue;
};
#endif
#if !defined(IL2CPP_STRUCT_SwitchSeriesPuzzleSetupData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwitchSeriesPuzzleSetupData__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SwitchSeriesPuzzleSetupData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchSeriesPuzzleSetupData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwitchSeriesPuzzleSetupData__Fields_FWDDECL)
#include <Modloader/app/structs/SwitchSeriesPuzzleSetupData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchSeriesPuzzleSetupData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
