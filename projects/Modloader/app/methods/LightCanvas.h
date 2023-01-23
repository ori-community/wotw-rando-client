#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightCanvas.h>
#include <Modloader/app/structs/LightCanvas_BindData.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/LightCanvas_SubLayerSettings.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/LightCanvas_LightCanvasStateData.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Texture__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Vector__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Float__Enum.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/List_1_LightCanvasStateController_LightCanvasState_.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::LightCanvas {
    IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_CurrentStateGuid, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070DEC0, int32_t, get_DesiredStateGuid, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FD20, bool, get_DefaultStateActive, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::LightCanvas_BindData*, get_DefaultBindData, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsInPrefab, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00413170, void, set_IsInPrefab, (app::LightCanvas * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FD30, app::LightCanvas_SubLayerSettings*, get_CanvasSubLayerSettings, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FD70, void, set_CanvasSubLayerSettings, (app::LightCanvas * this_ptr, app::LightCanvas_SubLayerSettings* value))
    IL2CPP_REGISTER_METHOD(0x0113FDB0, app::Texture2D*, get_LightTexture, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FDB0, app::Texture2D*, get_LightTextureAsset, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FDF0, app::LightCanvas_LightCanvasStateData*, get_CurrentStateData, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FE00, app::LightCanvas_BindData*, get_CurrentBindData, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsSelectable, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB6AB0, bool, get_ShouldReloadAssets, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB6AC0, void, set_ShouldReloadAssets, (app::LightCanvas * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FE40, void, Awake, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FE50, void, OnDestroy, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FE90, void, Update, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FF20, app::Texture2D*, GetLightTextureForState, (app::LightCanvas * this_ptr, int32_t state_guid))
    IL2CPP_REGISTER_METHOD(0x0113FF20, app::Texture2D*, GetLightTextureAssetForState, (app::LightCanvas * this_ptr, int32_t state_guid))
    IL2CPP_REGISTER_METHOD(0x0113FF50, void, LoadInTextureAsset, (app::LightCanvas * this_ptr, app::Texture2D* new_texture))
    IL2CPP_REGISTER_METHOD(0x01140040, void, AddAttached, (app::LightCanvas * this_ptr, app::Transform* t))
    IL2CPP_REGISTER_METHOD(0x011402C0, void, SetTempRenderersList, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01140360, void, UpdateUberShaderLightCanvasPos, (app::LightCanvas * this_ptr, bool force_update))
    IL2CPP_REGISTER_METHOD(0x01140AB0, void, UpdateLightCanvasScale, (app::LightCanvas * this_ptr, bool force_update))
    IL2CPP_REGISTER_METHOD(0x011411A0, void, ApplyLightCanvasOnRenderer_1, (app::LightCanvas * this_ptr, app::Renderer* renderer))
    IL2CPP_REGISTER_METHOD(0x011415E0, void, ApplyLightCanvasOnRenderer_2, (app::LightCanvas * this_ptr, app::Renderer* renderer, app::LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum apply_flags))
    IL2CPP_REGISTER_METHOD(0x01141790, void, ClearLightCanvasOnRenderer, (app::LightCanvas * this_ptr, app::Renderer* rend))
    IL2CPP_REGISTER_METHOD(0x01141850, void, ApplyDynamicLightCanvasOnRenderer, (app::LightCanvas * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Texture__Enum texture_property, app::UberShaderProperty_Vector__Enum bounds_property, app::UberShaderProperty_Vector__Enum position_property, app::UberShaderProperty_Vector__Enum uvs_property, app::UberShaderProperty_Vector__Enum atlas_min_max_property, app::UberShaderProperty_Float__Enum atlas_flip_property))
    IL2CPP_REGISTER_METHOD(0x01141CD0, bool, HasApplyFlag, (app::LightCanvas * this_ptr, app::LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum flag, app::LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum test))
    IL2CPP_REGISTER_METHOD(0x01141CE0, app::Bounds, GetCustomBounds, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01141F50, void, SetState, (app::LightCanvas * this_ptr, int32_t state))
    IL2CPP_REGISTER_METHOD(0x01142050, void, ApplyKnownState, (app::LightCanvas * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x01142220, app::LightCanvas_LightCanvasStateData*, GetCanvasStateData, (app::LightCanvas * this_ptr, int32_t state_guid))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetStateEnable, (app::LightCanvas * this_ptr, int32_t state_guid, bool enabled, bool apply))
    IL2CPP_REGISTER_METHOD(0x01142330, void, UpdateStatesDefinition, (app::LightCanvas * this_ptr, app::List_1_LightCanvasStateController_LightCanvasState_* new_states))
    IL2CPP_REGISTER_METHOD(0x011427F0, void, RebindAllChildrenRuntime, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011428E0, app::Vector4, MakeBakedLightingLightColorMask, (app::LightCanvas_SubLayerSettings * sub_layer_settings, app::Vector3 light_canvas_comp, float ubershader_comp_z))
    IL2CPP_REGISTER_METHOD(0x01142D40, void, UpdateBakeLightingValues, (app::Renderer * renderer, app::Texture* light_texture, app::Rect canvas_rect, app::LightCanvas_SubLayerSettings* sub_layer_settings, app::Vector3 light_canvas_position, app::Vector4 light_color_mask, app::Vector4 uvs, app::Vector4 atlas_min_max, bool atlas_flip))
    IL2CPP_REGISTER_METHOD(0x01143030, void, UpdateDynamicBakeLightingValues, (app::Renderer * renderer, app::Texture* light_texture, app::Rect canvas_rect, app::Vector3 light_canvas_position, app::Vector4 uvs, app::Vector4 atlas_min_max, bool atlas_flip, app::UberShaderProperty_Texture__Enum texture_property, app::UberShaderProperty_Vector__Enum bounds_property, app::UberShaderProperty_Vector__Enum position_property, app::UberShaderProperty_Vector__Enum uvs_property, app::UberShaderProperty_Vector__Enum atlas_min_max_property, app::UberShaderProperty_Float__Enum atlas_flip_property))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawSceneWarning, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01143260, void, ctor, (app::LightCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01143A50, void, cctor, ())
} // namespace app::classes::LightCanvas
