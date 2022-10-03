#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Linq::ElementWriter {
    IL2CPP_REGISTER_METHOD(0x002411A0, void, ctor, (app::ElementWriter__Boxed * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x002411C0, void, WriteElement, (app::ElementWriter__Boxed * this_ptr, app::XElement* e))
    IL2CPP_REGISTER_METHOD(0x002411D0, app::String*, GetPrefixOfNamespace, (app::ElementWriter__Boxed * this_ptr, app::XNamespace* ns, bool allow_default_namespace))
    IL2CPP_REGISTER_METHOD(0x002411E0, void, PushAncestors, (app::ElementWriter__Boxed * this_ptr, app::XElement* e))
    IL2CPP_REGISTER_METHOD(0x002411F0, void, PushElement, (app::ElementWriter__Boxed * this_ptr, app::XElement* e))
    IL2CPP_REGISTER_METHOD(0x00241200, void, WriteEndElement, (app::ElementWriter__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00241240, void, WriteFullEndElement, (app::ElementWriter__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00241280, void, WriteStartElement, (app::ElementWriter__Boxed * this_ptr, app::XElement* e))
} // namespace app::classes::System::Xml::Linq::ElementWriter
