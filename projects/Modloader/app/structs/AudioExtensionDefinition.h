#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioExtensionDefinition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioExtensionDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioExtensionDefinition_DEFINED)
#include <Modloader/app/structs/AudioExtensionDefinition__Fields.h>
#if defined(IL2CPP_STRUCT_AudioExtensionDefinition__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioExtensionDefinition_DEFINED
struct AudioExtensionDefinition__Class;
struct AudioExtensionDefinition {
    struct AudioExtensionDefinition__Class* klass;
    MonitorData* monitor;
    struct AudioExtensionDefinition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioExtensionDefinition_FWDDECL)
#define IL2CPP_STRUCT_AudioExtensionDefinition_FWDDECL
#include <Modloader/app/structs/AudioExtensionDefinition__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioExtensionDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioExtensionDefinition_DEFINED) && !defined(IL2CPP_STRUCT_AudioExtensionDefinition_FWDDECL)
#include <Modloader/app/structs/AudioExtensionDefinition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioExtensionDefinition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
