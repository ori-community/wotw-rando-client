#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HtmlUtf8RawTextWriterIndent.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlWriterSettings.h>

namespace app::classes::System::Xml::HtmlUtf8RawTextWriterIndent {
    IL2CPP_REGISTER_METHOD(0x0199D3E0, void, ctor, (app::HtmlUtf8RawTextWriterIndent * this_ptr, app::Stream* stream, app::XmlWriterSettings* settings))
    IL2CPP_REGISTER_METHOD(0x0199D440, void, WriteDocType, (app::HtmlUtf8RawTextWriterIndent * this_ptr, app::String* name, app::String* pubid, app::String* sysid, app::String* subset))
    IL2CPP_REGISTER_METHOD(0x0199D470, void, WriteStartElement, (app::HtmlUtf8RawTextWriterIndent * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x0199D6D0, void, StartElementContent, (app::HtmlUtf8RawTextWriterIndent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199D760, void, WriteEndElement, (app::HtmlUtf8RawTextWriterIndent * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x0199D800, void, WriteStartAttribute, (app::HtmlUtf8RawTextWriterIndent * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x0199D8A0, void, FlushBuffer, (app::HtmlUtf8RawTextWriterIndent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199D8C0, void, Init, (app::HtmlUtf8RawTextWriterIndent * this_ptr, app::XmlWriterSettings* settings))
    IL2CPP_REGISTER_METHOD(0x0199D900, void, WriteIndent, (app::HtmlUtf8RawTextWriterIndent * this_ptr))
} // namespace app::classes::System::Xml::HtmlUtf8RawTextWriterIndent
