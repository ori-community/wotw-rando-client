#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlNodeEventArgs.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::Serialization::XmlNodeEventArgs {
    IL2CPP_REGISTER_METHOD(0x025A24D0, void, ctor, (app::XmlNodeEventArgs * this_ptr, app::XmlNode* xml_node, int32_t line_number, int32_t line_position, app::Object* o))
}
