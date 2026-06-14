#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardTypeListProvider.h>
#include <Modloader/app/structs/SpiritShardType__Enum__Array.h>

namespace app::classes::SpiritShardTypeListProvider {
    IL2CPP_REGISTER_METHOD(0x00D6AD70, app::SpiritShardType__Enum__Array*, GetShardList, )
    IL2CPP_REGISTER_METHOD(0x00D6B080, app::SpiritShardType__Enum__Array*, get_ShardList, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SpiritShardTypeListProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D6B120, void, cctor, )
} // namespace app::classes::SpiritShardTypeListProvider
