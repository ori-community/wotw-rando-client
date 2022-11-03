#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DropLootSettings {
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsEnemyLoot, (app::DropLootSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsEnemyLoot, (app::DropLootSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00BDD210, float, get_HeartChance, (app::DropLootSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDD440, float, get_EnergyShardChance, (app::DropLootSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDD670, int32_t, get_HeartCount, (app::DropLootSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDD860, int32_t, get_EnergyCount, (app::DropLootSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDDA50, void, ctor, (app::DropLootSettings * this_ptr))
} // namespace app::classes::DropLootSettings
