#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_YouCanLeaveYourHatOn_Data_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_YouCanLeaveYourHatOn_Data_.h>
#include <Modloader/app/structs/List_1_YouCanLeaveYourHatOn_Data_.h>
#include <Modloader/app/structs/Predicate_1_YouCanLeaveYourHatOn_Data_.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_Data.h>

namespace app::classes::System::Collections::Generic::List_1_YouCanLeaveYourHatOn_Data_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_YouCanLeaveYourHatOn_Data_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F05A0,
        app::YouCanLeaveYourHatOn_Data*,
        Find,
        app::List_1_YouCanLeaveYourHatOn_Data_* this_ptr,
        app::Predicate_1_YouCanLeaveYourHatOn_Data_* match
    )
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_YouCanLeaveYourHatOn_Data_* this_ptr, app::YouCanLeaveYourHatOn_Data* item)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, app::List_1_YouCanLeaveYourHatOn_Data_* this_ptr, app::Comparison_1_YouCanLeaveYourHatOn_Data_* comparison)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_YouCanLeaveYourHatOn_Data_, GetEnumerator, app::List_1_YouCanLeaveYourHatOn_Data_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_YouCanLeaveYourHatOn_Data_
