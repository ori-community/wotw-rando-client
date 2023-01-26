#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/AsyncLocalValueChangedArgs_1_System_Object___Boxed.h>

namespace app::classes::System::Threading::AsyncLocalValueChangedArgs_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object*, get_PreviousValue, (app::AsyncLocalValueChangedArgs_1_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_PreviousValue, (app::AsyncLocalValueChangedArgs_1_System_Object___Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00107C10, app::Object*, get_CurrentValue, (app::AsyncLocalValueChangedArgs_1_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010D3A0, void, set_CurrentValue, (app::AsyncLocalValueChangedArgs_1_System_Object___Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x001C0320, void, set_ThreadContextChanged, (app::AsyncLocalValueChangedArgs_1_System_Object___Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x001FFB80, void, ctor, (app::AsyncLocalValueChangedArgs_1_System_Object___Boxed * this_ptr, app::Object* previous_value, app::Object* current_value, bool context_changed))
} // namespace app::classes::System::Threading::AsyncLocalValueChangedArgs_1_System_Object_
