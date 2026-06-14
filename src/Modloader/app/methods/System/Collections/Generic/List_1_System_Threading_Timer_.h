#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Threading_Timer_.h>
#include <Modloader/app/structs/Timer.h>

namespace app::classes::System::Collections::Generic::List_1_System_Threading_Timer_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_System_Threading_Timer_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Threading_Timer_* this_ptr, app::Timer* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Threading_Timer_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Timer*, get_Item, app::List_1_System_Threading_Timer_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_System_Threading_Timer_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, app::List_1_System_Threading_Timer_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, app::List_1_System_Threading_Timer_* this_ptr, int32_t value)
} // namespace app::classes::System::Collections::Generic::List_1_System_Threading_Timer_
