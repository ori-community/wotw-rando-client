#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IdnElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/UriIdnScope__Enum.h>

namespace app::classes::System::Configuration::IdnElement {
    IL2CPP_REGISTER_METHOD(0x02961B40, void, ctor, (app::IdnElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961B70, app::UriIdnScope__Enum, get_Enabled, (app::IdnElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961BA0, void, set_Enabled, (app::IdnElement * this_ptr, app::UriIdnScope__Enum value))
    IL2CPP_REGISTER_METHOD(0x02961BD0, app::ConfigurationPropertyCollection*, get_Properties, (app::IdnElement * this_ptr))
} // namespace app::classes::System::Configuration::IdnElement
