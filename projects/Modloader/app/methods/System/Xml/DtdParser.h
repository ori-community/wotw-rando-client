#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/DtdParser.h>
#include <Modloader/app/structs/DtdParser_LiteralType__Enum.h>
#include <Modloader/app/structs/DtdParser_Token__Enum.h>
#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/IDtdParser.h>
#include <Modloader/app/structs/IDtdParserAdapter.h>
#include <Modloader/app/structs/ParticleContentValidator.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/SchemaElementDecl.h>
#include <Modloader/app/structs/SchemaEntity.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaException.h>
#include <Modloader/app/structs/XmlSeverityType__Enum.h>

namespace app::classes::System::Xml::DtdParser {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x021E9AD0, void, ctor, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021E9BE0, app::IDtdParser*, Create, )
    IL2CPP_REGISTER_METHOD(0x021E9E00, void, Initialize, app::DtdParser* this_ptr, app::IDtdParserAdapter* reader_adapter)
    IL2CPP_REGISTER_METHOD(
        0x021EA130,
        void,
        InitializeFreeFloatingDtd,
        app::DtdParser* this_ptr,
        app::String* base_uri,
        app::String* doc_type_name,
        app::String* public_id,
        app::String* system_id,
        app::String* internal_subset,
        app::IDtdParserAdapter* adapter
    )
    IL2CPP_REGISTER_METHOD(
        0x021EA620,
        app::IDtdInfo*,
        IDtdParser_ParseInternalDtd,
        app::DtdParser* this_ptr,
        app::IDtdParserAdapter* adapter,
        bool save_internal_subset
    )
    IL2CPP_REGISTER_METHOD(
        0x021EA660,
        app::IDtdInfo*,
        IDtdParser_ParseFreeFloatingDtd,
        app::DtdParser* this_ptr,
        app::String* base_uri,
        app::String* doc_type_name,
        app::String* public_id,
        app::String* system_id,
        app::String* internal_subset,
        app::IDtdParserAdapter* adapter
    )
    IL2CPP_REGISTER_METHOD(0x021EA6B0, bool, get_ParsingInternalSubset, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EA6C0, bool, get_IgnoreEntityReferences, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EA6D0, bool, get_SaveInternalSubsetValue, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EA780, bool, get_ParsingTopLevelMarkup, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEDBB0, bool, get_SupportNamespaces, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_Normalize, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EA7A0, void, Parse, app::DtdParser* this_ptr, bool save_internal_subset)
    IL2CPP_REGISTER_METHOD(0x021EAAF0, void, ParseInDocumentDtd, app::DtdParser* this_ptr, bool save_internal_subset)
    IL2CPP_REGISTER_METHOD(0x021EAD50, void, ParseFreeFloatingDtd, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EADB0, void, ParseInternalSubset, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EADC0, void, ParseExternalSubset, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EAEE0, void, ParseSubset, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EB360, void, ParseAttlistDecl, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x021EBB80,
        void,
        ParseAttlistType,
        app::DtdParser* this_ptr,
        app::SchemaAttDef* attr_def,
        app::SchemaElementDecl* element_decl,
        bool ignore_errors
    )
    IL2CPP_REGISTER_METHOD(0x021EC310, void, ParseAttlistDefault, app::DtdParser* this_ptr, app::SchemaAttDef* attr_def, bool ignore_errors)
    IL2CPP_REGISTER_METHOD(0x021EC610, void, ParseElementDecl, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x021ECD30,
        void,
        ParseElementOnlyContent,
        app::DtdParser* this_ptr,
        app::ParticleContentValidator* pcv,
        int32_t start_paren_entity_id
    )
    IL2CPP_REGISTER_METHOD(0x021ED3A0, void, ParseHowMany, app::DtdParser* this_ptr, app::ParticleContentValidator* pcv)
    IL2CPP_REGISTER_METHOD(
        0x021ED420,
        void,
        ParseElementMixedContent,
        app::DtdParser* this_ptr,
        app::ParticleContentValidator* pcv,
        int32_t start_paren_entity_id
    )
    IL2CPP_REGISTER_METHOD(0x021ED780, void, ParseEntityDecl, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EDC60, void, ParseNotationDecl, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EDF90, void, AddUndeclaredNotation, app::DtdParser* this_ptr, app::String* notation_name)
    IL2CPP_REGISTER_METHOD(0x021EE2F0, void, ParseComment, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EE490, void, ParsePI, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021EE590, void, ParseCondSection, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x021EE810,
        void,
        ParseExternalId,
        app::DtdParser* this_ptr,
        app::DtdParser_Token__Enum id_token_type,
        app::DtdParser_Token__Enum decl_type,
        app::String** public_id,
        app::String** system_id
    )
    IL2CPP_REGISTER_METHOD(0x021EED30, app::DtdParser_Token__Enum, GetToken, app::DtdParser* this_ptr, bool need_white_space)
    IL2CPP_REGISTER_METHOD(0x021F03E0, app::DtdParser_Token__Enum, ScanSubsetContent, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F0CD0, app::DtdParser_Token__Enum, ScanNameExpected, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F0D00, app::DtdParser_Token__Enum, ScanQNameExpected, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F0D30, app::DtdParser_Token__Enum, ScanNmtokenExpected, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F0D60, app::DtdParser_Token__Enum, ScanDoctype1, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F0F00, app::DtdParser_Token__Enum, ScanDoctype2, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F1010, app::DtdParser_Token__Enum, ScanClosingTag, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F10F0, app::DtdParser_Token__Enum, ScanElement1, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F1380, app::DtdParser_Token__Enum, ScanElement2, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F15B0, app::DtdParser_Token__Enum, ScanElement3, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F1640, app::DtdParser_Token__Enum, ScanElement4, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F1760, app::DtdParser_Token__Enum, ScanElement5, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F18C0, app::DtdParser_Token__Enum, ScanElement6, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F19E0, app::DtdParser_Token__Enum, ScanElement7, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F1A40, app::DtdParser_Token__Enum, ScanAttlist1, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F1B60, app::DtdParser_Token__Enum, ScanAttlist2, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F2490, app::DtdParser_Token__Enum, ScanAttlist3, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F2580, app::DtdParser_Token__Enum, ScanAttlist4, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F26A0, app::DtdParser_Token__Enum, ScanAttlist5, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F27C0, app::DtdParser_Token__Enum, ScanAttlist6, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F2CA0, app::DtdParser_Token__Enum, ScanAttlist7, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F2DA0, app::DtdParser_Token__Enum, ScanLiteral, app::DtdParser* this_ptr, app::DtdParser_LiteralType__Enum literal_type)
    IL2CPP_REGISTER_METHOD(0x021F3DD0, app::XmlQualifiedName*, ScanEntityName, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F3F20, app::DtdParser_Token__Enum, ScanNotation1, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F4060, app::DtdParser_Token__Enum, ScanSystemId, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F4160, app::DtdParser_Token__Enum, ScanEntity1, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F41E0, app::DtdParser_Token__Enum, ScanEntity2, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F4360, app::DtdParser_Token__Enum, ScanEntity3, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F44C0, app::DtdParser_Token__Enum, ScanPublicId1, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F45C0, app::DtdParser_Token__Enum, ScanPublicId2, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F4640, app::DtdParser_Token__Enum, ScanCondSection1, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F4A70, app::DtdParser_Token__Enum, ScanCondSection2, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F4B50, app::DtdParser_Token__Enum, ScanCondSection3, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F5170, void, ScanName, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F5180, void, ScanQName_1, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F5190, void, ScanQName_2, app::DtdParser* this_ptr, bool is_q_name)
    IL2CPP_REGISTER_METHOD(0x021F54B0, bool, ReadDataInName, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F5500, void, ScanNmtoken, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F56E0, bool, EatPublicKeyword, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F5840, bool, EatSystemKeyword, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F59A0, app::XmlQualifiedName*, GetNameQualified, app::DtdParser* this_ptr, bool can_have_prefix)
    IL2CPP_REGISTER_METHOD(0x021F5CD0, app::String*, GetNameString, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F5CD0, app::String*, GetNmtokenString, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F5D00, app::String*, GetValue, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F5D70, app::String*, GetValueWithStrippedSpaces, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F5E70, int32_t, ReadData, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F5F30, void, LoadParsingBuffer, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F6080, void, SaveParsingBuffer_1, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F6090, void, SaveParsingBuffer_2, app::DtdParser* this_ptr, int32_t internal_subset_value_end_pos)
    IL2CPP_REGISTER_METHOD(0x021F6190, bool, HandleEntityReference_1, app::DtdParser* this_ptr, bool param_entity, bool in_literal, bool in_attribute)
    IL2CPP_REGISTER_METHOD(
        0x021F6200,
        bool,
        HandleEntityReference_2,
        app::DtdParser* this_ptr,
        app::XmlQualifiedName* entity_name,
        bool param_entity,
        bool in_literal,
        bool in_attribute
    )
    IL2CPP_REGISTER_METHOD(0x021F6450, bool, HandleEntityEnd, app::DtdParser* this_ptr, bool in_literal)
    IL2CPP_REGISTER_METHOD(
        0x021F65E0,
        app::SchemaEntity*,
        VerifyEntityReference,
        app::DtdParser* this_ptr,
        app::XmlQualifiedName* entity_name,
        bool param_entity,
        bool must_be_declared,
        bool in_attribute
    )
    IL2CPP_REGISTER_METHOD(
        0x021F6990,
        void,
        SendValidationEvent_1,
        app::DtdParser* this_ptr,
        int32_t pos,
        app::XmlSeverityType__Enum severity,
        app::String* code,
        app::String* arg
    )
    IL2CPP_REGISTER_METHOD(
        0x021F6B60,
        void,
        SendValidationEvent_2,
        app::DtdParser* this_ptr,
        app::XmlSeverityType__Enum severity,
        app::String* code,
        app::String* arg
    )
    IL2CPP_REGISTER_METHOD(0x021F6D20, void, SendValidationEvent_3, app::DtdParser* this_ptr, app::XmlSeverityType__Enum severity, app::XmlSchemaException* e)
    IL2CPP_REGISTER_METHOD(0x021F6DE0, bool, IsAttributeValueType, app::DtdParser* this_ptr, app::DtdParser_Token__Enum token)
    IL2CPP_REGISTER_METHOD(0x021F6DF0, int32_t, get_LineNo, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F6E80, int32_t, get_LinePos, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F6F30, app::String*, get_BaseUriStr, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F7010, void, OnUnexpectedError, app::DtdParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F70A0, void, Throw_1, app::DtdParser* this_ptr, int32_t cur_pos, app::String* res)
    IL2CPP_REGISTER_METHOD(0x021F7160, void, Throw_2, app::DtdParser* this_ptr, int32_t cur_pos, app::String* res, app::String* arg)
    IL2CPP_REGISTER_METHOD(0x021F73F0, void, Throw_3, app::DtdParser* this_ptr, int32_t cur_pos, app::String* res, app::String__Array* args)
    IL2CPP_REGISTER_METHOD(0x021F7690, void, Throw_4, app::DtdParser* this_ptr, app::String* res, app::String* arg, int32_t line_no, int32_t line_pos)
    IL2CPP_REGISTER_METHOD(0x021F78A0, void, ThrowInvalidChar_1, app::DtdParser* this_ptr, int32_t pos, app::String* data, int32_t inv_char_pos)
    IL2CPP_REGISTER_METHOD(0x021F79A0, void, ThrowInvalidChar_2, app::DtdParser* this_ptr, app::Char__Array* data, int32_t length, int32_t inv_char_pos)
    IL2CPP_REGISTER_METHOD(0x021F7A70, void, ThrowUnexpectedToken_1, app::DtdParser* this_ptr, int32_t pos, app::String* expected_token)
    IL2CPP_REGISTER_METHOD(
        0x021F7A90,
        void,
        ThrowUnexpectedToken_2,
        app::DtdParser* this_ptr,
        int32_t pos,
        app::String* expected_token1,
        app::String* expected_token2
    )
    IL2CPP_REGISTER_METHOD(0x021F7D40, app::String*, ParseUnexpectedToken, app::DtdParser* this_ptr, int32_t start_pos)
    IL2CPP_REGISTER_METHOD(0x021F7E60, app::String*, StripSpaces, app::String* value)
} // namespace app::classes::System::Xml::DtdParser
