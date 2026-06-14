#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorControllerPlayable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorControllerPlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorControllerPlayable_DEFINED)
#include <Modloader/app/structs/PlayableHandle.h>
#if defined(IL2CPP_STRUCT_PlayableHandle_DEFINED)
#define IL2CPP_STRUCT_AnimatorControllerPlayable_DEFINED
struct AnimatorControllerPlayable {
    struct PlayableHandle m_Handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorControllerPlayable_FWDDECL)
#define IL2CPP_STRUCT_AnimatorControllerPlayable_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimatorControllerPlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorControllerPlayable_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorControllerPlayable_FWDDECL)
#include <Modloader/app/structs/AnimatorControllerPlayable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorControllerPlayable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
