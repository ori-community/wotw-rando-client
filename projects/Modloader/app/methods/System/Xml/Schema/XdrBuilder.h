#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParticleContentValidator.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XdrBuilder.h>
#include <Modloader/app/structs/XdrBuilder_DeclBaseInfo.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlNode__Array.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/XmlSchemaException.h>
#include <Modloader/app/structs/XmlSeverityType__Enum.h>

namespace app::classes::System::Xml::Schema::XdrBuilder {
    IL2CPP_REGISTER_METHOD(
        0x01ABDE40,
        void,
        ctor,
        app::XdrBuilder* this_ptr,
        app::XmlReader* reader,
        app::XmlNamespaceManager* curmgr,
        app::SchemaInfo* sinfo,
        app::String* target_namspace,
        app::XmlNameTable* name_table,
        app::SchemaNames* schema_names,
        app::ValidationEventHandler* eventhandler
    )
    IL2CPP_REGISTER_METHOD(0x01ABE460, bool, ProcessElement, app::XdrBuilder* this_ptr, app::String* prefix, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(
        0x01ABE7D0,
        void,
        ProcessAttribute,
        app::XdrBuilder* this_ptr,
        app::String* prefix,
        app::String* name,
        app::String* ns,
        app::String* value
    )
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_XmlResolver, app::XdrBuilder* this_ptr, app::XmlResolver* value)
    IL2CPP_REGISTER_METHOD(0x01ABEE90, bool, LoadSchema, app::XdrBuilder* this_ptr, app::String* uri)
    IL2CPP_REGISTER_METHOD(0x01ABF590, bool, IsXdrSchema, app::String* uri)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsContentParsed, app::XdrBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ABF750, void, ProcessMarkup, app::XdrBuilder* this_ptr, app::XmlNode__Array* markup)
    IL2CPP_REGISTER_METHOD(0x01ABF7C0, void, ProcessCData, app::XdrBuilder* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01ABF880, void, StartChildren, app::XdrBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ABF8C0, void, EndChildren, app::XdrBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ABF9F0, void, Push, app::XdrBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ABFA40, void, Pop, app::XdrBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ABFB30, void, PushGroupInfo, app::XdrBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ABFD00, void, PopGroupInfo, app::XdrBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ABFDF0, void, XDR_InitRoot, app::XdrBuilder* builder, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01ABFE60, void, XDR_BuildRoot_Name, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, XDR_BuildRoot_ID, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01ABFF30, void, XDR_BeginRoot, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC0070, void, XDR_EndRoot, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC05F0, void, XDR_InitElementType, app::XdrBuilder* builder, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01AC0A00, void, XDR_BuildElementType_Name, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC0CA0, void, XDR_BuildElementType_Content, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC0DA0, void, XDR_BuildElementType_Model, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC0EA0, void, XDR_BuildElementType_Order, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC0FD0, void, XDR_BuildElementType_DtType, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC1140, void, XDR_BuildElementType_DtValues, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC1310, void, XDR_BuildElementType_DtMaxLength, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC13E0, void, XDR_BuildElementType_DtMinLength, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC14B0, void, XDR_BeginElementType, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC1A00, void, XDR_EndElementType, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC1EB0, void, XDR_InitAttributeType, app::XdrBuilder* builder, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01AC20A0, void, XDR_BuildAttributeType_Name, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC24C0, void, XDR_BuildAttributeType_Required, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC2590, void, XDR_BuildAttributeType_Default, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC25C0, void, XDR_BuildAttributeType_DtType, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC26F0, void, XDR_BuildAttributeType_DtValues, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC28C0, void, XDR_BuildAttributeType_DtMaxLength, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC2990, void, XDR_BuildAttributeType_DtMinLength, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC2A60, void, XDR_BeginAttributeType, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC2B40, void, XDR_EndAttributeType, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC2EA0, void, XDR_InitElement, app::XdrBuilder* builder, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01AC2FC0, void, XDR_BuildElement_Type, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC32B0, void, XDR_BuildElement_MinOccurs, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC3380, void, XDR_BuildElement_MaxOccurs, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC3450, void, XDR_EndElement, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC35A0, void, XDR_InitAttribute, app::XdrBuilder* builder, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01AC3720, void, XDR_BuildAttribute_Type, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC3830, void, XDR_BuildAttribute_Required, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC3910, void, XDR_BuildAttribute_Default, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC3940, void, XDR_BeginAttribute, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC3F60, void, XDR_EndAttribute, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC3F90, void, XDR_InitGroup, app::XdrBuilder* builder, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01AC4120, void, XDR_BuildGroup_Order, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC4270, void, XDR_BuildGroup_MinOccurs, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC4350, void, XDR_BuildGroup_MaxOccurs, app::XdrBuilder* builder, app::Object* obj, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AC4430, void, XDR_EndGroup, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC46E0, void, XDR_InitElementDtType, app::XdrBuilder* builder, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01AC47B0, void, XDR_EndElementDtType, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC4900, void, XDR_InitAttributeDtType, app::XdrBuilder* builder, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01AC49B0, void, XDR_EndAttributeDtType, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC4B00, bool, GetNextState, app::XdrBuilder* this_ptr, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x01AC4DD0, bool, IsSkipableElement, app::XdrBuilder* this_ptr, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x01AC4F10, bool, IsSkipableAttribute, app::XdrBuilder* this_ptr, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x01AC50D0, int32_t, GetOrder, app::XdrBuilder* this_ptr, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x01AC5330, void, AddOrder, app::XdrBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AC5430, bool, IsYes, app::Object* obj, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC55B0, uint32_t, ParseMinOccurs, app::Object* obj, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC56F0, uint32_t, ParseMaxOccurs, app::Object* obj, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC5860, void, HandleMinMax, app::ParticleContentValidator* p_content, uint32_t c_min, uint32_t c_max)
    IL2CPP_REGISTER_METHOD(0x01AC5890, void, ParseDtMaxLength, uint32_t* c_val, app::Object* obj, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC5A20, void, ParseDtMinLength, uint32_t* c_val, app::Object* obj, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC5BB0, void, CompareMinMaxLength, uint32_t c_min, uint32_t c_max, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01AC5C60, bool, ParseInteger, app::String* str, uint32_t* n)
    IL2CPP_REGISTER_METHOD(
        0x01AC5CC0,
        void,
        XDR_CheckAttributeDefault,
        app::XdrBuilder* this_ptr,
        app::XdrBuilder_DeclBaseInfo* decl,
        app::SchemaAttDef* p_attdef
    )
    IL2CPP_REGISTER_METHOD(0x01AC5DF0, void, SetAttributePresence, app::XdrBuilder* this_ptr, app::SchemaAttDef* p_attdef, bool f_required)
    IL2CPP_REGISTER_METHOD(0x01AC5E50, int32_t, GetContent, app::XdrBuilder* this_ptr, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x01AC6150, bool, GetModel, app::XdrBuilder* this_ptr, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x01AC6310, app::XmlSchemaDatatype*, CheckDatatype, app::XdrBuilder* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01AC64F0, void, CheckDefaultAttValue, app::XdrBuilder* this_ptr, app::SchemaAttDef* att_def)
    IL2CPP_REGISTER_METHOD(0x01AC6660, bool, IsGlobal, app::XdrBuilder* this_ptr, int32_t flags)
    IL2CPP_REGISTER_METHOD(
        0x01AC6670,
        void,
        SendValidationEvent_1,
        app::XdrBuilder* this_ptr,
        app::String* code,
        app::String__Array* args,
        app::XmlSeverityType__Enum severity
    )
    IL2CPP_REGISTER_METHOD(0x01AC6880, void, SendValidationEvent_2, app::XdrBuilder* this_ptr, app::String* code)
    IL2CPP_REGISTER_METHOD(0x01AC6920, void, SendValidationEvent_3, app::XdrBuilder* this_ptr, app::String* code, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x01AC6B20, void, SendValidationEvent_4, app::XdrBuilder* this_ptr, app::XmlSchemaException* e, app::XmlSeverityType__Enum severity)
    IL2CPP_REGISTER_METHOD(0x01AC6CF0, void, cctor, )
} // namespace app::classes::System::Xml::Schema::XdrBuilder
