#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/EntityHandling__Enum.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/IDtdDefaultAttributeInfo.h>
#include <Modloader/app/structs/IDtdEntityInfo.h>
#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/IValidationEventHandling.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/LineInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadState__Enum_1.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TextReader.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WhitespaceHandling__Enum.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlParserContext.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlReaderSettings.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchemaException.h>
#include <Modloader/app/structs/XmlSeverityType__Enum.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/XmlTextReaderImpl.h>
#include <Modloader/app/structs/XmlTextReaderImpl_EntityExpandType__Enum.h>
#include <Modloader/app/structs/XmlTextReaderImpl_EntityType__Enum.h>
#include <Modloader/app/structs/XmlTextReaderImpl_NodeData.h>
#include <Modloader/app/structs/XmlTextReaderImpl_NodeData__Array.h>
#include <Modloader/app/structs/XmlTextReaderImpl_OnDefaultAttributeUseDelegate.h>

namespace app::classes::System::Xml::XmlTextReaderImpl {
    IL2CPP_REGISTER_METHOD(0x01717AA0, void, ctor_1, app::XmlTextReaderImpl* this_ptr, app::XmlNameTable* nt)
    IL2CPP_REGISTER_METHOD(
        0x017181C0,
        void,
        ctor_2,
        app::XmlTextReaderImpl* this_ptr,
        app::XmlResolver* resolver,
        app::XmlReaderSettings* settings,
        app::XmlParserContext* context
    )
    IL2CPP_REGISTER_METHOD(0x01718AA0, void, ctor_3, app::XmlTextReaderImpl* this_ptr, app::Stream* input)
    IL2CPP_REGISTER_METHOD(0x01718C20, void, ctor_4, app::XmlTextReaderImpl* this_ptr, app::String* url, app::Stream* input, app::XmlNameTable* nt)
    IL2CPP_REGISTER_METHOD(0x01718E50, void, ctor_5, app::XmlTextReaderImpl* this_ptr, app::TextReader* input)
    IL2CPP_REGISTER_METHOD(0x01718FD0, void, ctor_6, app::XmlTextReaderImpl* this_ptr, app::TextReader* input, app::XmlNameTable* nt)
    IL2CPP_REGISTER_METHOD(0x01719090, void, ctor_7, app::XmlTextReaderImpl* this_ptr, app::String* url, app::TextReader* input, app::XmlNameTable* nt)
    IL2CPP_REGISTER_METHOD(
        0x01719250,
        void,
        ctor_8,
        app::XmlTextReaderImpl* this_ptr,
        app::String* xml_fragment,
        app::XmlNodeType__Enum frag_type,
        app::XmlParserContext* context
    )
    IL2CPP_REGISTER_METHOD(0x01719460, void, ctor_9, app::XmlTextReaderImpl* this_ptr, app::String* xml_fragment, app::XmlParserContext* context)
    IL2CPP_REGISTER_METHOD(0x01719660, void, FinishInitUriString, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01719A90,
        void,
        ctor_10,
        app::XmlTextReaderImpl* this_ptr,
        app::Stream* stream,
        app::Byte__Array* bytes,
        int32_t byte_count,
        app::XmlReaderSettings* settings,
        app::Uri* base_uri,
        app::String* base_uri_str,
        app::XmlParserContext* context,
        bool close_input
    )
    IL2CPP_REGISTER_METHOD(0x01719E80, void, FinishInitStream, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01719F70,
        void,
        ctor_11,
        app::XmlTextReaderImpl* this_ptr,
        app::TextReader* input,
        app::XmlReaderSettings* settings,
        app::String* base_uri_str,
        app::XmlParserContext* context
    )
    IL2CPP_REGISTER_METHOD(0x0171A180, void, FinishInitTextReader, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0171A220,
        void,
        ctor_12,
        app::XmlTextReaderImpl* this_ptr,
        app::String* xml_fragment,
        app::XmlParserContext* context,
        app::XmlReaderSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x0171A320, app::XmlReaderSettings*, get_Settings, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171A840, app::XmlNodeType__Enum, get_NodeType, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171A860, app::String*, get_Name, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073370, app::String*, get_LocalName, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D07570, app::String*, get_NamespaceURI, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171A890, app::String*, get_Prefix, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171A8B0, app::String*, get_Value, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171A920, int32_t, get_Depth, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D64E0, app::String*, get_BaseURI, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171A940, bool, get_IsEmptyElement, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171A970, bool, get_IsDefault, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171A9A0, char16_t, get_QuoteChar, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171A9E0, app::XmlSpace__Enum, get_XmlSpace, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074330, app::String*, get_XmlLang, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171AA00, app::ReadState__Enum_1, get_ReadState, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171AA10, bool, get_EOF, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660430, app::XmlNameTable*, get_NameTable, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanResolveEntity, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008468B0, int32_t, get_AttributeCount, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171AA20, app::String*, GetAttribute_1, app::XmlTextReaderImpl* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0171AB00, app::String*, GetAttribute_2, app::XmlTextReaderImpl* this_ptr, app::String* local_name, app::String* namespace_u_r_i)
    IL2CPP_REGISTER_METHOD(0x0171ACF0, app::String*, GetAttribute_3, app::XmlTextReaderImpl* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0171AE30, bool, MoveToAttribute_1, app::XmlTextReaderImpl* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0171AF10, void, MoveToAttribute_2, app::XmlTextReaderImpl* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0171B030, bool, MoveToFirstAttribute, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171B0B0, bool, MoveToNextAttribute, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171B150, bool, MoveToElement, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171B1F0, void, FinishInit, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171B240, bool, Read, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171B8B0, void, Close_1, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171BA00, void, Skip, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171BBF0, app::String*, LookupNamespace_1, app::XmlTextReaderImpl* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x0171BC30, bool, ReadAttributeValue, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171BFB0, void, ResolveEntity, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171C270, void, set_OuterReader, app::XmlTextReaderImpl* this_ptr, app::XmlReader* value)
    IL2CPP_REGISTER_METHOD(0x0171C280, void, MoveOffEntityReference, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171C390, app::String*, ReadString, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReadValueChunk, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171C3B0, int32_t, ReadValueChunk, app::XmlTextReaderImpl* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasLineInfo, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171C9D0, int32_t, get_LineNumber, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171C9F0, int32_t, get_LinePosition, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0171CA10,
        app::IDictionary_2_System_String_System_String_*,
        IXmlNamespaceResolver_GetNamespacesInScope,
        app::XmlTextReaderImpl* this_ptr,
        app::XmlNamespaceScope__Enum scope
    )
    IL2CPP_REGISTER_METHOD(0x0171CA40, app::String*, IXmlNamespaceResolver_LookupNamespace, app::XmlTextReaderImpl* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x0171CA60, app::String*, IXmlNamespaceResolver_LookupPrefix, app::XmlTextReaderImpl* this_ptr, app::String* namespace_name)
    IL2CPP_REGISTER_METHOD(
        0x0171CA10,
        app::IDictionary_2_System_String_System_String_*,
        GetNamespacesInScope,
        app::XmlTextReaderImpl* this_ptr,
        app::XmlNamespaceScope__Enum scope
    )
    IL2CPP_REGISTER_METHOD(0x0171CA60, app::String*, LookupPrefix, app::XmlTextReaderImpl* this_ptr, app::String* namespace_name)
    IL2CPP_REGISTER_METHOD(0x00974AC0, bool, get_Namespaces, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171CA90, void, set_Namespaces, app::XmlTextReaderImpl* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00AE6060, bool, get_Normalization, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171CE40, void, set_Normalization, app::XmlTextReaderImpl* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0171CF40, void, set_WhitespaceHandling, app::XmlTextReaderImpl* this_ptr, app::WhitespaceHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x0171D060, void, set_EntityHandling, app::XmlTextReaderImpl* this_ptr, app::EntityHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x0171D140, bool, get_IsResolverSet, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171D150, void, set_XmlResolver, app::XmlTextReaderImpl* this_ptr, app::XmlResolver* value)
    IL2CPP_REGISTER_METHOD(0x00660430, app::XmlNameTable*, get_DtdParserProxy_NameTable, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071EAB0, app::IXmlNamespaceResolver*, get_DtdParserProxy_NamespaceResolver, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171D1D0, bool, get_DtdParserProxy_DtdValidation, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE6060, bool, get_DtdParserProxy_Normalization, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00974AC0, bool, get_DtdParserProxy_Namespaces, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A640A0, bool, get_DtdParserProxy_V1CompatibilityMode, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171D1E0, app::Uri*, get_DtdParserProxy_BaseUri, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_DtdParserProxy_IsEof, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Char__Array*, get_DtdParserProxy_ParsingBuffer, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_DtdParserProxy_ParsingBufferLength, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_DtdParserProxy_CurrentPosition, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_DtdParserProxy_CurrentPosition, app::XmlTextReaderImpl* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0171D2D0, int32_t, get_DtdParserProxy_EntityStackLength, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CA25B0, bool, get_DtdParserProxy_IsEntityEolNormalized, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00813FA0, app::IValidationEventHandling*, get_DtdParserProxy_ValidationEventHandling, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171D2E0, void, DtdParserProxy_OnNewLine, app::XmlTextReaderImpl* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_DtdParserProxy_LineNo, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, get_DtdParserProxy_LineStartPosition, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171D2F0, int32_t, DtdParserProxy_ReadData, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0171D300,
        int32_t,
        DtdParserProxy_ParseNumericCharRef,
        app::XmlTextReaderImpl* this_ptr,
        app::StringBuilder* internal_subset_builder
    )
    IL2CPP_REGISTER_METHOD(
        0x0171D330,
        int32_t,
        DtdParserProxy_ParseNamedCharRef,
        app::XmlTextReaderImpl* this_ptr,
        bool expand,
        app::StringBuilder* internal_subset_builder
    )
    IL2CPP_REGISTER_METHOD(0x0171D340, void, DtdParserProxy_ParsePI, app::XmlTextReaderImpl* this_ptr, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x0171D390, void, DtdParserProxy_ParseComment, app::XmlTextReaderImpl* this_ptr, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x0171D5C0, bool, get_IsResolverNull, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171D5D0, app::XmlResolver*, GetTempResolver, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171D720, bool, DtdParserProxy_PushEntity, app::XmlTextReaderImpl* this_ptr, app::IDtdEntityInfo* entity, int32_t* entity_id)
    IL2CPP_REGISTER_METHOD(
        0x0171D820,
        bool,
        DtdParserProxy_PopEntity,
        app::XmlTextReaderImpl* this_ptr,
        app::IDtdEntityInfo** old_entity,
        int32_t* new_entity_id
    )
    IL2CPP_REGISTER_METHOD(
        0x0171D880,
        bool,
        DtdParserProxy_PushExternalSubset,
        app::XmlTextReaderImpl* this_ptr,
        app::String* system_id,
        app::String* public_id
    )
    IL2CPP_REGISTER_METHOD(0x0171DA00, void, DtdParserProxy_PushInternalDtd, app::XmlTextReaderImpl* this_ptr, app::String* base_uri, app::String* internal_dtd)
    IL2CPP_REGISTER_METHOD(0x0171DA90, void, DtdParserProxy_Throw, app::XmlTextReaderImpl* this_ptr, app::Exception* e)
    IL2CPP_REGISTER_METHOD(
        0x0171DAA0,
        void,
        DtdParserProxy_OnSystemId,
        app::XmlTextReaderImpl* this_ptr,
        app::String* system_id,
        app::LineInfo keyword_line_info,
        app::LineInfo system_literal_line_info
    )
    IL2CPP_REGISTER_METHOD(
        0x0171DB70,
        void,
        DtdParserProxy_OnPublicId,
        app::XmlTextReaderImpl* this_ptr,
        app::String* public_id,
        app::LineInfo keyword_line_info,
        app::LineInfo public_literal_line_info
    )
    IL2CPP_REGISTER_METHOD(0x0171DC40, void, Throw_1, app::XmlTextReaderImpl* this_ptr, int32_t pos, app::String* res, app::String* arg)
    IL2CPP_REGISTER_METHOD(0x0171DC70, void, Throw_2, app::XmlTextReaderImpl* this_ptr, int32_t pos, app::String* res, app::String__Array* args)
    IL2CPP_REGISTER_METHOD(0x0171DCA0, void, Throw_3, app::XmlTextReaderImpl* this_ptr, int32_t pos, app::String* res)
    IL2CPP_REGISTER_METHOD(0x0171DD10, void, Throw_4, app::XmlTextReaderImpl* this_ptr, app::String* res)
    IL2CPP_REGISTER_METHOD(0x0171DD60, void, Throw_5, app::XmlTextReaderImpl* this_ptr, app::String* res, int32_t line_no, int32_t line_pos)
    IL2CPP_REGISTER_METHOD(0x0171DE10, void, Throw_6, app::XmlTextReaderImpl* this_ptr, app::String* res, app::String* arg)
    IL2CPP_REGISTER_METHOD(0x0171DEC0, void, Throw_7, app::XmlTextReaderImpl* this_ptr, app::String* res, app::String* arg, int32_t line_no, int32_t line_pos)
    IL2CPP_REGISTER_METHOD(0x0171DF60, void, Throw_8, app::XmlTextReaderImpl* this_ptr, app::String* res, app::String__Array* args)
    IL2CPP_REGISTER_METHOD(0x0171E010, void, Throw_9, app::XmlTextReaderImpl* this_ptr, app::String* res, app::String* arg, app::Exception* inner_exception)
    IL2CPP_REGISTER_METHOD(
        0x0171E0A0,
        void,
        Throw_10,
        app::XmlTextReaderImpl* this_ptr,
        app::String* res,
        app::String__Array* args,
        app::Exception* inner_exception
    )
    IL2CPP_REGISTER_METHOD(0x0171E150, void, Throw_11, app::XmlTextReaderImpl* this_ptr, app::Exception* e)
    IL2CPP_REGISTER_METHOD(0x0171E280, void, ReThrow, app::XmlTextReaderImpl* this_ptr, app::Exception* e, int32_t line_no, int32_t line_pos)
    IL2CPP_REGISTER_METHOD(0x0171E330, void, ThrowWithoutLineInfo_1, app::XmlTextReaderImpl* this_ptr, app::String* res)
    IL2CPP_REGISTER_METHOD(0x0171E3D0, void, ThrowWithoutLineInfo_2, app::XmlTextReaderImpl* this_ptr, app::String* res, app::String* arg)
    IL2CPP_REGISTER_METHOD(
        0x0171E460,
        void,
        ThrowWithoutLineInfo_3,
        app::XmlTextReaderImpl* this_ptr,
        app::String* res,
        app::String__Array* args,
        app::Exception* inner_exception
    )
    IL2CPP_REGISTER_METHOD(0x0171E500, void, ThrowInvalidChar, app::XmlTextReaderImpl* this_ptr, app::Char__Array* data, int32_t length, int32_t inv_char_pos)
    IL2CPP_REGISTER_METHOD(0x0171E570, void, SetErrorState, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0171E590,
        void,
        SendValidationEvent_1,
        app::XmlTextReaderImpl* this_ptr,
        app::XmlSeverityType__Enum severity,
        app::String* code,
        app::String* arg,
        int32_t line_no,
        int32_t line_pos
    )
    IL2CPP_REGISTER_METHOD(
        0x0171E790,
        void,
        SendValidationEvent_2,
        app::XmlTextReaderImpl* this_ptr,
        app::XmlSeverityType__Enum severity,
        app::XmlSchemaException* exception
    )
    IL2CPP_REGISTER_METHOD(0x0171E830, bool, get_InAttributeValueIterator, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171E850, void, FinishAttributeValueIterator, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171D1D0, bool, get_DtdValidation, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171E9D0, void, InitStreamInput_1, app::XmlTextReaderImpl* this_ptr, app::Stream* stream, app::Encoding* encoding)
    IL2CPP_REGISTER_METHOD(
        0x0171EAA0,
        void,
        InitStreamInput_2,
        app::XmlTextReaderImpl* this_ptr,
        app::String* base_uri_str,
        app::Stream* stream,
        app::Encoding* encoding
    )
    IL2CPP_REGISTER_METHOD(
        0x0171EAD0,
        void,
        InitStreamInput_3,
        app::XmlTextReaderImpl* this_ptr,
        app::Uri* base_uri,
        app::Stream* stream,
        app::Encoding* encoding
    )
    IL2CPP_REGISTER_METHOD(
        0x0171EB50,
        void,
        InitStreamInput_4,
        app::XmlTextReaderImpl* this_ptr,
        app::Uri* base_uri,
        app::String* base_uri_str,
        app::Stream* stream,
        app::Encoding* encoding
    )
    IL2CPP_REGISTER_METHOD(
        0x0171EB80,
        void,
        InitStreamInput_5,
        app::XmlTextReaderImpl* this_ptr,
        app::Uri* base_uri,
        app::String* base_uri_str,
        app::Stream* stream,
        app::Byte__Array* bytes,
        int32_t byte_count,
        app::Encoding* encoding
    )
    IL2CPP_REGISTER_METHOD(0x0171EE60, void, InitTextReaderInput_1, app::XmlTextReaderImpl* this_ptr, app::String* base_uri_str, app::TextReader* input)
    IL2CPP_REGISTER_METHOD(
        0x0171EE80,
        void,
        InitTextReaderInput_2,
        app::XmlTextReaderImpl* this_ptr,
        app::String* base_uri_str,
        app::Uri* base_uri,
        app::TextReader* input
    )
    IL2CPP_REGISTER_METHOD(
        0x0171EF80,
        void,
        InitStringInput,
        app::XmlTextReaderImpl* this_ptr,
        app::String* base_uri_str,
        app::Encoding* original_encoding,
        app::String* str
    )
    IL2CPP_REGISTER_METHOD(
        0x0171F0C0,
        void,
        InitFragmentReader,
        app::XmlTextReaderImpl* this_ptr,
        app::XmlNodeType__Enum fragment_type,
        app::XmlParserContext* parser_context,
        bool allow_xml_decl_fragment
    )
    IL2CPP_REGISTER_METHOD(0x0171F4A0, void, ProcessDtdFromParserContext, app::XmlTextReaderImpl* this_ptr, app::XmlParserContext* context)
    IL2CPP_REGISTER_METHOD(0x0171F550, void, OpenUrl, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171F810, void, OpenUrlDelegate, app::XmlTextReaderImpl* this_ptr, app::Object* xml_resolver)
    IL2CPP_REGISTER_METHOD(0x0171F970, app::Encoding*, DetectEncoding, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171FCD0, void, SetupEncoding, app::XmlTextReaderImpl* this_ptr, app::Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x01720060, void, SwitchEncoding, app::XmlTextReaderImpl* this_ptr, app::Encoding* new_encoding)
    IL2CPP_REGISTER_METHOD(0x01720270, app::Encoding*, CheckEncoding, app::XmlTextReaderImpl* this_ptr, app::String* new_encoding_name)
    IL2CPP_REGISTER_METHOD(0x01720AF0, void, UnDecodeChars, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01720BA0, void, SwitchEncodingToUTF8, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01720D00, int32_t, ReadData, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01721280, int32_t, GetChars, app::XmlTextReaderImpl* this_ptr, int32_t max_chars_count)
    IL2CPP_REGISTER_METHOD(0x017213E0, void, InvalidCharRecovery, app::XmlTextReaderImpl* this_ptr, int32_t* bytes_count, int32_t* chars_count)
    IL2CPP_REGISTER_METHOD(0x01721590, void, Close_2, app::XmlTextReaderImpl* this_ptr, bool close_input)
    IL2CPP_REGISTER_METHOD(0x017216E0, void, ShiftBuffer, app::XmlTextReaderImpl* this_ptr, int32_t source_pos, int32_t dest_pos, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01721710, bool, ParseXmlDeclaration, app::XmlTextReaderImpl* this_ptr, bool is_text_decl)
    IL2CPP_REGISTER_METHOD(0x01722630, bool, ParseDocumentContent, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01722BE0, bool, ParseElementContent, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01722F90, void, ThrowUnclosedElements, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017231A0, void, ParseElement, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017237C0, void, AddDefaultAttributesAndNormalize, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01723E50, void, ParseEndElement, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01724330, void, ThrowTagMismatch, app::XmlTextReaderImpl* this_ptr, app::XmlTextReaderImpl_NodeData* start_tag)
    IL2CPP_REGISTER_METHOD(0x01724590, void, ParseAttributes, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01724C80, void, ElementNamespaceLookup, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01724CF0, void, AttributeNamespaceLookup, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01724DB0, void, AttributeDuplCheck, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017251E0, void, OnDefaultNamespaceDecl, app::XmlTextReaderImpl* this_ptr, app::XmlTextReaderImpl_NodeData* attr)
    IL2CPP_REGISTER_METHOD(0x01725370, void, OnNamespaceDecl, app::XmlTextReaderImpl* this_ptr, app::XmlTextReaderImpl_NodeData* attr)
    IL2CPP_REGISTER_METHOD(0x017254F0, void, OnXmlReservedAttribute, app::XmlTextReaderImpl* this_ptr, app::XmlTextReaderImpl_NodeData* attr)
    IL2CPP_REGISTER_METHOD(
        0x017257E0,
        void,
        ParseAttributeValueSlow,
        app::XmlTextReaderImpl* this_ptr,
        int32_t cur_pos,
        char16_t quote_char,
        app::XmlTextReaderImpl_NodeData* attr
    )
    IL2CPP_REGISTER_METHOD(
        0x01726A40,
        void,
        AddAttributeChunkToList,
        app::XmlTextReaderImpl* this_ptr,
        app::XmlTextReaderImpl_NodeData* attr,
        app::XmlTextReaderImpl_NodeData* chunk,
        app::XmlTextReaderImpl_NodeData** last_chunk
    )
    IL2CPP_REGISTER_METHOD(0x01726A70, bool, ParseText_1, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01726F50, bool, ParseText_2, app::XmlTextReaderImpl* this_ptr, int32_t* start_pos, int32_t* end_pos, int32_t* out_or_chars)
    IL2CPP_REGISTER_METHOD(0x017277C0, void, FinishPartialValue, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01727910, void, FinishOtherValueIterator, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01727B70, void, SkipPartialTextValue, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01727BD0, void, FinishReadValueChunk, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01727C10, void, FinishReadContentAsBinary, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01727D70, void, FinishReadElementContentAsBinary, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01727EB0, bool, ParseRootLevelWhitespace, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017281B0, void, ParseEntityReference, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01728220,
        app::XmlTextReaderImpl_EntityType__Enum,
        HandleEntityReference,
        app::XmlTextReaderImpl* this_ptr,
        bool is_in_attribute_value,
        app::XmlTextReaderImpl_EntityExpandType__Enum expand_type,
        int32_t* char_ref_end_pos
    )
    IL2CPP_REGISTER_METHOD(
        0x017284F0,
        app::XmlTextReaderImpl_EntityType__Enum,
        HandleGeneralEntityReference,
        app::XmlTextReaderImpl* this_ptr,
        app::String* name,
        bool is_in_attribute_value,
        bool push_fake_entity_if_null_resolver,
        int32_t entity_start_line_pos
    )
    IL2CPP_REGISTER_METHOD(0x01728BE0, bool, get_InEntity, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01728BF0, bool, HandleEntityEnd, app::XmlTextReaderImpl* this_ptr, bool check_entity_nesting)
    IL2CPP_REGISTER_METHOD(0x01728DD0, void, SetupEndEntityNodeInContent, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01728F30, void, SetupEndEntityNodeInAttribute, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01728FC0, bool, ParsePI_1, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01728FD0, bool, ParsePI_2, app::XmlTextReaderImpl* this_ptr, app::StringBuilder* pi_in_dtd_string_builder)
    IL2CPP_REGISTER_METHOD(0x01729520, bool, ParsePIValue, app::XmlTextReaderImpl* this_ptr, int32_t* out_start_pos, int32_t* out_end_pos)
    IL2CPP_REGISTER_METHOD(0x01729950, bool, ParseComment, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017299B0, void, ParseCData, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017299C0, void, ParseCDataOrComment_1, app::XmlTextReaderImpl* this_ptr, app::XmlNodeType__Enum type)
    IL2CPP_REGISTER_METHOD(
        0x01729BA0,
        bool,
        ParseCDataOrComment_2,
        app::XmlTextReaderImpl* this_ptr,
        app::XmlNodeType__Enum type,
        int32_t* out_start_pos,
        int32_t* out_end_pos
    )
    IL2CPP_REGISTER_METHOD(0x0172A040, bool, ParseDoctypeDecl, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172A340, void, ParseDtd, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172A680, void, SkipDtd, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172AAB0, void, SkipPublicOrSystemIdLiteral, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172AB90, void, SkipUntil, app::XmlTextReaderImpl* this_ptr, char16_t stop_char, bool recognize_literals)
    IL2CPP_REGISTER_METHOD(0x0172B140, int32_t, EatWhitespaces, app::XmlTextReaderImpl* this_ptr, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(
        0x0172B400,
        int32_t,
        ParseCharRefInline,
        app::XmlTextReaderImpl* this_ptr,
        int32_t start_pos,
        int32_t* char_count,
        app::XmlTextReaderImpl_EntityType__Enum* entity_type
    )
    IL2CPP_REGISTER_METHOD(
        0x0172B490,
        int32_t,
        ParseNumericCharRef,
        app::XmlTextReaderImpl* this_ptr,
        bool expand,
        app::StringBuilder* internal_subset_builder,
        app::XmlTextReaderImpl_EntityType__Enum* entity_type
    )
    IL2CPP_REGISTER_METHOD(
        0x0172B590,
        int32_t,
        ParseNumericCharRefInline,
        app::XmlTextReaderImpl* this_ptr,
        int32_t start_pos,
        bool expand,
        app::StringBuilder* internal_subset_builder,
        int32_t* char_count,
        app::XmlTextReaderImpl_EntityType__Enum* entity_type
    )
    IL2CPP_REGISTER_METHOD(0x0172BDD0, int32_t, ParseNamedCharRef, app::XmlTextReaderImpl* this_ptr, bool expand, app::StringBuilder* internal_subset_builder)
    IL2CPP_REGISTER_METHOD(
        0x0172BE50,
        int32_t,
        ParseNamedCharRefInline,
        app::XmlTextReaderImpl* this_ptr,
        int32_t start_pos,
        bool expand,
        app::StringBuilder* internal_subset_builder
    )
    IL2CPP_REGISTER_METHOD(0x0172C240, int32_t, ParseName, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172C270, int32_t, ParseQName_1, app::XmlTextReaderImpl* this_ptr, int32_t* colon_pos)
    IL2CPP_REGISTER_METHOD(0x0172C290, int32_t, ParseQName_2, app::XmlTextReaderImpl* this_ptr, bool is_q_name, int32_t start_offset, int32_t* colon_pos)
    IL2CPP_REGISTER_METHOD(0x0172C5D0, bool, ReadDataInName, app::XmlTextReaderImpl* this_ptr, int32_t* pos)
    IL2CPP_REGISTER_METHOD(0x0172C620, app::String*, ParseEntityName, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172C760, app::XmlTextReaderImpl_NodeData*, AddNode, app::XmlTextReaderImpl* this_ptr, int32_t node_index, int32_t node_depth)
    IL2CPP_REGISTER_METHOD(0x0172C7B0, app::XmlTextReaderImpl_NodeData*, AllocNode, app::XmlTextReaderImpl* this_ptr, int32_t node_index, int32_t node_depth)
    IL2CPP_REGISTER_METHOD(
        0x0172CA30,
        app::XmlTextReaderImpl_NodeData*,
        AddAttributeNoChecks,
        app::XmlTextReaderImpl* this_ptr,
        app::String* name,
        int32_t attr_depth
    )
    IL2CPP_REGISTER_METHOD(
        0x0172CB00,
        app::XmlTextReaderImpl_NodeData*,
        AddAttribute_1,
        app::XmlTextReaderImpl* this_ptr,
        int32_t end_name_pos,
        int32_t colon_pos
    )
    IL2CPP_REGISTER_METHOD(
        0x0172CD50,
        app::XmlTextReaderImpl_NodeData*,
        AddAttribute_2,
        app::XmlTextReaderImpl* this_ptr,
        app::String* local_name,
        app::String* prefix,
        app::String* name_w_prefix
    )
    IL2CPP_REGISTER_METHOD(0x0172CF10, void, PopElementContext, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0171D2E0, void, OnNewLine, app::XmlTextReaderImpl* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x0172CF90, void, OnEof, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172D030, app::String*, LookupNamespace_2, app::XmlTextReaderImpl* this_ptr, app::XmlTextReaderImpl_NodeData* node)
    IL2CPP_REGISTER_METHOD(
        0x0172D160,
        void,
        AddNamespace,
        app::XmlTextReaderImpl* this_ptr,
        app::String* prefix,
        app::String* uri,
        app::XmlTextReaderImpl_NodeData* attr
    )
    IL2CPP_REGISTER_METHOD(0x0172D470, void, ResetAttributes, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172D530, void, FullAttributeCleanup, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172D5C0, void, PushXmlContext, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172D750, void, PopXmlContext, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172D790, app::XmlNodeType__Enum, GetWhitespaceType, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172D7E0, app::XmlNodeType__Enum, GetTextNodeType, app::XmlTextReaderImpl* this_ptr, int32_t or_chars)
    IL2CPP_REGISTER_METHOD(
        0x0172D840,
        void,
        PushExternalEntityOrSubset,
        app::XmlTextReaderImpl* this_ptr,
        app::String* public_id,
        app::String* system_id,
        app::Uri* base_uri,
        app::String* entity_name
    )
    IL2CPP_REGISTER_METHOD(0x0172DBB0, bool, OpenAndPush, app::XmlTextReaderImpl* this_ptr, app::Uri* uri)
    IL2CPP_REGISTER_METHOD(0x0172DEC0, bool, PushExternalEntity, app::XmlTextReaderImpl* this_ptr, app::IDtdEntityInfo* entity)
    IL2CPP_REGISTER_METHOD(0x0172E0F0, void, PushInternalEntity, app::XmlTextReaderImpl* this_ptr, app::IDtdEntityInfo* entity)
    IL2CPP_REGISTER_METHOD(0x0172E2B0, void, PopEntity, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172E390, void, RegisterEntity, app::XmlTextReaderImpl* this_ptr, app::IDtdEntityInfo* entity)
    IL2CPP_REGISTER_METHOD(0x0172E6A0, void, UnregisterEntity, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172E740, void, PushParsingState, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172E8E0, void, PopParsingState, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172E9C0, int32_t, IncrementalRead, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172F7D0, void, FinishIncrementalRead, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172F930, bool, ParseFragmentAttribute, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0172F9D0, bool, ParseAttributeValueChunk, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017300F0, void, ParseXmlDeclarationFragment, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017301E0, void, ThrowUnexpectedToken_1, app::XmlTextReaderImpl* this_ptr, int32_t pos, app::String* expected_token)
    IL2CPP_REGISTER_METHOD(0x01730200, void, ThrowUnexpectedToken_2, app::XmlTextReaderImpl* this_ptr, app::String* expected_token1)
    IL2CPP_REGISTER_METHOD(
        0x01730210,
        void,
        ThrowUnexpectedToken_3,
        app::XmlTextReaderImpl* this_ptr,
        int32_t pos,
        app::String* expected_token1,
        app::String* expected_token2
    )
    IL2CPP_REGISTER_METHOD(
        0x01730240,
        void,
        ThrowUnexpectedToken_4,
        app::XmlTextReaderImpl* this_ptr,
        app::String* expected_token1,
        app::String* expected_token2
    )
    IL2CPP_REGISTER_METHOD(0x017303E0, app::String*, ParseUnexpectedToken_1, app::XmlTextReaderImpl* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x017303F0, app::String*, ParseUnexpectedToken_2, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01730510, void, ThrowExpectingWhitespace, app::XmlTextReaderImpl* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x017305C0, int32_t, GetIndexOfAttributeWithoutPrefix, app::XmlTextReaderImpl* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x017306A0, int32_t, GetIndexOfAttributeWithPrefix, app::XmlTextReaderImpl* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x017307B0, bool, ZeroEndingStream, app::XmlTextReaderImpl* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x01730830, void, ParseDtdFromParserContext, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01730A80, bool, MoveToNextContentNode, app::XmlTextReaderImpl* this_ptr, bool move_if_on_content_node)
    IL2CPP_REGISTER_METHOD(
        0x01730BA0,
        void,
        SetupFromParserContext,
        app::XmlTextReaderImpl* this_ptr,
        app::XmlParserContext* context,
        app::XmlReaderSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x007008C0, app::IDtdInfo*, get_DtdInfo, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01730FA0, void, SetDtdInfo, app::XmlTextReaderImpl* this_ptr, app::IDtdInfo* new_dtd_info)
    IL2CPP_REGISTER_METHOD(0x0110EE00, void, set_ValidationEventHandling, app::XmlTextReaderImpl* this_ptr, app::IValidationEventHandling* value)
    IL2CPP_REGISTER_METHOD(
        0x01731090,
        void,
        set_OnDefaultAttributeUse,
        app::XmlTextReaderImpl* this_ptr,
        app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate* value
    )
    IL2CPP_REGISTER_METHOD(0x017310A0, void, set_XmlValidatingReaderCompatibilityMode, app::XmlTextReaderImpl* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0129B9A0, app::XmlNodeType__Enum, get_FragmentType, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017311B0, void, ChangeCurrentNodeType, app::XmlTextReaderImpl* this_ptr, app::XmlNodeType__Enum new_node_type)
    IL2CPP_REGISTER_METHOD(0x00418200, app::XmlResolver*, GetResolver, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017311D0, void, set_InternalSchemaType, app::XmlTextReaderImpl* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01731200, app::Object*, get_InternalTypedValue, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01731230, void, set_InternalTypedValue, app::XmlTextReaderImpl* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x00949CF0, bool, get_StandAlone, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071EAB0, app::XmlNamespaceManager*, get_NamespaceManager, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A640A0, bool, get_V1Compat, app::XmlTextReaderImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01731260,
        bool,
        AddDefaultAttributeDtd,
        app::XmlTextReaderImpl* this_ptr,
        app::IDtdDefaultAttributeInfo* def_attr_info,
        bool defined_in_dtd,
        app::XmlTextReaderImpl_NodeData__Array* name_sorted_node_data
    )
    IL2CPP_REGISTER_METHOD(0x017315A0, bool, AddDefaultAttributeNonDtd, app::XmlTextReaderImpl* this_ptr, app::SchemaAttDef* attr_def)
    IL2CPP_REGISTER_METHOD(
        0x017318C0,
        app::XmlTextReaderImpl_NodeData*,
        AddDefaultAttributeInternal,
        app::XmlTextReaderImpl* this_ptr,
        app::String* local_name,
        app::String* ns,
        app::String* prefix,
        app::String* value,
        int32_t line_no,
        int32_t line_pos,
        int32_t value_line_no,
        int32_t value_line_pos,
        bool is_xml_attribute
    )
    IL2CPP_REGISTER_METHOD(0x01731BE0, void, set_DisableUndeclaredEntityCheck, app::XmlTextReaderImpl* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(
        0x01731BF0,
        bool,
        UriEqual,
        app::XmlTextReaderImpl* this_ptr,
        app::Uri* uri1,
        app::String* uri1_str,
        app::String* uri2_str,
        app::XmlResolver* resolver
    )
    IL2CPP_REGISTER_METHOD(0x01731D40, void, RegisterConsumedCharacters, app::XmlTextReaderImpl* this_ptr, int64_t characters, bool in_entity_reference)
    IL2CPP_REGISTER_METHOD(0x01731EA0, app::String*, StripSpaces_1, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01732160, void, StripSpaces_2, app::Char__Array* value, int32_t index, int32_t* len)
    IL2CPP_REGISTER_METHOD(
        0x017322C0,
        void,
        BlockCopyChars,
        app::Char__Array* src,
        int32_t src_offset,
        app::Char__Array* dst,
        int32_t dst_offset,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x017322E0, void, BlockCopy, app::Byte__Array* src, int32_t src_offset, app::Byte__Array* dst, int32_t dst_offset, int32_t count)
} // namespace app::classes::System::Xml::XmlTextReaderImpl
