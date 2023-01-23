#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightCullingSystem.h>
#include <Modloader/app/structs/List_1_PointLightMaskModifier_.h>
#include <Modloader/app/structs/PointLightMaskModifier.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingSettings.h>

namespace app::classes::LightCullingSystem {
    IL2CPP_REGISTER_METHOD(0x0114B1F0, void, Update, (app::LightCullingSystem * this_ptr, app::List_1_PointLightMaskModifier_* lights, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0114B2A0, bool, FlaggedForCulling, (app::LightCullingSystem * this_ptr, app::PointLightMaskModifier* light))
    IL2CPP_REGISTER_METHOD(0x0114B420, void, Clear, (app::LightCullingSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114B4B0, void, ApplySettings, (app::LightCullingSystem * this_ptr, app::LightCullingSystem_LightCullingSettings settings))
    IL2CPP_REGISTER_METHOD(0x0114B5F0, void, ctor, (app::LightCullingSystem * this_ptr))
} // namespace app::classes::LightCullingSystem
