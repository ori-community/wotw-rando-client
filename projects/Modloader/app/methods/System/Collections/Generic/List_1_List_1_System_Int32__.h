#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_List_1_System_Int32_.h>

namespace app::classes::System::Collections::Generic::List_1_List_1_System_Int32__ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_List_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_List_1_System_Int32_ * this_ptr, app::List_1_System_Int32_* item))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_List_1_System_Int32_, GetEnumerator, (app::List_1_List_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_List_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::List_1_System_Int32_*, get_Item, (app::List_1_List_1_System_Int32_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::List_1_List_1_System_Int32__
