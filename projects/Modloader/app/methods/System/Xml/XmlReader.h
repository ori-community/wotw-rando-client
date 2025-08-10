#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/IXmlSchemaInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringWriter.h>
#include <Modloader/app/structs/TextReader.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlParserContext.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlReaderSettings.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/XmlTextWriter.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::XmlReader {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlReaderSettings*, get_Settings, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01701890, app::String*, get_Name, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsDefault, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A79BB0, char16_t, get_QuoteChar, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlSpace__Enum, get_XmlSpace, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017019D0, app::String*, get_XmlLang, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01701A50, app::IXmlSchemaInfo*, get_SchemaInfo, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01701AD0, app::Type*, get_ValueType, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01701B70, void, MoveToAttribute, app::XmlReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Close, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01701C90, void, Skip, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanResolveEntity, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanReadValueChunk, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01701D80, int32_t, ReadValueChunk, app::XmlReader* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01701DF0, app::String*, ReadString, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01702090, app::XmlNodeType__Enum, MoveToContent, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01702120, void, ReadStartElement, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01702260, app::String*, ReadElementString, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01702510, void, ReadEndElement, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01702650, bool, IsStartElement, app::XmlReader* this_ptr, app::String* localname, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x01702730, app::String*, ReadInnerXml, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01702C60, void, WriteNode, app::XmlReader* this_ptr, app::XmlWriter* xtw, bool defattr)
    IL2CPP_REGISTER_METHOD(0x01703190, void, WriteAttributeValue, app::XmlReader* this_ptr, app::XmlWriter* xtw)
    IL2CPP_REGISTER_METHOD(0x017032B0, app::XmlWriter*, CreateWriterForInnerOuterXml, app::XmlReader* this_ptr, app::StringWriter* sw)
    IL2CPP_REGISTER_METHOD(0x01703410, void, SetNamespacesFlag, app::XmlReader* this_ptr, app::XmlTextWriter* xtw)
    IL2CPP_REGISTER_METHOD(0x01703570, bool, get_HasAttributes, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01703590, void, Dispose_1, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017035B0, void, Dispose_2, app::XmlReader* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlNamespaceManager*, get_NamespaceManager, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017035F0, bool, IsTextualNode, app::XmlNodeType__Enum node_type)
    IL2CPP_REGISTER_METHOD(0x017036B0, bool, HasValueInternal, app::XmlNodeType__Enum node_type)
    IL2CPP_REGISTER_METHOD(0x01703770, bool, SkipSubtree, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01703850, bool, get_IsDefaultInternal, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IDtdInfo*, get_DtdInfo, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01703920, app::XmlReader*, Create_1, app::Stream* input, app::XmlReaderSettings* settings, app::String* base_uri)
    IL2CPP_REGISTER_METHOD(0x01703AB0, app::XmlReader*, Create_2, app::TextReader* input, app::XmlReaderSettings* settings, app::String* base_uri)
    IL2CPP_REGISTER_METHOD(
        0x01703C30,
        app::XmlReader*,
        CreateSqlReader,
        app::Stream* input,
        app::XmlReaderSettings* settings,
        app::XmlParserContext* input_context
    )
    IL2CPP_REGISTER_METHOD(0x01704160, int32_t, CalcBufferSize, app::Stream* input)
    IL2CPP_REGISTER_METHOD(0x01704260, app::Object*, get_debuggerDisplayProxy, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XmlReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017042F0, void, cctor, )
} // namespace app::classes::System::Xml::XmlReader
