#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Int64_System_Single___Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int64_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0011D740, void, ctor, app::KeyValuePair_2_System_Int64_System_Single___Boxed* this_ptr, int64_t key, float value)
    IL2CPP_REGISTER_METHOD(0x00107C00, int64_t, get_Key, app::KeyValuePair_2_System_Int64_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00111970, float, get_Value, app::KeyValuePair_2_System_Int64_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00151360, app::String*, ToString, app::KeyValuePair_2_System_Int64_System_Single___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int64_System_Single_
