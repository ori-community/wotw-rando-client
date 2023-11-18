#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Core_Ambience_Layer_.h>
#include <Modloader/app/structs/Ambience_Layer.h>
#include <Modloader/app/structs/Comparison_1_Core_Ambience_Layer_.h>

namespace app::classes::System::Collections::Generic::List_1_Core_Ambience_Layer_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Core_Ambience_Layer_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Ambience_Layer*, get_Item, (app::List_1_Core_Ambience_Layer_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Core_Ambience_Layer_ * this_ptr, app::Ambience_Layer* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Core_Ambience_Layer_ * this_ptr, app::Ambience_Layer* item))
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_Core_Ambience_Layer_ * this_ptr, app::Comparison_1_Core_Ambience_Layer_* comparison))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Core_Ambience_Layer_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Core_Ambience_Layer_
