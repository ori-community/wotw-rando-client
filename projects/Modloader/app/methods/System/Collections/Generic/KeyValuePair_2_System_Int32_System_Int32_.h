#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Int32___Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Key, app::KeyValuePair_2_System_Int32_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113CE0, int32_t, get_Value, app::KeyValuePair_2_System_Int32_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor, app::KeyValuePair_2_System_Int32_System_Int32___Boxed* this_ptr, int32_t key, int32_t value)
    IL2CPP_REGISTER_METHOD(0x001509C0, app::String*, ToString, app::KeyValuePair_2_System_Int32_System_Int32___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_System_Int32_
