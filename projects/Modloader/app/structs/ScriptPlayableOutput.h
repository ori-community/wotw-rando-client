#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScriptPlayableOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScriptPlayableOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScriptPlayableOutput_DEFINED)
#include <Modloader/app/structs/PlayableOutputHandle.h>
#if defined(IL2CPP_STRUCT_PlayableOutputHandle_DEFINED)
#define IL2CPP_STRUCT_ScriptPlayableOutput_DEFINED
struct ScriptPlayableOutput {
    struct PlayableOutputHandle m_Handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScriptPlayableOutput_FWDDECL)
#define IL2CPP_STRUCT_ScriptPlayableOutput_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScriptPlayableOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScriptPlayableOutput_DEFINED) && !defined(IL2CPP_STRUCT_ScriptPlayableOutput_FWDDECL)
#include <Modloader/app/structs/ScriptPlayableOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScriptPlayableOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
