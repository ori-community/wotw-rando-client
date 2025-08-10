#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_UberWaterControl_.h>
#include <Modloader/app/structs/List_1_UberWaterControl_.h>
#include <Modloader/app/structs/UberWaterControl.h>

namespace app::classes::System::Collections::Generic::List_1_UberWaterControl_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_UberWaterControl_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::UberWaterControl*, get_Item, app::List_1_UberWaterControl_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_UberWaterControl_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UberWaterControl_, GetEnumerator, app::List_1_UberWaterControl_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_UberWaterControl_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_UberWaterControl_* this_ptr, app::UberWaterControl* item)
} // namespace app::classes::System::Collections::Generic::List_1_UberWaterControl_
