#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardUIStarRow.h>

namespace app::classes::SpiritShardUIStarRow {
    IL2CPP_REGISTER_METHOD(0x00D70AD0, void, SetStarCount, app::SpiritShardUIStarRow* this_ptr, int32_t actual, int32_t total)
    IL2CPP_REGISTER_METHOD(0x00D70F50, void, ctor, app::SpiritShardUIStarRow* this_ptr)
} // namespace app::classes::SpiritShardUIStarRow
