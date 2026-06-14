#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioListener_DEFINED)
#include <Modloader/app/structs/AudioListener__Fields.h>
#if defined(IL2CPP_STRUCT_AudioListener__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioListener_DEFINED
struct AudioListener__Class;
struct AudioListener {
    struct AudioListener__Class* klass;
    MonitorData* monitor;
    struct AudioListener__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioListener_FWDDECL)
#define IL2CPP_STRUCT_AudioListener_FWDDECL
#include <Modloader/app/structs/AudioListener__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioListener_DEFINED) && !defined(IL2CPP_STRUCT_AudioListener_FWDDECL)
#include <Modloader/app/structs/AudioListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
