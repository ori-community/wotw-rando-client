#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LayeredRenderSettings_LayerParams.h>

namespace app::classes::LayeredRenderSettings_LayerParams {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::LayeredRenderSettings_LayerParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01428CD0, void, ctor_2, (app::LayeredRenderSettings_LayerParams * this_ptr, app::LayeredRenderSettings_LayerParams* other))
} // namespace app::classes::LayeredRenderSettings_LayerParams
