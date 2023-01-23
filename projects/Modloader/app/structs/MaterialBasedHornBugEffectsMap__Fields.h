#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialBasedHornBugEffectsMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialBasedHornBugEffectsMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialBasedHornBugEffectsMap__Fields_DEFINED)
#include <Modloader/app/structs/MaterialBasedResourceMap__Fields.h>
#if defined(IL2CPP_STRUCT_MaterialBasedResourceMap__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialBasedHornBugEffectsMap__Fields_DEFINED
struct HornBugMovementEffects;
struct MaterialBasedHornBugMovementEffects__Array;
struct HornBugSlamEffects;
struct MaterialBasedHornBugSlamEffects__Array;
struct MaterialBasedHornBugEffectsMap__Fields {
    struct MaterialBasedResourceMap__Fields _;
    struct HornBugMovementEffects* DefaultMovementEffects;
    struct MaterialBasedHornBugMovementEffects__Array* MovementEffects;
    struct HornBugSlamEffects* DefaultSlamEffects;
    struct MaterialBasedHornBugSlamEffects__Array* SlamEffects;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialBasedHornBugEffectsMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaterialBasedHornBugEffectsMap__Fields_FWDDECL
#include <Modloader/app/structs/HornBugMovementEffects.h>
#include <Modloader/app/structs/HornBugSlamEffects.h>
#include <Modloader/app/structs/MaterialBasedHornBugMovementEffects__Array.h>
#include <Modloader/app/structs/MaterialBasedHornBugSlamEffects__Array.h>
#endif
#undef IL2CPP_STRUCT_MaterialBasedHornBugEffectsMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialBasedHornBugEffectsMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaterialBasedHornBugEffectsMap__Fields_FWDDECL)
#include <Modloader/app/structs/MaterialBasedHornBugEffectsMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialBasedHornBugEffectsMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
