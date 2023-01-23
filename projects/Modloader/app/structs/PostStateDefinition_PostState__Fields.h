#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PostStateDefinition_PostState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PostStateDefinition_PostState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostStateDefinition_PostState__Fields_DEFINED)
#define IL2CPP_STRUCT_PostStateDefinition_PostState__Fields_DEFINED
struct String;
struct CameraSettingsAsset;
struct FogSettings;
struct SceneRoot;
struct CameraSettings;
struct __declspec(align(8)) PostStateDefinition_PostState__Fields {
    int32_t GUID;
    struct String* Name;
    struct CameraSettingsAsset* Asset;
    struct FogSettings* Fog;
    struct SceneRoot* m_sceneRoot;
    struct CameraSettings* m_settings;
};
#endif
#if !defined(IL2CPP_STRUCT_PostStateDefinition_PostState__Fields_FWDDECL)
#define IL2CPP_STRUCT_PostStateDefinition_PostState__Fields_FWDDECL
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/FogSettings.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PostStateDefinition_PostState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostStateDefinition_PostState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PostStateDefinition_PostState__Fields_FWDDECL)
#include <Modloader/app/structs/PostStateDefinition_PostState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PostStateDefinition_PostState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
