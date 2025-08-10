#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HelpAttribute.h>
#include <Modloader/app/structs/HelpAttribute_MessageType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Attributes::HelpAttribute {
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, ctor, app::HelpAttribute* this_ptr, app::String* text, app::HelpAttribute_MessageType__Enum type)
}
