#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeverSetupData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeverSetupData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_LeverSetupData__Fields_DEFINED
struct MoonTimeline;
struct __declspec(align(8)) LeverSetupData__Fields {
    struct MoonTimeline* m_transition;
    float m_desiredValue;
    float HandleRotationAmount;
};
#endif
#if !defined(IL2CPP_STRUCT_LeverSetupData__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeverSetupData__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LeverSetupData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverSetupData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeverSetupData__Fields_FWDDECL)
#include <Modloader/app/structs/LeverSetupData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeverSetupData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
