#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Linq::XStreamingElement {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XName*, get_Name, (app::XStreamingElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303CAC0, app::String*, ToString, (app::XStreamingElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303CAD0, void, WriteTo, (app::XStreamingElement * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHODINFO(0x04744D60, XStreamingElement_WriteTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0303CC70, app::String*, GetXmlString, (app::XStreamingElement * this_ptr, app::SaveOptions__Enum o))
} // namespace app::classes::System::Xml::Linq::XStreamingElement
