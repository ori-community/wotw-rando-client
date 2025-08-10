#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_YouCanLeaveYourHatOn_AssetWithSize_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_YouCanLeaveYourHatOn_AssetWithSize_.h>
#include <Modloader/app/structs/List_1_YouCanLeaveYourHatOn_AssetWithSize_.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_AssetWithSize.h>

namespace app::classes::System::Collections::Generic::List_1_YouCanLeaveYourHatOn_AssetWithSize_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_YouCanLeaveYourHatOn_AssetWithSize_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_YouCanLeaveYourHatOn_AssetWithSize_* this_ptr, app::YouCanLeaveYourHatOn_AssetWithSize* item)
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort,
        app::List_1_YouCanLeaveYourHatOn_AssetWithSize_* this_ptr,
        app::Comparison_1_YouCanLeaveYourHatOn_AssetWithSize_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, app::List_1_YouCanLeaveYourHatOn_AssetWithSize_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_YouCanLeaveYourHatOn_AssetWithSize_,
        GetEnumerator,
        app::List_1_YouCanLeaveYourHatOn_AssetWithSize_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::List_1_YouCanLeaveYourHatOn_AssetWithSize_
