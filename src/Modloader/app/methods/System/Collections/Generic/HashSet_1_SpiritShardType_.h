#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_SpiritShardType_.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>

namespace app::classes::System::Collections::Generic::HashSet_1_SpiritShardType_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::HashSet_1_SpiritShardType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB6EC0, bool, Contains, app::HashSet_1_SpiritShardType_* this_ptr, app::SpiritShardType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_SpiritShardType_* this_ptr, app::SpiritShardType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_SpiritShardType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, app::HashSet_1_SpiritShardType_* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_SpiritShardType_
