#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostGenericSoundPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostGenericSoundPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericSoundPlayer__Fields_DEFINED)
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_GhostGenericSoundPlayer__Fields_DEFINED
struct GenericPuppet;
struct __declspec(align(8)) GhostGenericSoundPlayer__Fields {
    int32_t m_id;
    struct GenericPuppet* m_puppet;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostGenericSoundPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostGenericSoundPlayer__Fields_FWDDECL
#include <Modloader/app/structs/GenericPuppet.h>
#endif
#undef IL2CPP_STRUCT_GhostGenericSoundPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericSoundPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostGenericSoundPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/GhostGenericSoundPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostGenericSoundPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
