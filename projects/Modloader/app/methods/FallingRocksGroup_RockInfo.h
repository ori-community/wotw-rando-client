#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FallingRocksGroup_RockInfo.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::FallingRocksGroup_RockInfo {
    IL2CPP_REGISTER_METHOD(0x0099AAE0, int32_t, CompareTo, app::FallingRocksGroup_RockInfo* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, ShouldShowAntic, app::FallingRocksGroup_RockInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0099AC00, void, ctor, app::FallingRocksGroup_RockInfo* this_ptr)
} // namespace app::classes::FallingRocksGroup_RockInfo
