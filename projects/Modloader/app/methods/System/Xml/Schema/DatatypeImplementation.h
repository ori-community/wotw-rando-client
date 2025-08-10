#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DatatypeImplementation.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RestrictionFacets.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/XmlSchemaDatatypeVariety__Enum.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaObjectTable.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XmlSchemaSimpleType__Array.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpace__Enum.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/XmlValueConverter.h>

namespace app::classes::System::Xml::Schema::DatatypeImplementation {
    IL2CPP_REGISTER_METHOD(0x0234DC40, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x02351840, app::XmlSchemaSimpleType*, get_AnySimpleType, )
    IL2CPP_REGISTER_METHOD(0x023518E0, app::XmlSchemaSimpleType*, get_UntypedAtomicType, )
    IL2CPP_REGISTER_METHOD(0x02351980, app::DatatypeImplementation*, FromXmlTokenizedType, app::XmlTokenizedType__Enum token)
    IL2CPP_REGISTER_METHOD(0x02351A50, app::DatatypeImplementation*, FromXmlTokenizedTypeXsd, app::XmlTokenizedType__Enum token)
    IL2CPP_REGISTER_METHOD(0x02351B20, app::DatatypeImplementation*, FromXdrName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02351C50, app::DatatypeImplementation*, FromTypeName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02351D80, app::XmlSchemaSimpleType*, StartBuiltinType, app::XmlQualifiedName* qname, app::XmlSchemaDatatype* data_type)
    IL2CPP_REGISTER_METHOD(0x02351FD0, void, FinishBuiltinType, app::XmlSchemaSimpleType* derived_type, app::XmlSchemaSimpleType* base_type)
    IL2CPP_REGISTER_METHOD(0x02352430, void, CreateBuiltinTypes, )
    IL2CPP_REGISTER_METHOD(0x02353570, app::XmlSchemaSimpleType*, GetSimpleTypeFromTypeCode, app::XmlTypeCode__Enum type_code)
    IL2CPP_REGISTER_METHOD(0x02353640, app::XmlSchemaSimpleType*, GetSimpleTypeFromXsdType, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x02353760, app::XmlSchemaSimpleType*, GetNormalizedStringTypeV1Compat, )
    IL2CPP_REGISTER_METHOD(0x02353A20, app::XmlSchemaSimpleType*, GetTokenTypeV1Compat, )
    IL2CPP_REGISTER_METHOD(0x02353CE0, app::XmlSchemaSimpleType__Array*, GetBuiltInTypes, )
    IL2CPP_REGISTER_METHOD(0x02353D80, app::XmlTypeCode__Enum, GetPrimitiveTypeCode, app::XmlTypeCode__Enum type_code)
    IL2CPP_REGISTER_METHOD(
        0x02353F00,
        app::XmlSchemaDatatype*,
        DeriveByRestriction,
        app::DatatypeImplementation* this_ptr,
        app::XmlSchemaObjectCollection* facets,
        app::XmlNameTable* name_table,
        app::XmlSchemaType* schema_type
    )
    IL2CPP_REGISTER_METHOD(0x023540D0, app::XmlSchemaDatatype*, DeriveByList_1, app::DatatypeImplementation* this_ptr, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(
        0x023540E0,
        app::XmlSchemaDatatype*,
        DeriveByList_2,
        app::DatatypeImplementation* this_ptr,
        int32_t min_size,
        app::XmlSchemaType* schema_type
    )
    IL2CPP_REGISTER_METHOD(0x02354490, app::DatatypeImplementation*, DeriveByUnion, app::XmlSchemaSimpleType__Array* types, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        VerifySchemaValid,
        app::DatatypeImplementation* this_ptr,
        app::XmlSchemaObjectTable* notations,
        app::XmlSchemaObject* caller
    )
    IL2CPP_REGISTER_METHOD(0x023546B0, bool, IsDerivedFrom, app::DatatypeImplementation* this_ptr, app::XmlSchemaDatatype* datatype)
    IL2CPP_REGISTER_METHOD(0x023549C0, bool, IsEqual, app::DatatypeImplementation* this_ptr, app::Object* o1, app::Object* o2)
    IL2CPP_REGISTER_METHOD(0x023549E0, bool, IsComparable, app::DatatypeImplementation* this_ptr, app::XmlSchemaDatatype* dtype)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlValueConverter*, CreateValueConverter, app::DatatypeImplementation* this_ptr, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(0x02354B20, app::FacetsChecker*, get_FacetsChecker, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02354BC0, app::XmlValueConverter*, get_ValueConverter, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, app::XmlTokenizedType__Enum, get_TokenizedType, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02354BF0, app::Type*, get_ValueType, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::XmlSchemaDatatypeVariety__Enum, get_Variety, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlTypeCode__Enum, get_TypeCode, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::RestrictionFacets*, get_Restriction, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02354C90, bool, get_HasLexicalFacets, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02354CB0, bool, get_HasValueFacets, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::DatatypeImplementation*, get_Base, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02354CD0,
        app::Object*,
        ParseValue_1,
        app::DatatypeImplementation* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr
    )
    IL2CPP_REGISTER_METHOD(
        0x02354F40,
        app::Object*,
        ParseValue_2,
        app::DatatypeImplementation* this_ptr,
        app::String* s,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* nsmgr,
        bool create_atomic_value
    )
    IL2CPP_REGISTER_METHOD(
        0x02355130,
        app::Exception*,
        TryParseValue,
        app::DatatypeImplementation* this_ptr,
        app::Object* value,
        app::XmlNameTable* name_table,
        app::IXmlNamespaceResolver* namespace_resolver,
        app::Object** typed_value
    )
    IL2CPP_REGISTER_METHOD(0x02355530, app::String*, GetTypeName, app::DatatypeImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023555C0, int32_t, Compare, app::DatatypeImplementation* this_ptr, app::Byte__Array* value1, app::Byte__Array* value2)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DatatypeImplementation* this_ptr)
} // namespace app::classes::System::Xml::Schema::DatatypeImplementation
