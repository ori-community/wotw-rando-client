#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConnectionManagementSection.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/ConnectionManagementElementCollection.h>

namespace app::classes::System::Net::Configuration::ConnectionManagementSection {
    IL2CPP_REGISTER_METHOD(0x02018C50, void, ctor, (app::ConnectionManagementSection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018C80, app::ConnectionManagementElementCollection*, get_ConnectionManagement, (app::ConnectionManagementSection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018CB0, app::ConfigurationPropertyCollection*, get_Properties, (app::ConnectionManagementSection * this_ptr))
} // namespace app::classes::System::Net::Configuration::ConnectionManagementSection
