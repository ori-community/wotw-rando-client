#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkSoundEngineController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkSoundEngineController_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSoundEngineController_DEFINED)
#define IL2CPP_STRUCT_AkSoundEngineController_DEFINED
struct AkSoundEngineController__Class;
struct AkSoundEngineController {
    struct AkSoundEngineController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AkSoundEngineController_FWDDECL)
#define IL2CPP_STRUCT_AkSoundEngineController_FWDDECL
#include <Modloader/app/structs/AkSoundEngineController__Class.h>
#endif
#undef IL2CPP_STRUCT_AkSoundEngineController_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSoundEngineController_DEFINED) && !defined(IL2CPP_STRUCT_AkSoundEngineController_FWDDECL)
#include <Modloader/app/structs/AkSoundEngineController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkSoundEngineController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
