#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureMixerPlayable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureMixerPlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureMixerPlayable_DEFINED)
#include <Modloader/app/structs/PlayableHandle.h>
#if defined(IL2CPP_STRUCT_PlayableHandle_DEFINED)
#define IL2CPP_STRUCT_TextureMixerPlayable_DEFINED
struct TextureMixerPlayable {
    struct PlayableHandle m_Handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureMixerPlayable_FWDDECL)
#define IL2CPP_STRUCT_TextureMixerPlayable_FWDDECL
#endif
#undef IL2CPP_STRUCT_TextureMixerPlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureMixerPlayable_DEFINED) && !defined(IL2CPP_STRUCT_TextureMixerPlayable_FWDDECL)
#include <Modloader/app/structs/TextureMixerPlayable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureMixerPlayable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
