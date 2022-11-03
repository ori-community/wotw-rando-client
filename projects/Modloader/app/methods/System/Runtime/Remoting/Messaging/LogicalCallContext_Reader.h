#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::LogicalCallContext_Reader__Boxed * this_ptr, app::LogicalCallContext* ctx))
    IL2CPP_REGISTER_METHOD(0x001D5C40, bool, get_IsNull, (app::LogicalCallContext_Reader__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E6690, bool, get_HasInfo, (app::LogicalCallContext_Reader__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E66A0, app::LogicalCallContext*, Clone, (app::LogicalCallContext_Reader__Boxed * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader
