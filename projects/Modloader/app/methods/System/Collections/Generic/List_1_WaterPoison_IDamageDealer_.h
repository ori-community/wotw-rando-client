#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_WaterPoison_IDamageDealer_.h>
#include <Modloader/app/structs/WaterPoison_IDamageDealer.h>

namespace app::classes::System::Collections::Generic::List_1_WaterPoison_IDamageDealer_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_WaterPoison_IDamageDealer_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_WaterPoison_IDamageDealer_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::WaterPoison_IDamageDealer*, get_Item, app::List_1_WaterPoison_IDamageDealer_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_WaterPoison_IDamageDealer_* this_ptr, app::WaterPoison_IDamageDealer* item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_WaterPoison_IDamageDealer_* this_ptr, app::WaterPoison_IDamageDealer* item)
} // namespace app::classes::System::Collections::Generic::List_1_WaterPoison_IDamageDealer_
