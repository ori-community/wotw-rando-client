#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioProperties_DEFINED)
#include <Modloader/app/structs/AudioProperties__Fields.h>
#if defined(IL2CPP_STRUCT_AudioProperties__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioProperties_DEFINED
struct AudioProperties__Class;
struct AudioProperties {
    struct AudioProperties__Class* klass;
    MonitorData* monitor;
    struct AudioProperties__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioProperties_FWDDECL)
#define IL2CPP_STRUCT_AudioProperties_FWDDECL
#include <Modloader/app/structs/AudioProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioProperties_DEFINED) && !defined(IL2CPP_STRUCT_AudioProperties_FWDDECL)
#include <Modloader/app/structs/AudioProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
