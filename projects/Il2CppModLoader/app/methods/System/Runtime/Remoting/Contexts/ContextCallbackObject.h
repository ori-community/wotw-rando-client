#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Contexts::ContextCallbackObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DoCallBack, (app::ContextCallbackObject * this_ptr, app::CrossContextDelegate * deleg))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ContextCallbackObject * this_ptr))
}
