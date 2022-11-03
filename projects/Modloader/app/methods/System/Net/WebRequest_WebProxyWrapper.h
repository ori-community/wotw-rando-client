#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::WebRequest_WebProxyWrapper {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::WebRequest_WebProxyWrapper * this_ptr, app::WebProxy* web_proxy))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::WebProxy*, get_WebProxy, (app::WebRequest_WebProxyWrapper * this_ptr))
} // namespace app::classes::System::Net::WebRequest_WebProxyWrapper
