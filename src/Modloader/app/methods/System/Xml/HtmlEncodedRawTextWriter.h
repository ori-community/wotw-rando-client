#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/HtmlEncodedRawTextWriter.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/XmlStandalone__Enum.h>
#include <Modloader/app/structs/XmlWriterSettings.h>

namespace app::classes::System::Xml::HtmlEncodedRawTextWriter {
    IL2CPP_REGISTER_METHOD(0x021F89F0, void, ctor_1, app::HtmlEncodedRawTextWriter* this_ptr, app::TextWriter* writer, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x021F8A20, void, ctor_2, app::HtmlEncodedRawTextWriter* this_ptr, app::Stream* stream, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration_1, app::HtmlEncodedRawTextWriter* this_ptr, app::XmlStandalone__Enum standalone)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration_2, app::HtmlEncodedRawTextWriter* this_ptr, app::String* xmldecl)
    IL2CPP_REGISTER_METHOD(
        0x021F8A50,
        void,
        WriteDocType,
        app::HtmlEncodedRawTextWriter* this_ptr,
        app::String* name,
        app::String* pubid,
        app::String* sysid,
        app::String* subset
    )
    IL2CPP_REGISTER_METHOD(
        0x021F8E60,
        void,
        WriteStartElement,
        app::HtmlEncodedRawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x021F9020, void, StartElementContent, app::HtmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x021F9090,
        void,
        WriteEndElement,
        app::HtmlEncodedRawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(
        0x021F9260,
        void,
        WriteFullEndElement,
        app::HtmlEncodedRawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(
        0x021F9430,
        void,
        WriteStartAttribute,
        app::HtmlEncodedRawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x021F9670, void, WriteEndAttribute, app::HtmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F9720, void, WriteProcessingInstruction, app::HtmlEncodedRawTextWriter* this_ptr, app::String* target, app::String* text)
    IL2CPP_REGISTER_METHOD(0x021F98D0, void, WriteString, app::HtmlEncodedRawTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x021F99C0, void, WriteEntityRef, app::HtmlEncodedRawTextWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x021F9A30, void, WriteCharEntity, app::HtmlEncodedRawTextWriter* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x021F9AA0, void, WriteSurrogateCharEntity, app::HtmlEncodedRawTextWriter* this_ptr, char16_t low_char, char16_t high_char)
    IL2CPP_REGISTER_METHOD(0x01DB1D60, void, WriteChars, app::HtmlEncodedRawTextWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x021F9B10, void, Init, app::HtmlEncodedRawTextWriter* this_ptr, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x021F9EC0, void, WriteMetaElement, app::HtmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021FA080, void, WriteHtmlElementTextBlock, app::HtmlEncodedRawTextWriter* this_ptr, char16_t* p_src, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x021FA0A0, void, WriteHtmlAttributeTextBlock, app::HtmlEncodedRawTextWriter* this_ptr, char16_t* p_src, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x021FA0E0, void, WriteHtmlAttributeText, app::HtmlEncodedRawTextWriter* this_ptr, char16_t* p_src, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x021FA4A0, void, WriteUriAttributeText, app::HtmlEncodedRawTextWriter* this_ptr, char16_t* p_src, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x021FA920, void, OutputRestAmps, app::HtmlEncodedRawTextWriter* this_ptr)
} // namespace app::classes::System::Xml::HtmlEncodedRawTextWriter
