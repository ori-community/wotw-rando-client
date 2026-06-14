#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableHandle_DEFINED)
#define IL2CPP_STRUCT_PlayableHandle_DEFINED
struct PlayableHandle {
    void* m_Handle;
    uint32_t m_Version;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayableHandle_FWDDECL)
#define IL2CPP_STRUCT_PlayableHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayableHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableHandle_DEFINED) && !defined(IL2CPP_STRUCT_PlayableHandle_FWDDECL)
#include <Modloader/app/structs/PlayableHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
