#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneBoundary.h>

namespace app::classes::SceneBoundary {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRenderGizmo, (app::SceneBoundary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00937440, void, ctor, (app::SceneBoundary * this_ptr))
} // namespace app::classes::SceneBoundary
