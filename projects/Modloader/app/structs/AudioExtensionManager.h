#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioExtensionManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioExtensionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioExtensionManager_DEFINED)
#define IL2CPP_STRUCT_AudioExtensionManager_DEFINED
struct AudioExtensionManager__Class;
struct AudioExtensionManager {
    struct AudioExtensionManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AudioExtensionManager_FWDDECL)
#define IL2CPP_STRUCT_AudioExtensionManager_FWDDECL
#include <Modloader/app/structs/AudioExtensionManager__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioExtensionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioExtensionManager_DEFINED) && !defined(IL2CPP_STRUCT_AudioExtensionManager_FWDDECL)
#include <Modloader/app/structs/AudioExtensionManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioExtensionManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
