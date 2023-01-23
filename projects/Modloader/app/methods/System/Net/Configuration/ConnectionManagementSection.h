#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConnectionManagementSection.h>
#include <Modloader/app/structs/ConnectionManagementElementCollection.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>

namespace app::classes::System::Net::Configuration::ConnectionManagementSection {
    IL2CPP_REGISTER_METHOD(0x02018C50, void, ctor, (app::ConnectionManagementSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731B58, ConnectionManagementSection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018C80, app::ConnectionManagementElementCollection*, get_ConnectionManagement, (app::ConnectionManagementSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047844D8, ConnectionManagementSection_get_ConnectionManagement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018CB0, app::ConfigurationPropertyCollection*, get_Properties, (app::ConnectionManagementSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047214E8, ConnectionManagementSection_get_Properties__MethodInfo)
} // namespace app::classes::System::Net::Configuration::ConnectionManagementSection
