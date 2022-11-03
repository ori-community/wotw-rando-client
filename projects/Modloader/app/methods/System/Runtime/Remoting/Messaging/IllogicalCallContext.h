#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::IllogicalCallContext {
    IL2CPP_REGISTER_METHOD(0x02310650, app::Hashtable*, get_Datastore, (app::IllogicalCallContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_HostContext, (app::IllogicalCallContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_HostContext, (app::IllogicalCallContext * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x023107C0, bool, get_HasUserData, (app::IllogicalCallContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023107F0, app::IllogicalCallContext*, CreateCopy, (app::IllogicalCallContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IllogicalCallContext * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::Messaging::IllogicalCallContext
