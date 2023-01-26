#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderBossCameraTargetsProvider.h>
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiderBossCameraTargetsProvider {
    IL2CPP_REGISTER_METHOD(0x0096A2E0, float, get_GroundHeight, (app::SpiderBossCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096A360, void, Awake, (app::SpiderBossCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096A390, void, UpdateTargets, (app::SpiderBossCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096A4B0, void, UpdateKwolokPosition, (app::SpiderBossCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096A720, app::List_1_Moon_CameraTargetSettings_*, GetTargets, (app::SpiderBossCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096ABE0, app::Vector3, GetOriPredictedPosition, (app::SpiderBossCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096AD00, app::Vector3, GetPredictedGroundPosition, (app::SpiderBossCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933260, app::Vector3, GetSpiderPos, (app::SpiderBossCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096AE30, app::Vector2, get_OriPadding, (app::SpiderBossCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096AEA0, void, ctor, (app::SpiderBossCameraTargetsProvider * this_ptr))
} // namespace app::classes::SpiderBossCameraTargetsProvider
