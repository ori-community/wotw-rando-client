#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SpellInventory_Binding_.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>

namespace app::classes::System::Collections::Generic::List_1_SpellInventory_Binding_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SpellInventory_Binding_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1C970, void, Add, (app::List_1_SpellInventory_Binding_ * this_ptr, app::SpellInventory_Binding__Enum item))
    IL2CPP_REGISTER_METHOD(0x02D1F360, app::SpellInventory_Binding__Enum, get_Item, (app::List_1_SpellInventory_Binding_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SpellInventory_Binding_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_SpellInventory_Binding_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_SpellInventory_Binding_
