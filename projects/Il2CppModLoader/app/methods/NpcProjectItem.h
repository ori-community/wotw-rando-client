#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::NpcProjectItem {
    IL2CPP_REGISTER_METHOD(0x0060D030, bool, PurchasedNotFinished, (app::NpcProjectItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060D060, int32_t, get_MaxLevel, (app::NpcProjectItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::NpcProjectItem * this_ptr))
} // namespace app::classes::NpcProjectItem
