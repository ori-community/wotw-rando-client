#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_List_1_System_Byte_.h>
#include <Modloader/app/structs/List_1_System_Byte_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_List_1_System_Byte_.h>

namespace app::classes::System::Collections::Generic::List_1_List_1_System_Byte__ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_List_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_List_1_System_Byte_, GetEnumerator, (app::List_1_List_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_List_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_List_1_System_Byte_ * this_ptr, app::List_1_System_Byte_* item))
} // namespace app::classes::System::Collections::Generic::List_1_List_1_System_Byte__
