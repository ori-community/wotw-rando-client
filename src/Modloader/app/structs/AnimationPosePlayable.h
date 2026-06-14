#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPosePlayable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPosePlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPosePlayable_DEFINED)
#include <Modloader/app/structs/PlayableHandle.h>
#if defined(IL2CPP_STRUCT_PlayableHandle_DEFINED)
#define IL2CPP_STRUCT_AnimationPosePlayable_DEFINED
struct AnimationPosePlayable {
    struct PlayableHandle m_Handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationPosePlayable_FWDDECL)
#define IL2CPP_STRUCT_AnimationPosePlayable_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimationPosePlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPosePlayable_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPosePlayable_FWDDECL)
#include <Modloader/app/structs/AnimationPosePlayable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPosePlayable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
