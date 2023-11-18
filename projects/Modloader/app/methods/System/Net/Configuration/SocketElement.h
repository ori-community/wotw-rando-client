#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SocketElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/IPProtectionLevel__Enum.h>

namespace app::classes::System::Net::Configuration::SocketElement {
    IL2CPP_REGISTER_METHOD(0x01E99320, void, ctor, (app::SocketElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E99350, bool, get_AlwaysUseCompletionPortsForAccept, (app::SocketElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E99380, void, set_AlwaysUseCompletionPortsForAccept, (app::SocketElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01E993B0, bool, get_AlwaysUseCompletionPortsForConnect, (app::SocketElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E993E0, void, set_AlwaysUseCompletionPortsForConnect, (app::SocketElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01E99410, app::IPProtectionLevel__Enum, get_IPProtectionLevel, (app::SocketElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E99440, void, set_IPProtectionLevel, (app::SocketElement * this_ptr, app::IPProtectionLevel__Enum value))
    IL2CPP_REGISTER_METHOD(0x01E99470, app::ConfigurationPropertyCollection*, get_Properties, (app::SocketElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E994A0, void, PostDeserialize, (app::SocketElement * this_ptr))
} // namespace app::classes::System::Net::Configuration::SocketElement
