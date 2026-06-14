#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatisticianPlaceholder.h>

namespace app::classes::StatisticianPlaceholder {
    IL2CPP_REGISTER_METHOD(0x009BA870, void, InstantiateFromPooledObj, app::StatisticianPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004181F0, void, ctor, app::StatisticianPlaceholder* this_ptr)
} // namespace app::classes::StatisticianPlaceholder
