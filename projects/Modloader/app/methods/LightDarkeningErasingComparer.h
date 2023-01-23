#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightDarkeningErasingComparer.h>
#include <Modloader/app/structs/PointLightMaskModifier.h>

namespace app::classes::LightDarkeningErasingComparer {
    IL2CPP_REGISTER_METHOD(0x0114C7F0, int32_t, Compare, (app::LightDarkeningErasingComparer * this_ptr, app::PointLightMaskModifier* x, app::PointLightMaskModifier* y))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LightDarkeningErasingComparer * this_ptr))
} // namespace app::classes::LightDarkeningErasingComparer
