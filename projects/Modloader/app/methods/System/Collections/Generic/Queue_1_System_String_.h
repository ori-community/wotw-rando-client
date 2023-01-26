#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_System_String_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Queue_1_System_String_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Queue_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_System_String_ * this_ptr, app::String* item))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::String*, Dequeue, (app::Queue_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA76E0, app::Queue_1_T_Enumerator_System_String_, GetEnumerator, (app::Queue_1_System_String_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Queue_1_System_String_
