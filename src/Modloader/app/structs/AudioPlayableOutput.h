#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioPlayableOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioPlayableOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioPlayableOutput_DEFINED)
#include <Modloader/app/structs/PlayableOutputHandle.h>
#if defined(IL2CPP_STRUCT_PlayableOutputHandle_DEFINED)
#define IL2CPP_STRUCT_AudioPlayableOutput_DEFINED
struct AudioPlayableOutput {
    struct PlayableOutputHandle m_Handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioPlayableOutput_FWDDECL)
#define IL2CPP_STRUCT_AudioPlayableOutput_FWDDECL
#endif
#undef IL2CPP_STRUCT_AudioPlayableOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioPlayableOutput_DEFINED) && !defined(IL2CPP_STRUCT_AudioPlayableOutput_FWDDECL)
#include <Modloader/app/structs/AudioPlayableOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioPlayableOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
