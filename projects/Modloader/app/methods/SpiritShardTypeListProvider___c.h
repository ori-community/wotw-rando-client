#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardTypeListProvider_c.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>

namespace app::classes::SpiritShardTypeListProvider___c {
    IL2CPP_REGISTER_METHOD(0x00D6B1B0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SpiritShardTypeListProvider_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D6B2F0, bool, _GetShardList_b__1_0, app::SpiritShardTypeListProvider_c* this_ptr, app::SpiritShardType__Enum x)
} // namespace app::classes::SpiritShardTypeListProvider___c
