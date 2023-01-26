#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_List_1_System_Byte_.h>
#include <Modloader/app/structs/List_1_System_Byte__1.h>

namespace app::classes::System::Collections::Generic::Queue_1_List_1_System_Byte____ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_List_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::List_1_System_Byte__1*, Dequeue, (app::Queue_1_List_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_List_1_System_Byte_ * this_ptr, app::List_1_System_Byte__1* item))
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_List_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Queue_1_List_1_System_Byte_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Queue_1_List_1_System_Byte____
