#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlTextWriter.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Formatting__Enum.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/WriteState__Enum.h>
#include <Modloader/app/structs/XmlTextWriter_Token__Enum.h>

namespace app::classes::System::Xml::XmlTextWriter {
    IL2CPP_REGISTER_METHOD(0x01FBCAE0, void, ctor_1, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBCC40, void, ctor_2, (app::XmlTextWriter * this_ptr, app::Stream* w, app::Encoding* encoding))
    IL2CPP_REGISTER_METHOD(0x01FBCF70, void, ctor_3, (app::XmlTextWriter * this_ptr, app::String* filename, app::Encoding* encoding))
    IL2CPP_REGISTER_METHOD(0x01FBD100, void, ctor_4, (app::XmlTextWriter * this_ptr, app::TextWriter* w))
    IL2CPP_REGISTER_METHOD(0x01FBD2A0, app::Stream*, get_BaseStream, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBD380, void, set_Namespaces, (app::XmlTextWriter * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01FBD450, void, set_Formatting, (app::XmlTextWriter * this_ptr, app::Formatting__Enum value))
    IL2CPP_REGISTER_METHOD(0x01FBD460, void, set_QuoteChar, (app::XmlTextWriter * this_ptr, char16_t value))
    IL2CPP_REGISTER_METHOD(0x01FBD540, void, WriteStartDocument_1, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBD550, void, WriteStartDocument_2, (app::XmlTextWriter * this_ptr, bool standalone))
    IL2CPP_REGISTER_METHOD(0x01FBD570, void, WriteEndDocument, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBD730, void, WriteDocType, (app::XmlTextWriter * this_ptr, app::String* name, app::String* pubid, app::String* sysid, app::String* subset))
    IL2CPP_REGISTER_METHOD(0x01FBDAB0, void, WriteStartElement, (app::XmlTextWriter * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01FBE080, void, WriteEndElement, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBE090, void, WriteFullEndElement, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBE0A0, void, WriteStartAttribute, (app::XmlTextWriter * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01FBE870, void, WriteEndAttribute, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBE930, void, WriteCData, (app::XmlTextWriter * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01FBEAE0, void, WriteComment, (app::XmlTextWriter * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01FBECB0, void, WriteProcessingInstruction, (app::XmlTextWriter * this_ptr, app::String* name, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01FBEF50, void, WriteEntityRef, (app::XmlTextWriter * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01FBF0A0, void, WriteCharEntity, (app::XmlTextWriter * this_ptr, char16_t ch))
    IL2CPP_REGISTER_METHOD(0x01FBF2B0, void, WriteWhitespace, (app::XmlTextWriter * this_ptr, app::String* ws))
    IL2CPP_REGISTER_METHOD(0x01FBF400, void, WriteString, (app::XmlTextWriter * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01FBF4F0, void, WriteSurrogateCharEntity, (app::XmlTextWriter * this_ptr, char16_t low_char, char16_t high_char))
    IL2CPP_REGISTER_METHOD(0x01FBF5E0, void, WriteChars, (app::XmlTextWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01FBF6E0, void, WriteRaw_1, (app::XmlTextWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01FBF7E0, void, WriteRaw_2, (app::XmlTextWriter * this_ptr, app::String* data))
    IL2CPP_REGISTER_METHOD(0x01FBF8C0, void, WriteBase64, (app::XmlTextWriter * this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01FBFAD0, void, WriteBinHex, (app::XmlTextWriter * this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01FBFBD0, app::WriteState__Enum, get_WriteState, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBFC40, void, Close, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3EE40, void, Flush, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FBFDC0, app::String*, LookupPrefix, (app::XmlTextWriter * this_ptr, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01FBFF20, void, StartDocument, (app::XmlTextWriter * this_ptr, int32_t standalone))
    IL2CPP_REGISTER_METHOD(0x01FC0270, void, AutoComplete, (app::XmlTextWriter * this_ptr, app::XmlTextWriter_Token__Enum token))
    IL2CPP_REGISTER_METHOD(0x01FC08B0, void, AutoCompleteAll, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC0900, void, InternalWriteEndElement, (app::XmlTextWriter * this_ptr, bool long_format))
    IL2CPP_REGISTER_METHOD(0x01FC0D20, void, WriteEndStartTag, (app::XmlTextWriter * this_ptr, bool empty))
    IL2CPP_REGISTER_METHOD(0x01FC1340, void, WriteEndAttributeQuote, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC13C0, void, Indent, (app::XmlTextWriter * this_ptr, bool before_end_element))
    IL2CPP_REGISTER_METHOD(0x01FC14C0, void, PushNamespace, (app::XmlTextWriter * this_ptr, app::String* prefix, app::String* ns, bool declared))
    IL2CPP_REGISTER_METHOD(0x01FC1860, void, AddNamespace, (app::XmlTextWriter * this_ptr, app::String* prefix, app::String* ns, bool declared))
    IL2CPP_REGISTER_METHOD(0x01FC1BD0, void, AddToNamespaceHashtable, (app::XmlTextWriter * this_ptr, int32_t namespace_index))
    IL2CPP_REGISTER_METHOD(0x01FC1DA0, void, PopNamespaces, (app::XmlTextWriter * this_ptr, int32_t index_from, int32_t index_to))
    IL2CPP_REGISTER_METHOD(0x01FC1ED0, app::String*, GeneratePrefix, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC2030, void, InternalWriteProcessingInstruction, (app::XmlTextWriter * this_ptr, app::String* name, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01FC2180, int32_t, LookupNamespace, (app::XmlTextWriter * this_ptr, app::String* prefix))
    IL2CPP_REGISTER_METHOD(0x01FC2310, int32_t, LookupNamespaceInCurrentScope, (app::XmlTextWriter * this_ptr, app::String* prefix))
    IL2CPP_REGISTER_METHOD(0x01FC2540, app::String*, FindPrefix, (app::XmlTextWriter * this_ptr, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01FC2680, void, ValidateName, (app::XmlTextWriter * this_ptr, app::String* name, bool is_n_c_name))
    IL2CPP_REGISTER_METHOD(0x01FC2940, void, HandleSpecialAttribute, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC2CA0, void, VerifyPrefixXml, (app::XmlTextWriter * this_ptr, app::String* prefix, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01FC2E20, void, PushStack, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC2F40, void, FlushEncoders, (app::XmlTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC2F70, void, cctor, ())
} // namespace app::classes::System::Xml::XmlTextWriter
