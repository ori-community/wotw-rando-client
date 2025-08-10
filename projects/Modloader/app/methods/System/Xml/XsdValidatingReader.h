#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributePSVIInfo.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/IXmlSchemaInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadState__Enum_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ValidatingReaderNodeData.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlReaderSettings.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaInfo.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlSchemaValidity__Enum.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/XsdCachingReader.h>
#include <Modloader/app/structs/XsdValidatingReader.h>

namespace app::classes::System::Xml::XsdValidatingReader {
    IL2CPP_REGISTER_METHOD(
        0x03102080,
        void,
        ctor_1,
        app::XsdValidatingReader* this_ptr,
        app::XmlReader* reader,
        app::XmlResolver* xml_resolver,
        app::XmlReaderSettings* reader_settings,
        app::XmlSchemaObject* partial_validation_type
    )
    IL2CPP_REGISTER_METHOD(
        0x031022D0,
        void,
        ctor_2,
        app::XsdValidatingReader* this_ptr,
        app::XmlReader* reader,
        app::XmlResolver* xml_resolver,
        app::XmlReaderSettings* reader_settings
    )
    IL2CPP_REGISTER_METHOD(0x031022F0, void, Init, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x03102800,
        void,
        SetupValidator,
        app::XsdValidatingReader* this_ptr,
        app::XmlReaderSettings* reader_settings,
        app::XmlReader* reader,
        app::XmlSchemaObject* partial_validation_type
    )
    IL2CPP_REGISTER_METHOD(0x03102C20, app::XmlReaderSettings*, get_Settings, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03102ED0, app::XmlNodeType__Enum, get_NodeType, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03102FB0, app::String*, get_Name, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03103170, app::String*, get_LocalName, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031031C0, app::String*, get_NamespaceURI, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03103210, app::String*, get_Prefix, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03103260, app::String*, get_Value, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031032B0, int32_t, get_Depth, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717120, app::String*, get_BaseURI, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717150, bool, get_IsEmptyElement, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03103300, bool, get_IsDefault, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017171B0, char16_t, get_QuoteChar, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017171E0, app::XmlSpace__Enum, get_XmlSpace, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717210, app::String*, get_XmlLang, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IXmlSchemaInfo*, get_SchemaInfo, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03103340, app::Type*, get_ValueType, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_AttributeCount, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031034A0, app::String*, GetAttribute_1, app::XsdValidatingReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x03103510, app::String*, GetAttribute_2, app::XsdValidatingReader* this_ptr, app::String* name, app::String* namespace_u_r_i)
    IL2CPP_REGISTER_METHOD(0x03103690, app::String*, GetAttribute_3, app::XsdValidatingReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x031037C0, bool, MoveToAttribute_1, app::XsdValidatingReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x03103890, void, MoveToAttribute_2, app::XsdValidatingReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x03103A50, bool, MoveToFirstAttribute, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03103BF0, bool, MoveToNextAttribute, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03103D80, bool, MoveToElement, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03103DD0, bool, Read, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717450, bool, get_EOF, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104200, void, Close, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104240, app::ReadState__Enum_1, get_ReadState, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104280, void, Skip, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::XmlNameTable*, get_NameTable, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104480, app::String*, LookupNamespace, app::XsdValidatingReader* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x03104530, void, ResolveEntity, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104580, bool, ReadAttributeValue, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104640, bool, IXmlSchemaInfo_get_IsDefault, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031046F0, bool, IXmlSchemaInfo_get_IsNil, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104740, app::XmlSchemaValidity__Enum, IXmlSchemaInfo_get_Validity, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104810, app::XmlSchemaSimpleType*, IXmlSchemaInfo_get_MemberType, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031048C0, app::XmlSchemaType*, IXmlSchemaInfo_get_SchemaType, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104930, app::XmlSchemaElement*, IXmlSchemaInfo_get_SchemaElement, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104990, app::XmlSchemaAttribute*, IXmlSchemaInfo_get_SchemaAttribute, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasLineInfo, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031049E0, int32_t, get_LineNumber, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104A80, int32_t, get_LinePosition, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x03104B20,
        app::IDictionary_2_System_String_System_String_*,
        IXmlNamespaceResolver_GetNamespacesInScope,
        app::XsdValidatingReader* this_ptr,
        app::XmlNamespaceScope__Enum scope
    )
    IL2CPP_REGISTER_METHOD(0x03104BF0, app::String*, IXmlNamespaceResolver_LookupNamespace, app::XsdValidatingReader* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x03104CC0, app::String*, IXmlNamespaceResolver_LookupPrefix, app::XsdValidatingReader* this_ptr, app::String* namespace_name)
    IL2CPP_REGISTER_METHOD(0x017170C0, app::Object*, GetStringValue, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104D90, app::XmlSchemaInfo*, get_AttributeSchemaInfo, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03104DB0, void, ProcessReaderEvent, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03105140, void, ProcessElementEvent, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03105980, void, ProcessEndElementEvent, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03105B80, void, ValidateAttributes, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03105E80, void, ClearAttributesInfo, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03105ED0, app::AttributePSVIInfo*, GetAttributePSVI_1, app::XsdValidatingReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x031060D0,
        app::AttributePSVIInfo*,
        GetAttributePSVI_2,
        app::XsdValidatingReader* this_ptr,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(
        0x03106140,
        app::ValidatingReaderNodeData*,
        GetDefaultAttribute_1,
        app::XsdValidatingReader* this_ptr,
        app::String* name,
        bool update_position
    )
    IL2CPP_REGISTER_METHOD(
        0x031062D0,
        app::ValidatingReaderNodeData*,
        GetDefaultAttribute_2,
        app::XsdValidatingReader* this_ptr,
        app::String* attr_local_name,
        app::String* ns,
        bool update_position
    )
    IL2CPP_REGISTER_METHOD(0x03106480, app::AttributePSVIInfo*, AddAttributePSVI, app::XsdValidatingReader* this_ptr, int32_t att_index)
    IL2CPP_REGISTER_METHOD(0x03106720, bool, IsXSDRoot, app::XsdValidatingReader* this_ptr, app::String* local_name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x03106740, void, ProcessInlineSchema, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03106870, void, ReadAheadForMemberType, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03106CA0, void, GetIsDefault, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031071F0, void, GetMemberType, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03107390, app::XsdCachingReader*, GetCachingReader, app::XsdValidatingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x031076B0,
        app::ValidatingReaderNodeData*,
        CreateDummyTextNode,
        app::XsdValidatingReader* this_ptr,
        app::String* attribute_value,
        int32_t depth
    )
    IL2CPP_REGISTER_METHOD(0x03107850, void, CachingCallBack, app::XsdValidatingReader* this_ptr, app::XsdCachingReader* caching_reader)
    IL2CPP_REGISTER_METHOD(0x03107880, app::String*, GetOriginalAtomicValueStringOfElement, app::XsdValidatingReader* this_ptr)
} // namespace app::classes::System::Xml::XsdValidatingReader
