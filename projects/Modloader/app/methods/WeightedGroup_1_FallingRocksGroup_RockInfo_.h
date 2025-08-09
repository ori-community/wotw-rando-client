#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FallingRocksGroup_RockInfo.h>
#include <Modloader/app/structs/List_1_FallingRocksGroup_RockInfo_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/WeightedGroup_1_FallingRocksGroup_RockInfo_.h>

namespace app::classes::WeightedGroup_1_FallingRocksGroup_RockInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x02ACF4C0,
        void,
        Initialize,
        app::WeightedGroup_1_FallingRocksGroup_RockInfo_* this_ptr,
        app::List_1_FallingRocksGroup_RockInfo_* elements,
        app::List_1_System_Single_* weights
    )
    IL2CPP_REGISTER_METHOD(0x02AD0150, app::FallingRocksGroup_RockInfo*, GetRandomElement, app::WeightedGroup_1_FallingRocksGroup_RockInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::WeightedGroup_1_FallingRocksGroup_RockInfo_* this_ptr)
} // namespace app::classes::WeightedGroup_1_FallingRocksGroup_RockInfo_
