#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SpiritShardUIShardSocket_.h>
#include <Modloader/app/structs/IEnumerable_1_SpiritShardUIShardSocket_.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket__Array.h>

namespace app::classes::System::Collections::Generic::List_1_SpiritShardUIShardSocket_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SpiritShardUIShardSocket_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_SpiritShardUIShardSocket_ * this_ptr, app::IEnumerable_1_SpiritShardUIShardSocket_* collection))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SpiritShardUIShardSocket_ * this_ptr, app::SpiritShardUIShardSocket* item))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SpiritShardUIShardSocket_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::SpiritShardUIShardSocket__Array*, ToArray, (app::List_1_SpiritShardUIShardSocket_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_SpiritShardUIShardSocket_
