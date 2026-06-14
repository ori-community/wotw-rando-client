#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioSourceExtension_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioSourceExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSourceExtension_DEFINED)
#include <Modloader/app/structs/AudioSourceExtension__Fields.h>
#if defined(IL2CPP_STRUCT_AudioSourceExtension__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioSourceExtension_DEFINED
struct AudioSourceExtension__Class;
struct AudioSourceExtension {
    struct AudioSourceExtension__Class* klass;
    MonitorData* monitor;
    struct AudioSourceExtension__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioSourceExtension_FWDDECL)
#define IL2CPP_STRUCT_AudioSourceExtension_FWDDECL
#include <Modloader/app/structs/AudioSourceExtension__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioSourceExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSourceExtension_DEFINED) && !defined(IL2CPP_STRUCT_AudioSourceExtension_FWDDECL)
#include <Modloader/app/structs/AudioSourceExtension.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioSourceExtension.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
