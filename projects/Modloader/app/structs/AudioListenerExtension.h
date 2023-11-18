#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioListenerExtension_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioListenerExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioListenerExtension_DEFINED)
#include <Modloader/app/structs/AudioListenerExtension__Fields.h>
#if defined(IL2CPP_STRUCT_AudioListenerExtension__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioListenerExtension_DEFINED
struct AudioListenerExtension__Class;
struct AudioListenerExtension {
    struct AudioListenerExtension__Class* klass;
    MonitorData* monitor;
    struct AudioListenerExtension__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioListenerExtension_FWDDECL)
#define IL2CPP_STRUCT_AudioListenerExtension_FWDDECL
#include <Modloader/app/structs/AudioListenerExtension__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioListenerExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioListenerExtension_DEFINED) && !defined(IL2CPP_STRUCT_AudioListenerExtension_FWDDECL)
#include <Modloader/app/structs/AudioListenerExtension.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioListenerExtension.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
