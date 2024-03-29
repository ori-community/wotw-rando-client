#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BEAUTIFY_PRESET__Enum.h>
#include <Modloader/app/structs/BEAUTIFY_QUALITY__Enum.h>
#include <Modloader/app/structs/Beautify.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::BeautifyEffect::Beautify {
    IL2CPP_REGISTER_METHOD(0x00654950, app::BEAUTIFY_PRESET__Enum, get_preset, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031778D0, void, set_preset, (app::Beautify * this_ptr, app::BEAUTIFY_PRESET__Enum value))
    IL2CPP_REGISTER_METHOD(0x00998570, app::BEAUTIFY_QUALITY__Enum, get_quality, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031778E0, void, set_quality, (app::Beautify * this_ptr, app::BEAUTIFY_QUALITY__Enum value))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_compareMode, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031778F0, void, set_compareMode, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_sharpenMinDepth, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177900, void, set_sharpenMinDepth, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_sharpenMaxDepth, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177920, void, set_sharpenMaxDepth, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00724040, float, get_sharpen, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177940, void, set_sharpen, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_sharpenDepthThreshold, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177960, void, set_sharpenDepthThreshold, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x03177980, app::Color, get_tintColor, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177990, void, set_tintColor, (app::Beautify * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x008682A0, float, get_sharpenRelaxation, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031779F0, void, set_sharpenRelaxation, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_sharpenClamp, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177A10, void, set_sharpenClamp, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01050D20, float, get_sharpenMotionSensibility, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177A30, void, set_sharpenMotionSensibility, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x008663D0, float, get_saturate, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177A50, void, set_saturate, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A35F30, float, get_contrast, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177A70, void, set_contrast, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x008693A0, float, get_brightness, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177A90, void, set_brightness, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0064D960, float, get_dither, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177AB0, void, set_dither, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00B32900, float, get_ditherDepth, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177AD0, void, set_ditherDepth, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00623240, float, get_daltonize, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177AF0, void, set_daltonize, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_vignetting, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177B10, void, set_vignetting, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x03177B30, app::Color, get_vignettingColor, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177B40, void, set_vignettingColor, (app::Beautify * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_frame, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177BA0, void, set_frame, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x03177BC0, app::Color, get_frameColor, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177BD0, void, set_frameColor, (app::Beautify * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_sepia, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177C30, void, set_sepia, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005035A0, bool, get_nightVision, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177C60, void, set_nightVision, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x03177CB0, app::Color, get_nightVisionColor, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177CC0, void, set_nightVisionColor, (app::Beautify * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_outline, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177D20, void, set_outline, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x012C4320, app::Color, get_outlineColor, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177D40, void, set_outlineColor, (app::Beautify * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_thermalVision, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177DA0, void, set_thermalVision, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x009CA200, bool, get_lensDirt, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177DF0, void, set_lensDirt, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0074B550, float, get_lensDirtThreshold, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177E10, void, set_lensDirtThreshold, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A79490, float, get_lensDirtIntensity, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177E30, void, set_lensDirtIntensity, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00660430, app::Texture2D*, get_lensDirtTexture, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177E50, void, set_lensDirtTexture, (app::Beautify * this_ptr, app::Texture2D* value))
    IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_bloom, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177F20, void, set_bloom, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x03177F40, float, get_bloomIntensity, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177F50, void, set_bloomIntensity, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x008A6E90, bool, get_bloomAntiflicker, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03178020, void, set_bloomAntiflicker, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006E00E0, float, get_bloomThreshold, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03178040, void, set_bloomThreshold, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00875720, bool, get_bloomCustomize, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03178060, void, set_bloomCustomize, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00508FE0, bool, get_bloomDebug, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03178080, void, set_bloomDebug, (app::Beautify * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x009C5D50, float, get_bloomWeight0, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031780A0, void, set_bloomWeight0, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00689CC0, float, get_bloomWeight1, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031780C0, void, set_bloomWeight1, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0070BAF0, float, get_bloomWeight2, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031780E0, void, set_bloomWeight2, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x006F45A0, float, get_bloomWeight3, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03178100, void, set_bloomWeight3, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x006F45C0, float, get_bloomWeight4, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03178120, void, set_bloomWeight4, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01256740, float, get_bloomWeight5, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03178140, void, set_bloomWeight5, (app::Beautify * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x03178160, app::Beautify*, get_instance, ())
    IL2CPP_REGISTER_METHOD(0x011354B0, app::Camera*, get_cameraEffect, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031783D0, void, OnEnable, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03178520, void, OnDisable, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03178680, void, Reset, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03178690, void, LateUpdate, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03178AC0, void, OnRenderImage, (app::Beautify * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03179AC0, void, BlurThis, (app::Beautify * this_ptr, app::RenderTexture* rt))
    IL2CPP_REGISTER_METHOD(0x03179D60, void, UpdateMaterialProperties, (app::Beautify * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317AD40, void, UpdateSharpenParams, (app::Beautify * this_ptr, float sharpen))
    IL2CPP_REGISTER_METHOD(0x0317AE90, void, SetBloomWeights, (app::Beautify * this_ptr, float w0, float w1, float w2, float w3, float w4, float w5))
    IL2CPP_REGISTER_METHOD(0x0317AEE0, void, ctor, (app::Beautify * this_ptr))
} // namespace app::classes::BeautifyEffect::Beautify
