#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/SchemaNames_Token__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlNode__Array.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaException.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>
#include <Modloader/app/structs/XmlSeverityType__Enum.h>
#include <Modloader/app/structs/XsdBuilder.h>
#include <Modloader/app/structs/XsdBuilder_State__Enum.h>

namespace app::classes::System::Xml::Schema::XsdBuilder {
    IL2CPP_REGISTER_METHOD(
        0x01938610,
        void,
        ctor,
        app::XsdBuilder* this_ptr,
        app::XmlReader* reader,
        app::XmlNamespaceManager* curmgr,
        app::XmlSchema* schema,
        app::XmlNameTable* name_table,
        app::SchemaNames* schema_names,
        app::ValidationEventHandler* eventhandler
    )
    IL2CPP_REGISTER_METHOD(0x01938B50, bool, ProcessElement, app::XsdBuilder* this_ptr, app::String* prefix, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(
        0x01938E40,
        void,
        ProcessAttribute,
        app::XsdBuilder* this_ptr,
        app::String* prefix,
        app::String* name,
        app::String* ns,
        app::String* value
    )
    IL2CPP_REGISTER_METHOD(0x01939760, bool, IsContentParsed, app::XsdBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAE9B0, void, ProcessMarkup, app::XsdBuilder* this_ptr, app::XmlNode__Array* markup)
    IL2CPP_REGISTER_METHOD(0x01939780, void, ProcessCData, app::XsdBuilder* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01939820, void, StartChildren, app::XsdBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01939A20, void, EndChildren, app::XsdBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01939A70, void, Push, app::XsdBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01939D50, void, Pop, app::XsdBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01939E80, app::SchemaNames_Token__Enum, get_CurrentElement, app::XsdBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01939EA0, app::SchemaNames_Token__Enum, get_ParentElement, app::XsdBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01939F60, app::XmlSchemaObject*, get_ParentContainer, app::XsdBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0193A050, app::XmlSchemaObject*, GetContainer, app::XsdBuilder* this_ptr, app::XsdBuilder_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x0193A2A0, void, SetContainer, app::XsdBuilder* this_ptr, app::XsdBuilder_State__Enum state, app::Object* container)
    IL2CPP_REGISTER_METHOD(0x0193A8B0, void, BuildAnnotated_Id, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193A8F0, void, BuildSchema_AttributeFormDefault, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193A9F0, void, BuildSchema_ElementFormDefault, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193AAF0, void, BuildSchema_TargetNamespace, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193AB20, void, BuildSchema_Version, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193AB50, void, BuildSchema_FinalDefault, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193AC10, void, BuildSchema_BlockDefault, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193ACD0, void, InitSchema, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193ACF0, void, InitInclude, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193AE90, void, BuildInclude_SchemaLocation, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193AEC0, void, InitImport, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B060, void, BuildImport_Namespace, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B090, void, BuildImport_SchemaLocation, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B0C0, void, InitRedefine, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B260, void, BuildRedefine_SchemaLocation, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B290, void, EndRedefine, app::XsdBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x0193B2B0, void, InitAttribute, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B460, void, BuildAttribute_Default, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B490, void, BuildAttribute_Fixed, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B4C0, void, BuildAttribute_Form, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B5C0, void, BuildAttribute_Use, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B6C0, void, BuildAttribute_Ref, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B790, void, BuildAttribute_Name, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B7C0, void, BuildAttribute_Type, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193B890, void, InitElement, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193BAE0, void, BuildElement_Abstract, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193BBA0, void, BuildElement_Block, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193BC60, void, BuildElement_Default, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193BC90, void, BuildElement_Form, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193BD90, void, BuildElement_SubstitutionGroup, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193BE50, void, BuildElement_Final, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193BF10, void, BuildElement_Fixed, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193BF40, void, BuildElement_MaxOccurs, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193BF70, void, BuildElement_MinOccurs, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193BFA0, void, BuildElement_Name, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193BFD0, void, BuildElement_Nillable, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193C090, void, BuildElement_Ref, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193C150, void, BuildElement_Type, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193C210, void, InitSimpleType, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193C740, void, BuildSimpleType_Name, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193C770, void, BuildSimpleType_Final, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193C830, void, InitSimpleTypeUnion, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193CAF0, void, BuildSimpleTypeUnion_MemberTypes, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193CD00, void, InitSimpleTypeList, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193CEB0, void, BuildSimpleTypeList_ItemType, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193CF80, void, InitSimpleTypeRestriction, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193D130, void, BuildSimpleTypeRestriction_Base, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193D200, void, InitComplexType, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193D4A0, void, BuildComplexType_Abstract, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193D580, void, BuildComplexType_Block, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193D640, void, BuildComplexType_Final, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193D700, void, BuildComplexType_Mixed, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193D7D0, void, BuildComplexType_Name, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193D800, void, InitComplexContent, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193DA20, void, BuildComplexContent_Mixed, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193DAE0, void, InitComplexContentExtension, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193DE00, void, BuildComplexContentExtension_Base, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193DED0, void, InitComplexContentRestriction, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193E1A0, void, BuildComplexContentRestriction_Base, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193E270, void, InitSimpleContent, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193E490, void, InitSimpleContentExtension, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193E660, void, BuildSimpleContentExtension_Base, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193E730, void, InitSimpleContentRestriction, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193E900, void, BuildSimpleContentRestriction_Base, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193E9D0, void, InitAttributeGroup, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193EBA0, void, BuildAttributeGroup_Name, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193EBD0, void, InitAttributeGroupRef, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193EDC0, void, BuildAttributeGroupRef_Ref, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193EE90, void, InitAnyAttribute, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193F280, void, BuildAnyAttribute_Namespace, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193F2B0, void, BuildAnyAttribute_ProcessContents, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193F3B0, void, InitGroup, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193F600, void, BuildGroup_Name, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193F630, void, InitGroupRef, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193F850, void, BuildParticle_MaxOccurs, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193F880, void, BuildParticle_MinOccurs, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193F8B0, void, BuildGroupRef_Ref, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193F980, void, InitAll, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193FAF0, void, InitChoice, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193FC60, void, InitSequence, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193FDD0, void, InitAny, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193FF40, void, BuildAny_Namespace, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0193FF70, void, BuildAny_ProcessContents, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01940070, void, InitNotation, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01940280, void, BuildNotation_Name, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x019402B0, void, BuildNotation_Public, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x019402E0, void, BuildNotation_System, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01940310, void, InitFacet, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01940E30, void, BuildFacet_Fixed, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01940F00, void, BuildFacet_Value, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01940F30, void, InitIdentityConstraint, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01941300, void, BuildIdentityConstraint_Name, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01941330, void, BuildIdentityConstraint_Refer, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x019415A0, void, InitSelector, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01941750, void, BuildSelector_XPath, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01941780, void, InitField, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01941750, void, BuildField_XPath, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01941940, void, InitAnnotation, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01941C20, void, InitAppinfo, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01941DB0, void, BuildAppinfo_Source, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01941E70, void, EndAppinfo, app::XsdBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01941EB0, void, InitDocumentation, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01942040, void, BuildDocumentation_Source, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01942100, void, BuildDocumentation_XmlLang, app::XsdBuilder* builder, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01942360, void, EndDocumentation, app::XsdBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x019423A0, void, AddAttribute, app::XsdBuilder* this_ptr, app::XmlSchemaObject* value)
    IL2CPP_REGISTER_METHOD(0x019426E0, void, AddParticle, app::XsdBuilder* this_ptr, app::XmlSchemaParticle* particle)
    IL2CPP_REGISTER_METHOD(0x01942AC0, bool, GetNextState, app::XsdBuilder* this_ptr, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x01942D50, bool, IsSkipableElement, app::XsdBuilder* this_ptr, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x01942D90, void, SetMinOccurs, app::XsdBuilder* this_ptr, app::XmlSchemaParticle* particle, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01942E60, void, SetMaxOccurs, app::XsdBuilder* this_ptr, app::XmlSchemaParticle* particle, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01942F30, bool, ParseBoolean, app::XsdBuilder* this_ptr, app::String* value, app::String* attribute_name)
    IL2CPP_REGISTER_METHOD(
        0x01943020,
        int32_t,
        ParseEnum,
        app::XsdBuilder* this_ptr,
        app::String* value,
        app::String* attribute_name,
        app::String__Array* values
    )
    IL2CPP_REGISTER_METHOD(0x01943180, app::XmlQualifiedName*, ParseQName, app::XsdBuilder* this_ptr, app::String* value, app::String* attribute_name)
    IL2CPP_REGISTER_METHOD(0x019432C0, int32_t, ParseBlockFinalEnum, app::XsdBuilder* this_ptr, app::String* value, app::String* attribute_name)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, ParseUriReference, app::String* s)
    IL2CPP_REGISTER_METHOD(
        0x01943650,
        void,
        SendValidationEvent_1,
        app::XsdBuilder* this_ptr,
        app::String* code,
        app::String* arg0,
        app::String* arg1,
        app::String* arg2
    )
    IL2CPP_REGISTER_METHOD(0x01943960, void, SendValidationEvent_2, app::XsdBuilder* this_ptr, app::String* code, app::String* msg)
    IL2CPP_REGISTER_METHOD(
        0x01943B60,
        void,
        SendValidationEvent_3,
        app::XsdBuilder* this_ptr,
        app::String* code,
        app::String__Array* args,
        app::XmlSeverityType__Enum severity
    )
    IL2CPP_REGISTER_METHOD(0x01943D70, void, SendValidationEvent_4, app::XsdBuilder* this_ptr, app::XmlSchemaException* e, app::XmlSeverityType__Enum severity)
    IL2CPP_REGISTER_METHOD(0x01943F40, void, SendValidationEvent_5, app::XsdBuilder* this_ptr, app::XmlSchemaException* e)
    IL2CPP_REGISTER_METHOD(0x01943F50, void, RecordPosition, app::XsdBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01944030, void, cctor, )
} // namespace app::classes::System::Xml::Schema::XsdBuilder
