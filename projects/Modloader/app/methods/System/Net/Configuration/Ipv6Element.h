#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Ipv6Element.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>

namespace app::classes::System::Net::Configuration::Ipv6Element {
    IL2CPP_REGISTER_METHOD(0x02019B90, void, ctor, (app::Ipv6Element * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019BC0, bool, get_Enabled, (app::Ipv6Element * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019BF0, void, set_Enabled, (app::Ipv6Element * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02019C20, app::ConfigurationPropertyCollection*, get_Properties, (app::Ipv6Element * this_ptr))
} // namespace app::classes::System::Net::Configuration::Ipv6Element
