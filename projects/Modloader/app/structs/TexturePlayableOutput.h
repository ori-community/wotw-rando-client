#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TexturePlayableOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TexturePlayableOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_TexturePlayableOutput_DEFINED)
#include <Modloader/app/structs/PlayableOutputHandle.h>
#if defined(IL2CPP_STRUCT_PlayableOutputHandle_DEFINED)
#define IL2CPP_STRUCT_TexturePlayableOutput_DEFINED
struct TexturePlayableOutput {
    struct PlayableOutputHandle m_Handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TexturePlayableOutput_FWDDECL)
#define IL2CPP_STRUCT_TexturePlayableOutput_FWDDECL
#endif
#undef IL2CPP_STRUCT_TexturePlayableOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_TexturePlayableOutput_DEFINED) && !defined(IL2CPP_STRUCT_TexturePlayableOutput_FWDDECL)
#include <Modloader/app/structs/TexturePlayableOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TexturePlayableOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
