#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::CallContextSecurityData {
    IL2CPP_REGISTER_METHOD(0x00627D70, bool, get_HasInfo, (app::CallContextSecurityData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0230E400, app::Object *, Clone, (app::CallContextSecurityData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CallContextSecurityData * this_ptr))
}
