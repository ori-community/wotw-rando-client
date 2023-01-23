#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkSoundEngine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkSoundEngine_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSoundEngine_DEFINED)
#define IL2CPP_STRUCT_AkSoundEngine_DEFINED
struct AkSoundEngine__Class;
struct AkSoundEngine {
    struct AkSoundEngine__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AkSoundEngine_FWDDECL)
#define IL2CPP_STRUCT_AkSoundEngine_FWDDECL
#include <Modloader/app/structs/AkSoundEngine__Class.h>
#endif
#undef IL2CPP_STRUCT_AkSoundEngine_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSoundEngine_DEFINED) && !defined(IL2CPP_STRUCT_AkSoundEngine_FWDDECL)
#include <Modloader/app/structs/AkSoundEngine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkSoundEngine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
