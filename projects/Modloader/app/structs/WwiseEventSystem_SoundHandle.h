#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED
struct WwiseEventSystem_SoundHandleProtected;
struct WwiseEventSystem_SoundHandle {
    struct WwiseEventSystem_SoundHandleProtected* m_handle;
    int64_t m_handleVersion;
    bool m_triggered;
};
#endif
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_FWDDECL)
#define IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_FWDDECL
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected.h>
#endif
#undef IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED) && !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_FWDDECL)
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
