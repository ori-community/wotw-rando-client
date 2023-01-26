#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_StatSetting_.h>
#include <Modloader/app/structs/StatSetting.h>

namespace app::classes::System::Collections::Generic::List_1_StatSetting_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_StatSetting_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_StatSetting_ * this_ptr, app::StatSetting* item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_StatSetting_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_StatSetting_
