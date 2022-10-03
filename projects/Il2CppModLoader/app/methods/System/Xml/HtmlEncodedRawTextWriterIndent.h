#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::HtmlEncodedRawTextWriterIndent {
    IL2CPP_REGISTER_METHOD(0x021FAA40, void, ctor_1, (app::HtmlEncodedRawTextWriterIndent * this_ptr, app::TextWriter* writer, app::XmlWriterSettings* settings))
    IL2CPP_REGISTER_METHOD(0x021FAAA0, void, ctor_2, (app::HtmlEncodedRawTextWriterIndent * this_ptr, app::Stream* stream, app::XmlWriterSettings* settings))
    IL2CPP_REGISTER_METHOD(0x021FAB00, void, WriteDocType, (app::HtmlEncodedRawTextWriterIndent * this_ptr, app::String* name, app::String* pubid, app::String* sysid, app::String* subset))
    IL2CPP_REGISTER_METHOD(0x021FAB30, void, WriteStartElement, (app::HtmlEncodedRawTextWriterIndent * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x021FADC0, void, StartElementContent, (app::HtmlEncodedRawTextWriterIndent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021FAE50, void, WriteEndElement, (app::HtmlEncodedRawTextWriterIndent * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x021FAEF0, void, WriteStartAttribute, (app::HtmlEncodedRawTextWriterIndent * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x021FAF90, void, FlushBuffer, (app::HtmlEncodedRawTextWriterIndent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021FAFB0, void, Init, (app::HtmlEncodedRawTextWriterIndent * this_ptr, app::XmlWriterSettings* settings))
    IL2CPP_REGISTER_METHOD(0x021FAFF0, void, WriteIndent, (app::HtmlEncodedRawTextWriterIndent * this_ptr))
} // namespace app::classes::System::Xml::HtmlEncodedRawTextWriterIndent
