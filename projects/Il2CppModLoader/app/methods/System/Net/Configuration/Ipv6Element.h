#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Configuration::Ipv6Element {
    IL2CPP_REGISTER_METHOD(0x02019B90, void, ctor, (app::Ipv6Element * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047205E8, Ipv6Element__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019BC0, bool, get_Enabled, (app::Ipv6Element * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F278, Ipv6Element_get_Enabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019BF0, void, set_Enabled, (app::Ipv6Element * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04743F30, Ipv6Element_set_Enabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019C20, app::ConfigurationPropertyCollection *, get_Properties, (app::Ipv6Element * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733F90, Ipv6Element_get_Properties__MethodInfo)
}
