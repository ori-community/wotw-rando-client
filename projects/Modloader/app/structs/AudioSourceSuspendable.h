#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioSourceSuspendable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioSourceSuspendable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSourceSuspendable_DEFINED)
#include <Modloader/app/structs/AudioSourceSuspendable__Fields.h>
#if defined(IL2CPP_STRUCT_AudioSourceSuspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioSourceSuspendable_DEFINED
struct AudioSourceSuspendable__Class;
struct AudioSourceSuspendable {
    struct AudioSourceSuspendable__Class* klass;
    MonitorData* monitor;
    struct AudioSourceSuspendable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioSourceSuspendable_FWDDECL)
#define IL2CPP_STRUCT_AudioSourceSuspendable_FWDDECL
#include <Modloader/app/structs/AudioSourceSuspendable__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioSourceSuspendable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSourceSuspendable_DEFINED) && !defined(IL2CPP_STRUCT_AudioSourceSuspendable_FWDDECL)
#include <Modloader/app/structs/AudioSourceSuspendable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioSourceSuspendable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
