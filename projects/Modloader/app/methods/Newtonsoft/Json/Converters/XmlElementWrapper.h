#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlElementWrapper.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/IXmlNode.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Converters::XmlElementWrapper {
    IL2CPP_REGISTER_METHOD(0x01A59FC0, void, ctor, (app::XmlElementWrapper * this_ptr, app::XmlElement* element))
    IL2CPP_REGISTER_METHOD(0x01A5B460, void, SetAttributeNode, (app::XmlElementWrapper * this_ptr, app::IXmlNode* attribute))
    IL2CPP_REGISTER_METHOD(0x01A5B5C0, app::String*, GetPrefixOfNamespace, (app::XmlElementWrapper * this_ptr, app::String* namespace_uri))
    IL2CPP_REGISTER_METHOD(0x01A5B5F0, bool, get_IsEmpty, (app::XmlElementWrapper * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Converters::XmlElementWrapper
