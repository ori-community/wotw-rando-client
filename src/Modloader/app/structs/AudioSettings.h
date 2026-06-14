#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSettings_DEFINED)
#define IL2CPP_STRUCT_AudioSettings_DEFINED
struct AudioSettings__Class;
struct AudioSettings {
    struct AudioSettings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AudioSettings_FWDDECL)
#define IL2CPP_STRUCT_AudioSettings_FWDDECL
#include <Modloader/app/structs/AudioSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSettings_DEFINED) && !defined(IL2CPP_STRUCT_AudioSettings_FWDDECL)
#include <Modloader/app/structs/AudioSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
