#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationContext_DEFINED)
#define IL2CPP_STRUCT_AnimationContext_DEFINED
struct AnimationContext {
    float NormalizedTime;
    bool _ShouldRecord_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationContext_FWDDECL)
#define IL2CPP_STRUCT_AnimationContext_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimationContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationContext_DEFINED) && !defined(IL2CPP_STRUCT_AnimationContext_FWDDECL)
#include <Modloader/app/structs/AnimationContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
