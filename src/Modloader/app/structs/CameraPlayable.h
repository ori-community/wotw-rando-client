#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPlayable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPlayable_DEFINED)
#include <Modloader/app/structs/PlayableHandle.h>
#if defined(IL2CPP_STRUCT_PlayableHandle_DEFINED)
#define IL2CPP_STRUCT_CameraPlayable_DEFINED
struct CameraPlayable {
    struct PlayableHandle m_Handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraPlayable_FWDDECL)
#define IL2CPP_STRUCT_CameraPlayable_FWDDECL
#endif
#undef IL2CPP_STRUCT_CameraPlayable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPlayable_DEFINED) && !defined(IL2CPP_STRUCT_CameraPlayable_FWDDECL)
#include <Modloader/app/structs/CameraPlayable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPlayable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
