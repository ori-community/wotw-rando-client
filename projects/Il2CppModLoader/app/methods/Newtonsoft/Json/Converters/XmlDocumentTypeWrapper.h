#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper {
    IL2CPP_REGISTER_METHOD(0x01A59FC0, void, ctor, (app::XmlDocumentTypeWrapper * this_ptr, app::XmlDocumentType* document_type))
    IL2CPP_REGISTER_METHOD(0x01A5A030, app::String*, get_Name, (app::XmlDocumentTypeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A5A010, app::String*, get_System, (app::XmlDocumentTypeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A59FF0, app::String*, get_Public, (app::XmlDocumentTypeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A5A060, app::String*, get_InternalSubset, (app::XmlDocumentTypeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A5A080, app::String*, get_LocalName, (app::XmlDocumentTypeWrapper * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper
