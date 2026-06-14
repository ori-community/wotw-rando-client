#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioSpatializerExtensionDefinition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioSpatializerExtensionDefinition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSpatializerExtensionDefinition__Fields_DEFINED)
#include <Modloader/app/structs/PropertyName.h>
#if defined(IL2CPP_STRUCT_PropertyName_DEFINED)
#define IL2CPP_STRUCT_AudioSpatializerExtensionDefinition__Fields_DEFINED
struct AudioExtensionDefinition;
struct __declspec(align(8)) AudioSpatializerExtensionDefinition__Fields {
    struct PropertyName spatializerName;
    struct AudioExtensionDefinition* definition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioSpatializerExtensionDefinition__Fields_FWDDECL)
#define IL2CPP_STRUCT_AudioSpatializerExtensionDefinition__Fields_FWDDECL
#include <Modloader/app/structs/AudioExtensionDefinition.h>
#endif
#undef IL2CPP_STRUCT_AudioSpatializerExtensionDefinition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSpatializerExtensionDefinition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AudioSpatializerExtensionDefinition__Fields_FWDDECL)
#include <Modloader/app/structs/AudioSpatializerExtensionDefinition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioSpatializerExtensionDefinition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
