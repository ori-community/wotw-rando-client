#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioExtensionManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioExtensionManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioExtensionManager__StaticFields_DEFINED)
#include <Modloader/app/structs/PropertyName.h>
#if defined(IL2CPP_STRUCT_PropertyName_DEFINED)
#define IL2CPP_STRUCT_AudioExtensionManager__StaticFields_DEFINED
struct List_1_UnityEngine_AudioSpatializerExtensionDefinition_;
struct List_1_UnityEngine_AudioAmbisonicExtensionDefinition_;
struct List_1_UnityEngine_AudioSourceExtension_;
struct AudioExtensionManager__StaticFields {
    struct List_1_UnityEngine_AudioSpatializerExtensionDefinition_* m_ListenerSpatializerExtensionDefinitions;
    struct List_1_UnityEngine_AudioSpatializerExtensionDefinition_* m_SourceSpatializerExtensionDefinitions;
    struct List_1_UnityEngine_AudioAmbisonicExtensionDefinition_* m_SourceAmbisonicDecoderExtensionDefinitions;
    struct List_1_UnityEngine_AudioSourceExtension_* m_SourceExtensionsToUpdate;
    int32_t m_NextStopIndex;
    bool m_BuiltinDefinitionsRegistered;
    struct PropertyName m_SpatializerName;
    struct PropertyName m_SpatializerExtensionName;
    struct PropertyName m_ListenerSpatializerExtensionName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioExtensionManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AudioExtensionManager__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_AudioAmbisonicExtensionDefinition_.h>
#include <Modloader/app/structs/List_1_UnityEngine_AudioSourceExtension_.h>
#include <Modloader/app/structs/List_1_UnityEngine_AudioSpatializerExtensionDefinition_.h>
#endif
#undef IL2CPP_STRUCT_AudioExtensionManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioExtensionManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AudioExtensionManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/AudioExtensionManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioExtensionManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
