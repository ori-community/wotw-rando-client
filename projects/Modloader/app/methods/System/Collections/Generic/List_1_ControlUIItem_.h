#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_ControlUIItem_.h>
#include <Modloader/app/structs/ControlUIItem.h>
#include <Modloader/app/structs/List_1_T_Enumerator_ControlUIItem_.h>

namespace app::classes::System::Collections::Generic::List_1_ControlUIItem_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_ControlUIItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_ControlUIItem_, GetEnumerator, (app::List_1_ControlUIItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ControlUIItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ControlUIItem_ * this_ptr, app::ControlUIItem* item))
} // namespace app::classes::System::Collections::Generic::List_1_ControlUIItem_
