#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_LegacyGetAbilityPedestal_.h>
#include <Modloader/app/structs/LegacyGetAbilityPedestal.h>

namespace app::classes::System::Collections::Generic::List_1_LegacyGetAbilityPedestal_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_LegacyGetAbilityPedestal_ * this_ptr, app::LegacyGetAbilityPedestal* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_LegacyGetAbilityPedestal_ * this_ptr, app::LegacyGetAbilityPedestal* item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_LegacyGetAbilityPedestal_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_LegacyGetAbilityPedestal_
