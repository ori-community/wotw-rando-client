#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/ModuleElement.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Configuration::ModuleElement {
    IL2CPP_REGISTER_METHOD(0x02019CB0, void, ctor, app::ModuleElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019CE0, app::ConfigurationPropertyCollection*, get_Properties, app::ModuleElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019D10, app::String*, get_Type, app::ModuleElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019D40, void, set_Type, app::ModuleElement* this_ptr, app::String* value)
} // namespace app::classes::System::Net::Configuration::ModuleElement
