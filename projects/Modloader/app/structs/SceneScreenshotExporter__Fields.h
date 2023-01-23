#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneScreenshotExporter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneScreenshotExporter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshotExporter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SceneScreenshotExporter__Fields_DEFINED
struct String;
struct Transform;
struct List_1_System_Single_;
struct List_1_UnityEngine_GameObject_;
struct SceneScreenshotExporter__Fields {
    struct MonoBehaviour__Fields _;
    struct String* TexturePath;
    struct String* aliasName;
    float PixelsPerUnit;
    bool HideEffects;
    bool HideCharacter;
    bool ClearAlpha;
    bool ForcePowerOfTwo;
    struct Vector3 lastPosition;
    struct Transform* rootScene;
    int32_t maxSections;
    int32_t sections;
    struct List_1_System_Single_* bordersDepth;
    struct List_1_System_Single_* sectionsScale;
    bool DebugLeakCamera;
    int32_t previewLayer;
    int32_t lastLayerPreviwed;
    bool togglePreview;
    bool previuseToggleState;
    struct List_1_UnityEngine_GameObject_* tempHiddenObjects;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneScreenshotExporter__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneScreenshotExporter__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SceneScreenshotExporter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshotExporter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneScreenshotExporter__Fields_FWDDECL)
#include <Modloader/app/structs/SceneScreenshotExporter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneScreenshotExporter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
