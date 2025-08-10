#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BypassElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Configuration::BypassElement {
    IL2CPP_REGISTER_METHOD(0x02018500, void, ctor_1, app::BypassElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02018530, void, ctor_2, app::BypassElement* this_ptr, app::String* address)
    IL2CPP_REGISTER_METHOD(0x02018560, app::String*, get_Address, app::BypassElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02018590, void, set_Address, app::BypassElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x020185C0, app::ConfigurationPropertyCollection*, get_Properties, app::BypassElement* this_ptr)
} // namespace app::classes::System::Net::Configuration::BypassElement
