#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/StackDebugView_1_System_Object_.h>
#include <Modloader/app/structs/Stack_1_System_Object_.h>

namespace app::classes::System::Collections::Generic::StackDebugView_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0243AC00, app::Object__Array*, get_Items, (app::StackDebugView_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF3E50, void, ctor, (app::StackDebugView_1_System_Object_ * this_ptr, app::Stack_1_System_Object_* stack))
} // namespace app::classes::System::Collections::Generic::StackDebugView_1_System_Object_
