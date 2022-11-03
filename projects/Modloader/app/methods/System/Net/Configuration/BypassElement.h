#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Configuration::BypassElement {
    IL2CPP_REGISTER_METHOD(0x02018500, void, ctor_1, (app::BypassElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477BF78, BypassElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018530, void, ctor_2, (app::BypassElement * this_ptr, app::String* address))
    IL2CPP_REGISTER_METHODINFO(0x047227C8, BypassElement__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018560, app::String*, get_Address, (app::BypassElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785F98, BypassElement_get_Address__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018590, void, set_Address, (app::BypassElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x047074B0, BypassElement_set_Address__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020185C0, app::ConfigurationPropertyCollection*, get_Properties, (app::BypassElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709400, BypassElement_get_Properties__MethodInfo)
} // namespace app::classes::System::Net::Configuration::BypassElement
