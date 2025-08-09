#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IXmlNode.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XAttribute.h>
#include <Modloader/app/structs/XAttributeWrapper.h>

namespace app::classes::Newtonsoft::Json::Converters::XAttributeWrapper {
    IL2CPP_REGISTER_METHOD(0x01A55F20, app::XAttribute*, get_Attribute, app::XAttributeWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::XAttributeWrapper* this_ptr, app::XAttribute* attribute)
    IL2CPP_REGISTER_METHOD(0x01A55FF0, app::String*, get_Value, app::XAttributeWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A56010, app::String*, get_LocalName, app::XAttributeWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A56040, app::String*, get_NamespaceUri, app::XAttributeWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A56080, app::IXmlNode*, get_ParentNode, app::XAttributeWrapper* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Converters::XAttributeWrapper
