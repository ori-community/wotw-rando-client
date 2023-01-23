#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlNodeChangedEventArgs.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNodeChangedAction__Enum.h>

namespace app::classes::System::Xml::XmlNodeChangedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01DC7BF0, void, ctor, (app::XmlNodeChangedEventArgs * this_ptr, app::XmlNode* node, app::XmlNode* old_parent, app::XmlNode* new_parent, app::String* old_value, app::String* new_value, app::XmlNodeChangedAction__Enum action))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::XmlNodeChangedAction__Enum, get_Action, (app::XmlNodeChangedEventArgs * this_ptr))
} // namespace app::classes::System::Xml::XmlNodeChangedEventArgs
