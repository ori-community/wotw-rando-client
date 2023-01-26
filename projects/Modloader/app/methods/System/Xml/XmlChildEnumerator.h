#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlChildEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlNode.h>

namespace app::classes::System::Xml::XmlChildEnumerator {
    IL2CPP_REGISTER_METHOD(0x0195FF00, void, ctor, (app::XmlChildEnumerator * this_ptr, app::XmlNode* container))
    IL2CPP_REGISTER_METHOD(0x0195FF40, bool, IEnumerator_MoveNext, (app::XmlChildEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195FF40, bool, MoveNext, (app::XmlChildEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195FFC0, void, IEnumerator_Reset, (app::XmlChildEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01960000, app::Object*, IEnumerator_get_Current, (app::XmlChildEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01960000, app::XmlNode*, get_Current, (app::XmlChildEnumerator * this_ptr))
} // namespace app::classes::System::Xml::XmlChildEnumerator
