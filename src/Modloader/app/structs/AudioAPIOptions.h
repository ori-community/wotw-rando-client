#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioAPIOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioAPIOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioAPIOptions_DEFINED)
#include <Modloader/app/structs/AudioAPIOptions__Fields.h>
#if defined(IL2CPP_STRUCT_AudioAPIOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioAPIOptions_DEFINED
struct AudioAPIOptions__Class;
struct AudioAPIOptions {
    struct AudioAPIOptions__Class* klass;
    MonitorData* monitor;
    struct AudioAPIOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioAPIOptions_FWDDECL)
#define IL2CPP_STRUCT_AudioAPIOptions_FWDDECL
#include <Modloader/app/structs/AudioAPIOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioAPIOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioAPIOptions_DEFINED) && !defined(IL2CPP_STRUCT_AudioAPIOptions_FWDDECL)
#include <Modloader/app/structs/AudioAPIOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioAPIOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
