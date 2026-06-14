#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RunOverride__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RunOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunOverride__Fields_DEFINED)
#define IL2CPP_STRUCT_RunOverride__Fields_DEFINED
struct AnimationSwap;
struct AnimationParameterSwap;
struct __declspec(align(8)) RunOverride__Fields {
    bool ShouldOverride;
    struct AnimationSwap* MoveBlend;
    struct AnimationSwap* RunTurn;
    struct AnimationParameterSwap* Speed;
};
#endif
#if !defined(IL2CPP_STRUCT_RunOverride__Fields_FWDDECL)
#define IL2CPP_STRUCT_RunOverride__Fields_FWDDECL
#include <Modloader/app/structs/AnimationParameterSwap.h>
#include <Modloader/app/structs/AnimationSwap.h>
#endif
#undef IL2CPP_STRUCT_RunOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunOverride__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RunOverride__Fields_FWDDECL)
#include <Modloader/app/structs/RunOverride__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RunOverride__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
