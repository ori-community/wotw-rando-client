#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyDamageReciever.h>
#include <Modloader/app/structs/List_1_LegacyDamageReciever_.h>

namespace app::classes::System::Collections::Generic::List_1_LegacyDamageReciever_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LegacyDamageReciever*, get_Item, app::List_1_LegacyDamageReciever_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_LegacyDamageReciever_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_LegacyDamageReciever_
