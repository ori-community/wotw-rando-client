#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Authorization.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Net::Authorization {
    IL2CPP_REGISTER_METHOD(0x02010AA0, void, ctor_1, (app::Authorization * this_ptr, app::String* token))
    IL2CPP_REGISTER_METHOD(0x02010B60, void, ctor_2, (app::Authorization * this_ptr, app::String* token, bool finished))
    IL2CPP_REGISTER_METHOD(0x02010C30, void, ctor_3, (app::Authorization * this_ptr, app::String* token, bool finished, app::String* connection_group_id))
    IL2CPP_REGISTER_METHOD(0x02010D20, void, ctor_4, (app::Authorization * this_ptr, app::String* token, bool finished, app::String* connection_group_id, bool mutual_auth))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Message, (app::Authorization * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_ConnectionGroupId, (app::Authorization * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Complete, (app::Authorization * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, SetComplete, (app::Authorization * this_ptr, bool complete))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String__Array*, get_ProtectionRealm, (app::Authorization * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02010E10, void, set_ProtectionRealm, (app::Authorization * this_ptr, app::String__Array* value))
    IL2CPP_REGISTER_METHOD(0x02010EE0, bool, get_MutuallyAuthenticated, (app::Authorization * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_MutuallyAuthenticated, (app::Authorization * this_ptr, bool value))
} // namespace app::classes::System::Net::Authorization
