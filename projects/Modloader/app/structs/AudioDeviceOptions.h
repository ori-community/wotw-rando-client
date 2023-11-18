#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioDeviceOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioDeviceOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioDeviceOptions_DEFINED)
#include <Modloader/app/structs/AudioDeviceOptions__Fields.h>
#if defined(IL2CPP_STRUCT_AudioDeviceOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioDeviceOptions_DEFINED
struct AudioDeviceOptions__Class;
struct AudioDeviceOptions {
    struct AudioDeviceOptions__Class* klass;
    MonitorData* monitor;
    struct AudioDeviceOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioDeviceOptions_FWDDECL)
#define IL2CPP_STRUCT_AudioDeviceOptions_FWDDECL
#include <Modloader/app/structs/AudioDeviceOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioDeviceOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioDeviceOptions_DEFINED) && !defined(IL2CPP_STRUCT_AudioDeviceOptions_FWDDECL)
#include <Modloader/app/structs/AudioDeviceOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioDeviceOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
