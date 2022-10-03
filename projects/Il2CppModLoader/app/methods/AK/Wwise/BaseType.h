#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AK::Wwise::BaseType {
    IL2CPP_REGISTER_METHOD(0x026C1570, app::String*, get_Name, (app::BaseType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C1620, uint32_t, get_Id, (app::BaseType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C1730, void, set_Id, (app::BaseType * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026C1740, uint32_t, GetId, (app::BaseType * this_ptr, app::Object_1* context, app::String* context_message))
    IL2CPP_REGISTER_METHOD(0x026C1B40, uint32_t, get_GuidHash, (app::BaseType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C1B80, bool, IsValid, (app::BaseType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C1C40, bool, Validate, (app::BaseType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Verify, (app::BaseType * this_ptr, app::AKRESULT__Enum result))
    IL2CPP_REGISTER_METHOD(0x026C1C60, app::String*, ToString, (app::BaseType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C1D40, bool, Equals, (app::BaseType * this_ptr, app::BaseType* other))
    IL2CPP_REGISTER_METHOD(0x026C1D90, void, ctor, (app::BaseType * this_ptr))
} // namespace app::classes::AK::Wwise::BaseType
