#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableOutput_DEFINED)
#include <Modloader/app/structs/PlayableOutputHandle.h>
#if defined(IL2CPP_STRUCT_PlayableOutputHandle_DEFINED)
#define IL2CPP_STRUCT_PlayableOutput_DEFINED
struct PlayableOutput {
    struct PlayableOutputHandle m_Handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableOutput_FWDDECL)
#define IL2CPP_STRUCT_PlayableOutput_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayableOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableOutput_DEFINED) && !defined(IL2CPP_STRUCT_PlayableOutput_FWDDECL)
#include <Modloader/app/structs/PlayableOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
