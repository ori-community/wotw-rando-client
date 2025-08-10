#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DepthOfFieldController.h>
#include <Modloader/app/structs/SliceRenderSettings.h>

namespace app::classes::DepthOfFieldController {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::SliceRenderSettings*, get_SliceRenderSettings, app::DepthOfFieldController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B83CE0, void, ctor, app::DepthOfFieldController* this_ptr)
} // namespace app::classes::DepthOfFieldController
