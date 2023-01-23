#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationLayerContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationLayerContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationLayerContext_DEFINED)
#include <Modloader/app/structs/MoonAnimatorLayerName.h>
#if defined(IL2CPP_STRUCT_MoonAnimatorLayerName_DEFINED)
#define IL2CPP_STRUCT_AnimationLayerContext_DEFINED
struct AnimationLayerContext {
    struct MoonAnimatorLayerName LayerName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationLayerContext_FWDDECL)
#define IL2CPP_STRUCT_AnimationLayerContext_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimationLayerContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationLayerContext_DEFINED) && !defined(IL2CPP_STRUCT_AnimationLayerContext_FWDDECL)
#include <Modloader/app/structs/AnimationLayerContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationLayerContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
