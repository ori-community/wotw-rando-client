#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/QueueDebugView_1_System_Object_.h>
#include <Modloader/app/structs/Queue_1_System_Object_.h>

namespace app::classes::System::Collections::Generic::QueueDebugView_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0243AC00, app::Object__Array*, get_Items, (app::QueueDebugView_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243AB30, void, ctor, (app::QueueDebugView_1_System_Object_ * this_ptr, app::Queue_1_System_Object_* queue))
} // namespace app::classes::System::Collections::Generic::QueueDebugView_1_System_Object_
