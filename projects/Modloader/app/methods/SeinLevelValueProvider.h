#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinLevelValueProvider.h>

namespace app::classes::SeinLevelValueProvider {
    IL2CPP_REGISTER_METHOD(0x01023E70, float, GetFloatValue, app::SeinLevelValueProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SeinLevelValueProvider* this_ptr)
} // namespace app::classes::SeinLevelValueProvider
