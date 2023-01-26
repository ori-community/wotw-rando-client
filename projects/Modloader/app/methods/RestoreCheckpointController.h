#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RestoreCheckpointController.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/InvisibleCheckpoint.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeinPlaceholder.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RestoreCheckpointController {
    IL2CPP_REGISTER_METHOD(0x0090B8A0, void, RestoreCheckpoint, (app::RestoreCheckpointController * this_ptr, bool load_from_disc))
    IL2CPP_REGISTER_METHOD(0x0090C160, app::IEnumerator*, MoveCameraInstantlyAgain, (app::RestoreCheckpointController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090C2A0, void, FadeOutComplete, (app::RestoreCheckpointController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090C390, void, FinishLoading, (app::RestoreCheckpointController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090C610, bool, ShouldSpawnOnClosestInvisibleCheckpoint, ())
    IL2CPP_REGISTER_METHOD(0x0090C660, app::Vector3, FindClosestInvisibleCheckpoint, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RestoreCheckpointController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AAB90, app::Object*, FindClosestTypeToPosition_1, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x016AAB90, app::InvisibleCheckpoint*, FindClosestTypeToPosition_2, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x016AAB90, app::SeinPlaceholder*, FindClosestTypeToPosition_3, (app::Vector3 position))
} // namespace app::classes::RestoreCheckpointController
