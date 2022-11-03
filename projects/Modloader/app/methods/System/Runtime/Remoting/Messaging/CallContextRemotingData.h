#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::CallContextRemotingData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_LogicalCallID, (app::CallContextRemotingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_LogicalCallID, (app::CallContextRemotingData * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00627D70, bool, get_HasInfo, (app::CallContextRemotingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0230E2B0, app::Object*, Clone, (app::CallContextRemotingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CallContextRemotingData * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::Messaging::CallContextRemotingData
