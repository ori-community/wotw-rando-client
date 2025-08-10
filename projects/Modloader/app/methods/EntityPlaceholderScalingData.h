#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityPlaceholderScalingData.h>

namespace app::classes::EntityPlaceholderScalingData {
    IL2CPP_REGISTER_METHOD(0x00C9DDB0, void, OnValidate, app::EntityPlaceholderScalingData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9DE60, void, ctor, app::EntityPlaceholderScalingData* this_ptr)
} // namespace app::classes::EntityPlaceholderScalingData
