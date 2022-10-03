#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CorruptMinerPlaceholder {
    IL2CPP_REGISTER_METHOD(0x006253C0, app::MinerSpawnType__Enum, get_SpawnType, (app::CorruptMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253D0, app::GameObject*, get_Prefab, (app::CorruptMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB1110, app::MinerEntity*, get_CurrentEntity, (app::CorruptMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB11D0, void, Spawn, (app::CorruptMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (app::CorruptMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::CorruptMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB12B0, void, ctor, (app::CorruptMinerPlaceholder * this_ptr))
} // namespace app::classes::CorruptMinerPlaceholder
