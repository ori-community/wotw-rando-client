#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ColorVariation.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector4__Array.h>

namespace app::classes::ColorVariation {
    IL2CPP_REGISTER_METHOD(0x00CFBCF0, bool, get_IsVisible, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D44E0, void, Awake, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D44F0, app::Vector4, GetSliceRanges, (app::ColorVariation * this_ptr, float z, app::LayeredRenderSettings* layered_render_setting))
    IL2CPP_REGISTER_METHOD(0x012D4740, void, CacheRenderers, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D5260, void, OnEnable, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D53C0, void, Show, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D53D0, void, Hide, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D53E0, void, FixedUpdate, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D5510, void, Sample, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D5810, app::Color, SetAlpha, (app::ColorVariation * this_ptr, app::Color color, float alpha))
    IL2CPP_REGISTER_METHOD(0x012D5840, void, FillPropertiesForShaders, (app::ColorVariation * this_ptr, app::Vector4__Array** colors, app::Vector4__Array** nz_d_w_h, app::Vector4__Array** plane_o, app::Vector4__Array** main_tex_scale_offset, app::Vector4__Array** main_tex_scroll, app::Vector4__Array** distortion_scale_offset, app::Vector4__Array** distortion_scroll_strength, app::Vector4__Array** slices_ranges, int32_t start_pos, int32_t planes_count))
    IL2CPP_REGISTER_METHOD(0x012D6050, void, FillZeroPropertiesForShaders, (app::Vector4__Array * *colors, app::Vector4__Array** nz_d_w_h, app::Vector4__Array** plane_o, app::Vector4__Array** main_tex_scale_offset, app::Vector4__Array** main_tex_scroll, app::Vector4__Array** distortion_scale_offset, app::Vector4__Array** distortion_scroll_strength, app::Vector4__Array** slices_ranges, int32_t start_pos, int32_t planes_count))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, OnBeforeSerialize, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D6380, void, OnBeforeStrip, (app::ColorVariation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D6570, void, ctor, (app::ColorVariation * this_ptr))
} // namespace app::classes::ColorVariation
