#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Converters::XmlDocumentWrapper {
    IL2CPP_REGISTER_METHOD(0x01A59FC0, void, ctor, (app::XmlDocumentWrapper * this_ptr, app::XmlDocument* document))
    IL2CPP_REGISTER_METHOD(0x01A5A100, app::IXmlNode*, CreateComment, (app::XmlDocumentWrapper * this_ptr, app::String* data))
    IL2CPP_REGISTER_METHOD(0x01A5A270, app::IXmlNode*, CreateTextNode, (app::XmlDocumentWrapper * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01A5A3E0, app::IXmlNode*, CreateCDataSection, (app::XmlDocumentWrapper * this_ptr, app::String* data))
    IL2CPP_REGISTER_METHOD(0x01A5A550, app::IXmlNode*, CreateWhitespace, (app::XmlDocumentWrapper * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01A5A6C0, app::IXmlNode*, CreateSignificantWhitespace, (app::XmlDocumentWrapper * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01A5A830, app::IXmlNode*, CreateXmlDeclaration, (app::XmlDocumentWrapper * this_ptr, app::String* version, app::String* encoding, app::String* standalone))
    IL2CPP_REGISTER_METHOD(0x01A5A9B0, app::IXmlNode*, CreateXmlDocumentType, (app::XmlDocumentWrapper * this_ptr, app::String* name, app::String* public_id, app::String* system_id, app::String* internal_subset))
    IL2CPP_REGISTER_METHOD(0x01A5AB40, app::IXmlNode*, CreateProcessingInstruction, (app::XmlDocumentWrapper * this_ptr, app::String* target, app::String* data))
    IL2CPP_REGISTER_METHOD(0x01A5ACC0, app::IXmlElement*, CreateElement_1, (app::XmlDocumentWrapper * this_ptr, app::String* element_name))
    IL2CPP_REGISTER_METHOD(0x01A5AE30, app::IXmlElement*, CreateElement_2, (app::XmlDocumentWrapper * this_ptr, app::String* qualified_name, app::String* namespace_uri))
    IL2CPP_REGISTER_METHOD(0x01A5AFA0, app::IXmlNode*, CreateAttribute_1, (app::XmlDocumentWrapper * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01A5B130, app::IXmlNode*, CreateAttribute_2, (app::XmlDocumentWrapper * this_ptr, app::String* qualified_name, app::String* namespace_uri, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01A5B2C0, app::IXmlElement*, get_DocumentElement, (app::XmlDocumentWrapper * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Converters::XmlDocumentWrapper
