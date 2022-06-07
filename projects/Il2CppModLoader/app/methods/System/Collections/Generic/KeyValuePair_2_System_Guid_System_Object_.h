#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::KeyValuePair_2_System_Guid_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0011BFB0, void, ctor, (app::KeyValuePair_2_System_Guid_System_Object___Boxed * this_ptr, app::Guid key, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0010A980, app::Guid, get_Key, (app::KeyValuePair_2_System_Guid_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C20, app::Object *, get_Value, (app::KeyValuePair_2_System_Guid_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014FBF0, app::String *, ToString, (app::KeyValuePair_2_System_Guid_System_Object___Boxed * this_ptr))
}
