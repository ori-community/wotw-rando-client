#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AmplifyColorBase.h>
#include <Modloader/app/structs/AmplifyColorVolumeBase.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::AmplifyColorBase {
    IL2CPP_REGISTER_METHOD(0x030D48D0, app::Texture2D*, get_DefaultLut, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB59E0, bool, get_IsBlending, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D49A0, float, get_effectVolumesBlendAdjusted, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D4AA0, app::String*, get_SharedInstanceID, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D4AB0, bool, get_WillItBlend, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D4BB0, void, NewSharedInstanceID, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D4CD0, void, ReportMissingShaders, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D4DB0, void, ReportNotSupported, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D4E90, bool, CheckShader, app::AmplifyColorBase* this_ptr, app::Shader* s)
    IL2CPP_REGISTER_METHOD(0x030D5090, bool, CheckShaders, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D5130, bool, CheckSupport, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D51A0, void, OnEnable, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D5410, void, OnDisable, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D5530, void, VolumesBlendTo, app::AmplifyColorBase* this_ptr, app::Texture* blend_target_l_u_t, float blend_time_in_sec)
    IL2CPP_REGISTER_METHOD(
        0x030D5560,
        void,
        BlendTo,
        app::AmplifyColorBase* this_ptr,
        app::Texture* blend_target_l_u_t,
        float blend_time_in_sec,
        app::Action* on_finish_blend
    )
    IL2CPP_REGISTER_METHOD(0x030D5590, void, CheckCamera, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D5720, void, Start, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D57A0, void, Update, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D5DA0, void, EnterVolume, app::AmplifyColorBase* this_ptr, app::AmplifyColorVolumeBase* volume)
    IL2CPP_REGISTER_METHOD(0x030D5E70, void, ExitVolume, app::AmplifyColorBase* this_ptr, app::AmplifyColorVolumeBase* volume)
    IL2CPP_REGISTER_METHOD(0x030D5F40, void, UpdateVolumes, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D6B60, void, SetupShader, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D6EC0, void, ReleaseMaterials, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D6FE0, app::Texture2D*, CreateDefaultLut, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D7420, app::Texture2D*, CreateDepthCurveLut, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D77A0, void, UpdateDepthCurveLut, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D79C0, void, CheckUpdateDepthCurveLut, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D7DF0, void, CreateHelperTextures, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D8430, bool, CheckMaterialAndShader, app::AmplifyColorBase* this_ptr, app::Material* material, app::String* name)
    IL2CPP_REGISTER_METHOD(0x030D8750, bool, CreateMaterials, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D9060, void, SetMaterialKeyword, app::AmplifyColorBase* this_ptr, int32_t keyword, bool state)
    IL2CPP_REGISTER_METHOD(0x030D9330, void, ReleaseTextures, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D9440, bool, ValidateLutDimensions, app::Texture* lut)
    IL2CPP_REGISTER_METHOD(0x030D9610, void, UpdatePostEffectParams, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D96D0, int32_t, ComputeShaderPass, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D97A0, void, OnRenderImage, app::AmplifyColorBase* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x030DA7A0, void, ctor, app::AmplifyColorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01547990, void, SafeRelease_1, app::AmplifyColorBase* this_ptr, app::Object** obj)
    IL2CPP_REGISTER_METHOD(0x01547990, void, SafeRelease_2, app::AmplifyColorBase* this_ptr, app::Material** obj)
    IL2CPP_REGISTER_METHOD(0x01547990, void, SafeRelease_3, app::AmplifyColorBase* this_ptr, app::Texture2D** obj)
    IL2CPP_REGISTER_METHOD(0x01547990, void, SafeRelease_4, app::AmplifyColorBase* this_ptr, app::RenderTexture** obj)
} // namespace app::classes::AmplifyColorBase
