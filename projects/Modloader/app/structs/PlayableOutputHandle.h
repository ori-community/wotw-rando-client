#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableOutputHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableOutputHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableOutputHandle_DEFINED)
#define IL2CPP_STRUCT_PlayableOutputHandle_DEFINED
struct PlayableOutputHandle {
    void* m_Handle;
    uint32_t m_Version;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayableOutputHandle_FWDDECL)
#define IL2CPP_STRUCT_PlayableOutputHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayableOutputHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableOutputHandle_DEFINED) && !defined(IL2CPP_STRUCT_PlayableOutputHandle_FWDDECL)
#include <Modloader/app/structs/PlayableOutputHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableOutputHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
