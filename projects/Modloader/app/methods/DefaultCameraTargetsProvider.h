#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DefaultCameraTargetsProvider.h>
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/DefaultCameraProviderEntry.h>

namespace app::classes::DefaultCameraTargetsProvider {
    IL2CPP_REGISTER_METHOD(0x0040F3B0, void, UpdateTargets, (app::DefaultCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B7F1A0, app::List_1_Moon_CameraTargetSettings_*, GetTargets, (app::DefaultCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B7F3F0, app::Vector3, GetOriGroundPosition, (app::DefaultCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B7F4F0, bool, GetPos, (app::DefaultCameraTargetsProvider * this_ptr, app::DefaultCameraProviderEntry* entry, app::Vector3* pos))
    IL2CPP_REGISTER_METHOD(0x00B7F790, void, ctor, (app::DefaultCameraTargetsProvider * this_ptr))
} // namespace app::classes::DefaultCameraTargetsProvider
