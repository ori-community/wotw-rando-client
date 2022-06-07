#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpellUIPassiveShards {
    IL2CPP_REGISTER_METHOD(0x0094E040, void, SetSocketsDirty, (app::SpellUIPassiveShards * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094E050, void, Awake, (app::SpellUIPassiveShards * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094E350, void, OnDestroy, (app::SpellUIPassiveShards * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094E680, void, OnGlobalShardsUpdated, (app::SpellUIPassiveShards * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719528, SpellUIPassiveShards_OnGlobalShardsUpdated__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0094E750, void, Show, (app::SpellUIPassiveShards * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::SpellUIPassiveShards * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094E820, void, Populate, (app::SpellUIPassiveShards * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094F240, void, ctor, (app::SpellUIPassiveShards * this_ptr))
}
