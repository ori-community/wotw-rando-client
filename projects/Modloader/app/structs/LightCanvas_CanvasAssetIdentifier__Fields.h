#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvas_CanvasAssetIdentifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvas_CanvasAssetIdentifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_CanvasAssetIdentifier__Fields_DEFINED)
#define IL2CPP_STRUCT_LightCanvas_CanvasAssetIdentifier__Fields_DEFINED
struct String;
struct SceneMetaData;
struct __declspec(align(8)) LightCanvas_CanvasAssetIdentifier__Fields {
    struct String* m_gameObjectName;
    struct SceneMetaData* m_sceneMeta;
    int32_t m_guid;
    bool m_dirty;
    bool m_registered;
};
#endif
#if !defined(IL2CPP_STRUCT_LightCanvas_CanvasAssetIdentifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightCanvas_CanvasAssetIdentifier__Fields_FWDDECL
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LightCanvas_CanvasAssetIdentifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_CanvasAssetIdentifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvas_CanvasAssetIdentifier__Fields_FWDDECL)
#include <Modloader/app/structs/LightCanvas_CanvasAssetIdentifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvas_CanvasAssetIdentifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
