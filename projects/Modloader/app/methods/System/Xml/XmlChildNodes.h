#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlChildNodes.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/XmlNode.h>

namespace app::classes::System::Xml::XmlChildNodes {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XmlChildNodes * this_ptr, app::XmlNode* container))
    IL2CPP_REGISTER_METHOD(0x019600D0, app::XmlNode*, Item, (app::XmlChildNodes * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x01960140, int32_t, get_Count, (app::XmlChildNodes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019601B0, app::IEnumerator*, GetEnumerator, (app::XmlChildNodes * this_ptr))
} // namespace app::classes::System::Xml::XmlChildNodes
