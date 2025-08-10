#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Queue_1_System_Action_.h>

namespace app::classes::System::Collections::Generic::Queue_1_System_Action_ {
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::Action*, Dequeue, app::Queue_1_System_Action_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::Queue_1_System_Action_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, app::Queue_1_System_Action_* this_ptr, app::Action* item)
    IL2CPP_REGISTER_METHOD(0x02CA7080, void, ctor_1, app::Queue_1_System_Action_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_2, app::Queue_1_System_Action_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, app::Queue_1_System_Action_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_System_Action_
