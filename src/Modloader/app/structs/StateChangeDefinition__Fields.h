#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateChangeDefinition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateChangeDefinition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateChangeDefinition__Fields_DEFINED)
#define IL2CPP_STRUCT_StateChangeDefinition__Fields_DEFINED
struct DesiredUberStateComposite;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct MoonTimeline;
struct __declspec(align(8)) StateChangeDefinition__Fields {
    struct DesiredUberStateComposite* State;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* MoonTransition;
    struct MoonTimeline* Transition;
};
#endif
#if !defined(IL2CPP_STRUCT_StateChangeDefinition__Fields_FWDDECL)
#define IL2CPP_STRUCT_StateChangeDefinition__Fields_FWDDECL
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_StateChangeDefinition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateChangeDefinition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StateChangeDefinition__Fields_FWDDECL)
#include <Modloader/app/structs/StateChangeDefinition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateChangeDefinition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
