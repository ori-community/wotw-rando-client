#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_MenuScreenManager_Screens_System_Func_1_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_MenuScreenManager_Screens_System_Func_1_.h>
#include <Modloader/app/structs/Func_1_MenuScreen_.h>
#include <Modloader/app/structs/MenuScreenManager_Screens__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_MenuScreenManager_Screens_System_Func_1_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_MenuScreenManager_Screens_System_Func_1_* this_ptr,
        app::MenuScreenManager_Screens__Enum key,
        app::Func_1_MenuScreen_** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_MenuScreenManager_Screens_System_Func_1_,
        GetEnumerator,
        app::Dictionary_2_MenuScreenManager_Screens_System_Func_1_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_MenuScreenManager_Screens_System_Func_1_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_MenuScreenManager_Screens_System_Func_1_* this_ptr,
        app::MenuScreenManager_Screens__Enum key,
        app::Func_1_MenuScreen_* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_MenuScreenManager_Screens_System_Func_1_
