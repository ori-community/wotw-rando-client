#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KeyValuePair_2_System_UInt32_System_Single___Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_UInt32_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0014B250, void, ctor, (app::KeyValuePair_2_System_UInt32_System_Single___Boxed * this_ptr, uint32_t key, float value))
    IL2CPP_REGISTER_METHOD(0x0010E170, uint32_t, get_Key, (app::KeyValuePair_2_System_UInt32_System_Single___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FDE0, float, get_Value, (app::KeyValuePair_2_System_UInt32_System_Single___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00150AD0, app::String*, ToString, (app::KeyValuePair_2_System_UInt32_System_Single___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_UInt32_System_Single_
