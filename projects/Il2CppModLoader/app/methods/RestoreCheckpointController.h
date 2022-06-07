#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RestoreCheckpointController {
    IL2CPP_REGISTER_METHOD(0x0090B8A0, void, RestoreCheckpoint, (app::RestoreCheckpointController * this_ptr, bool load_from_disc))
    IL2CPP_REGISTER_METHOD(0x0090C160, app::IEnumerator *, MoveCameraInstantlyAgain, (app::RestoreCheckpointController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090C2A0, void, FadeOutComplete, (app::RestoreCheckpointController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047189B8, RestoreCheckpointController_FadeOutComplete__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0090C390, void, FinishLoading, (app::RestoreCheckpointController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733538, RestoreCheckpointController_FinishLoading__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0090C610, bool, ShouldSpawnOnClosestInvisibleCheckpoint, ())
    IL2CPP_REGISTER_METHOD(0x0090C660, app::Vector3, FindClosestInvisibleCheckpoint, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RestoreCheckpointController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AAB90, app::Object *, FindClosestTypeToPosition_1, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x016AAB90, app::InvisibleCheckpoint *, FindClosestTypeToPosition_2, (app::Vector3 position))
    IL2CPP_REGISTER_METHODINFO(0x04706B88, RestoreCheckpointController_FindClosestTypeToPosition_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AAB90, app::SeinPlaceholder *, FindClosestTypeToPosition_3, (app::Vector3 position))
    IL2CPP_REGISTER_METHODINFO(0x047164D0, RestoreCheckpointController_FindClosestTypeToPosition_2__MethodInfo)
}
