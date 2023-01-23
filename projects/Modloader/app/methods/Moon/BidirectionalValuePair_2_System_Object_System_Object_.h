#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/BidirectionalValuePair_2_System_Object_System_Object___Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BidirectionalValuePair_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object*, get_FirstValue, (app::BidirectionalValuePair_2_System_Object_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C10, app::Object*, get_SecondValue, (app::BidirectionalValuePair_2_System_Object_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::BidirectionalValuePair_2_System_Object_System_Object___Boxed * this_ptr, app::Object* first_value, app::Object* second_value))
    IL2CPP_REGISTER_METHOD(0x001FF170, app::String*, ToString, (app::BidirectionalValuePair_2_System_Object_System_Object___Boxed * this_ptr))
} // namespace app::classes::Moon::BidirectionalValuePair_2_System_Object_System_Object_
