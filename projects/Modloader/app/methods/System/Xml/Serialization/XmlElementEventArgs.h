#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlElementEventArgs.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Serialization::XmlElementEventArgs {
    IL2CPP_REGISTER_METHOD(0x025A2330, void, ctor, (app::XmlElementEventArgs * this_ptr, app::XmlElement* elem, int32_t line_number, int32_t line_position, app::Object* o, app::String* qnames))
}
