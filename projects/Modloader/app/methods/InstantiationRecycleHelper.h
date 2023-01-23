#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InstantiationRecycleHelper.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::InstantiationRecycleHelper {
    IL2CPP_REGISTER_METHOD(0x006366B0, void, ctor, (app::InstantiationRecycleHelper * this_ptr, int32_t prewarm_amount, bool limit_amount_of_active_instances))
    IL2CPP_REGISTER_METHOD(0x00636820, app::GameObject*, InstantiateImmediate, (app::InstantiationRecycleHelper * this_ptr, app::GameObject* original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHOD(0x00636C20, app::GameObject*, InstantiateImmediateOptional, (app::InstantiationRecycleHelper * this_ptr, app::GameObject* original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record, int32_t frames_to_test_against, int32_t allowed_instance_count, float distance_threshold))
} // namespace app::classes::InstantiationRecycleHelper
