#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GlobalProxySelection.h>
#include <Modloader/app/structs/IWebProxy.h>

namespace app::classes::System::Net::GlobalProxySelection {
    IL2CPP_REGISTER_METHOD(0x01D389E0, app::IWebProxy*, get_Select, )
    IL2CPP_REGISTER_METHOD(0x01D38C60, void, set_Select, app::IWebProxy* value)
    IL2CPP_REGISTER_METHOD(0x01D38D80, app::IWebProxy*, GetEmptyWebProxy, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GlobalProxySelection* this_ptr)
} // namespace app::classes::System::Net::GlobalProxySelection
