#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioBehaviour_DEFINED)
#include <Modloader/app/structs/AudioBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_AudioBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioBehaviour_DEFINED
struct AudioBehaviour__Class;
struct AudioBehaviour {
    struct AudioBehaviour__Class* klass;
    MonitorData* monitor;
    struct AudioBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioBehaviour_FWDDECL)
#define IL2CPP_STRUCT_AudioBehaviour_FWDDECL
#include <Modloader/app/structs/AudioBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_AudioBehaviour_FWDDECL)
#include <Modloader/app/structs/AudioBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
