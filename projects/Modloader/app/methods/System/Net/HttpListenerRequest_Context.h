#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::HttpListenerRequest_Context {
    IL2CPP_REGISTER_METHOD(0x01D4A310, app::ChannelBinding*, GetChannelBinding, (app::HttpListenerRequest_Context * this_ptr, app::ChannelBindingKind__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x04705F00, HttpListenerRequest_Context_GetChannelBinding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HttpListenerRequest_Context * this_ptr))
} // namespace app::classes::System::Net::HttpListenerRequest_Context
