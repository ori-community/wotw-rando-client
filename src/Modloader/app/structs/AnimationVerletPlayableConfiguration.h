#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationVerletPlayableConfiguration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationVerletPlayableConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationVerletPlayableConfiguration_DEFINED)
#define IL2CPP_STRUCT_AnimationVerletPlayableConfiguration_DEFINED
struct AnimationVerletPlayableConfiguration {
    bool UseJobs;
    bool EnableDebugDraw;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationVerletPlayableConfiguration_FWDDECL)
#define IL2CPP_STRUCT_AnimationVerletPlayableConfiguration_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimationVerletPlayableConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationVerletPlayableConfiguration_DEFINED) && !defined(IL2CPP_STRUCT_AnimationVerletPlayableConfiguration_FWDDECL)
#include <Modloader/app/structs/AnimationVerletPlayableConfiguration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationVerletPlayableConfiguration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
