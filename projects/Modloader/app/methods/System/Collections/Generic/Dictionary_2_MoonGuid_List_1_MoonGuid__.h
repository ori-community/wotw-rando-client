#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_MoonGuid_List_1_MoonGuid_.h>
#include <Modloader/app/structs/List_1_MoonGuid_.h>
#include <Modloader/app/structs/MoonGuid.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_List_1_MoonGuid__ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_MoonGuid_List_1_MoonGuid_* this_ptr, app::MoonGuid* key)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, app::Dictionary_2_MoonGuid_List_1_MoonGuid_* this_ptr, app::MoonGuid* key, app::List_1_MoonGuid_* value)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::List_1_MoonGuid_*, get_Item, app::Dictionary_2_MoonGuid_List_1_MoonGuid_* this_ptr, app::MoonGuid* key)
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, app::Dictionary_2_MoonGuid_List_1_MoonGuid_* this_ptr, int32_t capacity)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_List_1_MoonGuid__
