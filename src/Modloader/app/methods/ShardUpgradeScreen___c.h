#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShardUpgradeScreen_c.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>

namespace app::classes::ShardUpgradeScreen___c {
    IL2CPP_REGISTER_METHOD(0x005B0C00, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ShardUpgradeScreen_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B0D40, bool, _Init_b__17_0, app::ShardUpgradeScreen_c* this_ptr, app::SpiritShardType__Enum x)
} // namespace app::classes::ShardUpgradeScreen___c
