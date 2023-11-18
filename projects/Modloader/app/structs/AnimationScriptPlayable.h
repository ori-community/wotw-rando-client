#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationScriptPlayable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationScriptPlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationScriptPlayable_DEFINED)
#include <Modloader/app/structs/PlayableHandle.h>
#if defined(IL2CPP_STRUCT_PlayableHandle_DEFINED)
#define IL2CPP_STRUCT_AnimationScriptPlayable_DEFINED
struct AnimationScriptPlayable {
    struct PlayableHandle m_Handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationScriptPlayable_FWDDECL)
#define IL2CPP_STRUCT_AnimationScriptPlayable_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimationScriptPlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationScriptPlayable_DEFINED) && !defined(IL2CPP_STRUCT_AnimationScriptPlayable_FWDDECL)
#include <Modloader/app/structs/AnimationScriptPlayable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationScriptPlayable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
