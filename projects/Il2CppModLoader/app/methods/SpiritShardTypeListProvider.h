#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiritShardTypeListProvider {
    IL2CPP_REGISTER_METHOD(0x00D6AD70, app::SpiritShardType__Enum__Array *, GetShardList, ())
    IL2CPP_REGISTER_METHOD(0x00D6B080, app::SpiritShardType__Enum__Array *, get_ShardList, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SpiritShardTypeListProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6B120, void, cctor, ())
}
