#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationVerletPlayableStatus_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationVerletPlayableStatus_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationVerletPlayableStatus_DEFINED)
#define IL2CPP_STRUCT_AnimationVerletPlayableStatus_DEFINED
struct AnimationVerletPlayableStatus {
    bool IsUsingFastPath;
    double MainThreadTime;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationVerletPlayableStatus_FWDDECL)
#define IL2CPP_STRUCT_AnimationVerletPlayableStatus_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimationVerletPlayableStatus_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationVerletPlayableStatus_DEFINED) && !defined(IL2CPP_STRUCT_AnimationVerletPlayableStatus_FWDDECL)
#include <Modloader/app/structs/AnimationVerletPlayableStatus.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationVerletPlayableStatus.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
