#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChainLevelAndCount__Boxed.h>
#include <Modloader/app/structs/ChainLevelAndCount.h>

namespace app::classes::Motvin::Collections::ChainLevelAndCount {
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor, (app::ChainLevelAndCount__Boxed * this_ptr, int32_t level, int32_t count))
    IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo, (app::ChainLevelAndCount__Boxed * this_ptr, app::ChainLevelAndCount other))
} // namespace app::classes::Motvin::Collections::ChainLevelAndCount
