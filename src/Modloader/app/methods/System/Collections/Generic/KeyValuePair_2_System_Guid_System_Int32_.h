#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Guid_System_Int32___Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Guid_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0010A980, app::Guid, get_Key, app::KeyValuePair_2_System_Guid_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Value, app::KeyValuePair_2_System_Guid_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014F9F0, void, ctor, app::KeyValuePair_2_System_Guid_System_Int32___Boxed* this_ptr, app::Guid key, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0014FA00, app::String*, ToString, app::KeyValuePair_2_System_Guid_System_Int32___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Guid_System_Int32_
