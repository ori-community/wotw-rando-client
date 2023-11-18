#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConnectionManagementElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Configuration::ConnectionManagementElement {
    IL2CPP_REGISTER_METHOD(0x02018890, void, ctor_1, (app::ConnectionManagementElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020188C0, void, ctor_2, (app::ConnectionManagementElement * this_ptr, app::String* address, int32_t max_connection))
    IL2CPP_REGISTER_METHOD(0x020188F0, app::String*, get_Address, (app::ConnectionManagementElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018920, void, set_Address, (app::ConnectionManagementElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02018950, int32_t, get_MaxConnection, (app::ConnectionManagementElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018980, void, set_MaxConnection, (app::ConnectionManagementElement * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x020189B0, app::ConfigurationPropertyCollection*, get_Properties, (app::ConnectionManagementElement * this_ptr))
} // namespace app::classes::System::Net::Configuration::ConnectionManagementElement
