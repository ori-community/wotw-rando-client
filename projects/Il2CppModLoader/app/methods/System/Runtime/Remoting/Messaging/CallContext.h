#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::CallContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CallContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object *, SetCurrentCallContext, (app::LogicalCallContext * ctx))
    IL2CPP_REGISTER_METHOD(0x0230E250, app::LogicalCallContext *, SetLogicalCallContext, (app::LogicalCallContext * call_ctx))
}
