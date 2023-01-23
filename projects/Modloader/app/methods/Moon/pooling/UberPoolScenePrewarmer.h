#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberPoolScenePrewarmer.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::pooling::UberPoolScenePrewarmer {
    IL2CPP_REGISTER_METHOD(0x00F310D0, void, Awake, (app::UberPoolScenePrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F311F0, void, LoadInstancesIntoPool, (app::UberPoolScenePrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F31380, void, OnDestroy, (app::UberPoolScenePrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::UberPoolScenePrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F31510, void, OnUpdate, (app::UberPoolScenePrewarmer * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00F31620, void, ctor, (app::UberPoolScenePrewarmer * this_ptr))
} // namespace app::classes::Moon::pooling::UberPoolScenePrewarmer
