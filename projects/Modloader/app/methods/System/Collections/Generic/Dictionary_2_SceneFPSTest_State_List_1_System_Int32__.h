#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_SceneFPSTest_State_List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/SceneFPSTest_State__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SceneFPSTest_State_List_1_System_Int32__ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_SceneFPSTest_State_List_1_System_Int32_ * this_ptr, app::SceneFPSTest_State__Enum key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_SceneFPSTest_State_List_1_System_Int32_ * this_ptr, app::SceneFPSTest_State__Enum key, app::List_1_System_Int32_* value))
    IL2CPP_REGISTER_METHOD(0x02C35530, app::List_1_System_Int32_*, get_Item, (app::Dictionary_2_SceneFPSTest_State_List_1_System_Int32_ * this_ptr, app::SceneFPSTest_State__Enum key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_SceneFPSTest_State_List_1_System_Int32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SceneFPSTest_State_List_1_System_Int32__
