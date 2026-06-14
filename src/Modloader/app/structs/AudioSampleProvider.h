#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioSampleProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioSampleProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSampleProvider_DEFINED)
#include <Modloader/app/structs/AudioSampleProvider__Fields.h>
#if defined(IL2CPP_STRUCT_AudioSampleProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioSampleProvider_DEFINED
struct AudioSampleProvider__Class;
struct AudioSampleProvider {
    struct AudioSampleProvider__Class* klass;
    MonitorData* monitor;
    struct AudioSampleProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioSampleProvider_FWDDECL)
#define IL2CPP_STRUCT_AudioSampleProvider_FWDDECL
#include <Modloader/app/structs/AudioSampleProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioSampleProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSampleProvider_DEFINED) && !defined(IL2CPP_STRUCT_AudioSampleProvider_FWDDECL)
#include <Modloader/app/structs/AudioSampleProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioSampleProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
