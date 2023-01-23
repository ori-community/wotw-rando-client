#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAudioInputManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAudioInputManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioInputManager_DEFINED)
#define IL2CPP_STRUCT_AkAudioInputManager_DEFINED
struct AkAudioInputManager__Class;
struct AkAudioInputManager {
    struct AkAudioInputManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AkAudioInputManager_FWDDECL)
#define IL2CPP_STRUCT_AkAudioInputManager_FWDDECL
#include <Modloader/app/structs/AkAudioInputManager__Class.h>
#endif
#undef IL2CPP_STRUCT_AkAudioInputManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioInputManager_DEFINED) && !defined(IL2CPP_STRUCT_AkAudioInputManager_FWDDECL)
#include <Modloader/app/structs/AkAudioInputManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAudioInputManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
