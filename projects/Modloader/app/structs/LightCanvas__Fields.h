#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvas__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvas__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_LightCanvas__Fields_DEFINED
struct Texture2D;
struct LightCanvas_BindData;
struct LightCanvas_CanvasAssetIdentifier;
struct LightCanvas_SubLayerSettings;
struct List_1_LightCanvas_LightCanvasStateData_;
struct LightCanvasStateController_LightCanvasState;
struct TimesliceLigthCanvasSetPosTask;
struct List_1_UnityEngine_Renderer_;
struct List_1_LightCanvas_;
struct List_1_UberShaderComponent_;
struct LightCanvas__Fields {
    struct MonoBehaviour__Fields _;
    struct Texture2D* m_lightTextureAsset;
    struct LightCanvas_BindData* m_defaultBindData;
    struct LightCanvas_BindData* m_editableBindData;
    struct LightCanvas_CanvasAssetIdentifier* CanvasIdentifier;
    struct Rect CanvasRect;
    bool ExcludeFromAtlas;
    bool LightCanvasEnabled;
    bool MovingCanvas;
    struct LightCanvas_SubLayerSettings* m_defaultCanvasSubLayerSettings;
    bool m_buildProcessDone;
    struct List_1_LightCanvas_LightCanvasStateData_* States;
    struct LightCanvasStateController_LightCanvasState* DefaultStateDefinition;
    int32_t m_currentStateGuid;
    int32_t m_desiredStateGuid;
    struct Vector3 m_prevUpdatedCanvasPosition;
    struct Vector2 m_lastScale;
    int32_t m_lastChildCount;
    struct TimesliceLigthCanvasSetPosTask* m_setPosTask;
    struct List_1_UnityEngine_Renderer_* m_tempRendererList;
    struct List_1_UnityEngine_Renderer_* m_attachedRenderers;
    struct List_1_UnityEngine_Renderer_* m_cachedChildRenderers;
    struct List_1_LightCanvas_* m_childLightCanvases;
    struct List_1_UberShaderComponent_* m_attachedUberShaders;
    bool _IsInPrefab_k__BackingField;
    bool _ShouldReloadAssets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightCanvas__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightCanvas__Fields_FWDDECL
#include <Modloader/app/structs/LightCanvasStateController_LightCanvasState.h>
#include <Modloader/app/structs/LightCanvas_BindData.h>
#include <Modloader/app/structs/LightCanvas_CanvasAssetIdentifier.h>
#include <Modloader/app/structs/LightCanvas_SubLayerSettings.h>
#include <Modloader/app/structs/List_1_LightCanvas_.h>
#include <Modloader/app/structs/List_1_LightCanvas_LightCanvasStateData_.h>
#include <Modloader/app/structs/List_1_UberShaderComponent_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/TimesliceLigthCanvasSetPosTask.h>
#endif
#undef IL2CPP_STRUCT_LightCanvas__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvas__Fields_FWDDECL)
#include <Modloader/app/structs/LightCanvas__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvas__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
