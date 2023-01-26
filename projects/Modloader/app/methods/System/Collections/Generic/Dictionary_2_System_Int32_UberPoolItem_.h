#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_UberPoolItem_.h>
#include <Modloader/app/structs/UberPoolItem.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UberPoolItem_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_UberPoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_UberPoolItem_ * this_ptr, int32_t key, app::UberPoolItem** value))
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::UberPoolItem*, get_Item, (app::Dictionary_2_System_Int32_UberPoolItem_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_UberPoolItem_ * this_ptr, int32_t key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UberPoolItem_
