#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::XmlProcessingInstruction {
    IL2CPP_REGISTER_METHOD(0x016FF630, void, ctor, (app::XmlProcessingInstruction * this_ptr, app::String* target, app::String* data, app::XmlDocument* doc))
    IL2CPP_REGISTER_METHOD(0x016FF680, app::String*, get_Name, (app::XmlProcessingInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015A1590, app::String*, get_LocalName, (app::XmlProcessingInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Value, (app::XmlProcessingInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FF710, void, set_Value, (app::XmlProcessingInstruction * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x016FF720, void, set_Data, (app::XmlProcessingInstruction * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_InnerText, (app::XmlProcessingInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FF710, void, set_InnerText, (app::XmlProcessingInstruction * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00AD8BA0, app::XmlNodeType__Enum, get_NodeType, (app::XmlProcessingInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FF7D0, app::XmlNode*, CloneNode, (app::XmlProcessingInstruction * this_ptr, bool deep))
    IL2CPP_REGISTER_METHOD(0x016FF820, void, WriteTo, (app::XmlProcessingInstruction * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (app::XmlProcessingInstruction * this_ptr, app::XmlWriter* w))
} // namespace app::classes::System::Xml::XmlProcessingInstruction
