#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IcyFeralMinerPlaceholder {
    IL2CPP_REGISTER_METHOD(0x006253C0, app::MinerSpawnType__Enum, get_SpawnType, (app::IcyFeralMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253D0, app::GameObject*, get_Prefab, (app::IcyFeralMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (app::IcyFeralMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253F0, app::MinerEntity*, get_CurrentEntity, (app::IcyFeralMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006254B0, void, Spawn, (app::IcyFeralMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::IcyFeralMinerPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00625590, void, ctor, (app::IcyFeralMinerPlaceholder * this_ptr))
} // namespace app::classes::IcyFeralMinerPlaceholder
