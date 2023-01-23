#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SliceRenderSettings.h>
#include <Modloader/app/structs/SliceRenderSettings_Slice.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset.h>

namespace app::classes::Moon::Rendering::SliceRenderSettings {
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_NoDofSliceA, (app::SliceRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_NoDofSliceA, (app::SliceRenderSettings * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_NoDofSliceB, (app::SliceRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_NoDofSliceB, (app::SliceRenderSettings * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00EBCB30, int32_t, get_Count, (app::SliceRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EBCB40, app::SliceRenderSettings_Slice, GetSlice, (app::SliceRenderSettings * this_ptr, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x00EBCB90, void, SetSlice, (app::SliceRenderSettings * this_ptr, int32_t idx, app::SliceRenderSettings_Slice slice))
    IL2CPP_REGISTER_METHOD(0x00EBCB40, app::SliceRenderSettings_Slice, get_Item, (app::SliceRenderSettings * this_ptr, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x00EBCBF0, void, ctor_1, (app::SliceRenderSettings * this_ptr, app::LayeredRenderSettings* layered_render_settings))
    IL2CPP_REGISTER_METHOD(0x00EBCEA0, void, ctor_2, (app::SliceRenderSettings * this_ptr, app::SliceRenderSettings* settings_to_copy_from))
    IL2CPP_REGISTER_METHOD(0x00EBCFF0, void, GenerateDefault, (app::SliceRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EBD090, void, ctor_3, (app::SliceRenderSettings * this_ptr, app::AnimationCurve* depth_of_field_curve, app::LayeredRenderSettings* layered_render_settings, app::MoonRenderPipelineAsset* srp_asset))
    IL2CPP_REGISTER_METHOD(0x00EBD4F0, void, Validate_1, (app::SliceRenderSettings * this_ptr, app::LayeredRenderSettings* layered_render_settings))
    IL2CPP_REGISTER_METHOD(0x00EBD610, int32_t, Validate_2, (app::SliceRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EBD8A0, void, UpdateNoDofSlicesIdx, (app::SliceRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnBeforeSerialize, (app::SliceRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnAfterDeserialize, (app::SliceRenderSettings * this_ptr))
} // namespace app::classes::Moon::Rendering::SliceRenderSettings
