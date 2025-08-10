#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AcceptRejectRule__Enum.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/List_1_System_Data_DataTable_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rule__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XSDSchema.h>
#include <Modloader/app/structs/XSDSchema_NameType.h>
#include <Modloader/app/structs/XmlAttributeCollection.h>
#include <Modloader/app/structs/XmlAttribute__Array.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaAnnotated.h>
#include <Modloader/app/structs/XmlSchemaAnnotation.h>
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroup.h>
#include <Modloader/app/structs/XmlSchemaComplexType.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaIdentityConstraint.h>
#include <Modloader/app/structs/XmlSchemaKeyref.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>

namespace app::classes::System::Data::XSDSchema {
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_FromInference, app::XSDSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_FromInference, app::XSDSchema* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x023D40B0, void, CollectElementsAnnotations_1, app::XSDSchema* this_ptr, app::XmlSchema* schema)
    IL2CPP_REGISTER_METHOD(0x023D4230, void, CollectElementsAnnotations_2, app::XSDSchema* this_ptr, app::XmlSchema* schema, app::ArrayList* schema_list)
    IL2CPP_REGISTER_METHOD(0x023D4B40, app::String*, QualifiedName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023D4C10, void, SetProperties, app::Object* instance, app::XmlAttribute__Array* attrs)
    IL2CPP_REGISTER_METHOD(0x023D5250, void, SetExtProperties_1, app::Object* instance, app::XmlAttribute__Array* attrs)
    IL2CPP_REGISTER_METHOD(0x023D5810, void, HandleColumnExpression, app::XSDSchema* this_ptr, app::Object* instance, app::XmlAttribute__Array* attrs)
    IL2CPP_REGISTER_METHOD(0x023D5B60, app::String*, GetMsdataAttribute, app::XmlSchemaAnnotated* node, app::String* ln)
    IL2CPP_REGISTER_METHOD(0x023D5D30, void, SetExtProperties_2, app::Object* instance, app::XmlAttributeCollection* attrs)
    IL2CPP_REGISTER_METHOD(0x023D5FB0, void, HandleRefTableProperties, app::XSDSchema* this_ptr, app::ArrayList* ref_tables, app::XmlSchemaElement* element)
    IL2CPP_REGISTER_METHOD(0x023D6100, void, HandleRelation, app::XSDSchema* this_ptr, app::XmlElement* node, bool f_nested)
    IL2CPP_REGISTER_METHOD(0x023D6BC0, bool, HasAttributes, app::XSDSchema* this_ptr, app::XmlSchemaObjectCollection* attributes)
    IL2CPP_REGISTER_METHOD(0x023D6E00, bool, IsDatasetParticle, app::XSDSchema* this_ptr, app::XmlSchemaParticle* pt)
    IL2CPP_REGISTER_METHOD(0x023D7320, int32_t, DatasetElementCount, app::XSDSchema* this_ptr, app::XmlSchemaObjectCollection* elements)
    IL2CPP_REGISTER_METHOD(0x023D7510, app::XmlSchemaElement*, FindDatasetElement, app::XSDSchema* this_ptr, app::XmlSchemaObjectCollection* elements)
    IL2CPP_REGISTER_METHOD(0x023D7980, void, LoadSchema_1, app::XSDSchema* this_ptr, app::XmlSchemaSet* schema_set, app::DataTable* dt)
    IL2CPP_REGISTER_METHOD(0x023D79B0, void, LoadSchema_2, app::XSDSchema* this_ptr, app::XmlSchemaSet* schema_set, app::DataSet* ds)
    IL2CPP_REGISTER_METHOD(0x023D9000, void, HandleRelations, app::XSDSchema* this_ptr, app::XmlSchemaAnnotation* ann, bool f_nested)
    IL2CPP_REGISTER_METHOD(0x023D92C0, app::XmlSchemaObjectCollection*, GetParticleItems, app::XSDSchema* this_ptr, app::XmlSchemaParticle* pt)
    IL2CPP_REGISTER_METHOD(
        0x023D96C0,
        void,
        HandleParticle,
        app::XSDSchema* this_ptr,
        app::XmlSchemaParticle* pt,
        app::DataTable* table,
        app::ArrayList* table_children,
        bool is_base
    )
    IL2CPP_REGISTER_METHOD(
        0x023D9ED0,
        void,
        HandleAttributes,
        app::XSDSchema* this_ptr,
        app::XmlSchemaObjectCollection* attributes,
        app::DataTable* table,
        bool is_base
    )
    IL2CPP_REGISTER_METHOD(
        0x023DA1A0,
        void,
        HandleAttributeGroup,
        app::XSDSchema* this_ptr,
        app::XmlSchemaAttributeGroup* attribute_group,
        app::DataTable* table,
        bool is_base
    )
    IL2CPP_REGISTER_METHOD(
        0x023DA600,
        void,
        HandleComplexType,
        app::XSDSchema* this_ptr,
        app::XmlSchemaComplexType* ct,
        app::DataTable* table,
        app::ArrayList* table_children,
        bool is_nillable
    )
    IL2CPP_REGISTER_METHOD(0x023DAC80, app::XmlSchemaParticle*, GetParticle, app::XSDSchema* this_ptr, app::XmlSchemaComplexType* ct)
    IL2CPP_REGISTER_METHOD(0x023DAE70, app::DataColumn*, FindField, app::XSDSchema* this_ptr, app::DataTable* table, app::String* field)
    IL2CPP_REGISTER_METHOD(
        0x023DB190,
        app::DataColumn__Array*,
        BuildKey,
        app::XSDSchema* this_ptr,
        app::XmlSchemaIdentityConstraint* key_node,
        app::DataTable* table
    )
    IL2CPP_REGISTER_METHOD(
        0x023DB4F0,
        bool,
        GetBooleanAttribute,
        app::XSDSchema* this_ptr,
        app::XmlSchemaAnnotated* element,
        app::String* attr_name,
        bool def_val
    )
    IL2CPP_REGISTER_METHOD(
        0x023DB6B0,
        app::String*,
        GetStringAttribute,
        app::XSDSchema* this_ptr,
        app::XmlSchemaAnnotated* element,
        app::String* attr_name,
        app::String* def_val
    )
    IL2CPP_REGISTER_METHOD(0x023DB770, app::AcceptRejectRule__Enum, TranslateAcceptRejectRule, app::String* str_rule)
    IL2CPP_REGISTER_METHOD(0x023DB850, app::Rule__Enum, TranslateRule, app::String* str_rule)
    IL2CPP_REGISTER_METHOD(0x023DB9B0, void, HandleKeyref, app::XSDSchema* this_ptr, app::XmlSchemaKeyref* keyref)
    IL2CPP_REGISTER_METHOD(0x023DC5C0, void, HandleConstraint, app::XSDSchema* this_ptr, app::XmlSchemaIdentityConstraint* key_node)
    IL2CPP_REGISTER_METHOD(0x023DCD10, app::DataTable*, InstantiateSimpleTable, app::XSDSchema* this_ptr, app::XmlSchemaElement* node)
    IL2CPP_REGISTER_METHOD(0x023DD650, app::String*, GetInstanceName, app::XSDSchema* this_ptr, app::XmlSchemaAnnotated* node)
    IL2CPP_REGISTER_METHOD(
        0x023DD810,
        app::DataTable*,
        InstantiateTable,
        app::XSDSchema* this_ptr,
        app::XmlSchemaElement* node,
        app::XmlSchemaComplexType* type_node,
        bool is_ref
    )
    IL2CPP_REGISTER_METHOD(0x023DEE90, app::Type*, XsdtoClr, app::String* xsd_type_name)
    IL2CPP_REGISTER_METHOD(0x023DEFD0, app::XSDSchema_NameType*, FindNameType, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023DF110, app::Type*, ParseDataType, app::XSDSchema* this_ptr, app::String* dt)
    IL2CPP_REGISTER_METHOD(0x023DF4A0, bool, IsXsdType, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023DF560, app::XmlSchemaAnnotated*, FindTypeNode, app::XSDSchema* this_ptr, app::XmlSchemaAnnotated* node)
    IL2CPP_REGISTER_METHOD(
        0x023DF8D0,
        void,
        HandleSimpleTypeSimpleContentColumn,
        app::XSDSchema* this_ptr,
        app::XmlSchemaSimpleType* type_node,
        app::String* str_type,
        app::DataTable* table,
        bool is_base,
        app::XmlAttribute__Array* attrs,
        bool is_nillable
    )
    IL2CPP_REGISTER_METHOD(
        0x023E0780,
        void,
        HandleSimpleContentColumn,
        app::XSDSchema* this_ptr,
        app::String* str_type,
        app::DataTable* table,
        bool is_base,
        app::XmlAttribute__Array* attrs,
        bool is_nillable
    )
    IL2CPP_REGISTER_METHOD(
        0x023E1150,
        void,
        HandleAttributeColumn,
        app::XSDSchema* this_ptr,
        app::XmlSchemaAttribute* attrib,
        app::DataTable* table,
        bool is_base
    )
    IL2CPP_REGISTER_METHOD(0x023E1F40, void, HandleElementColumn, app::XSDSchema* this_ptr, app::XmlSchemaElement* elem, app::DataTable* table, bool is_base)
    IL2CPP_REGISTER_METHOD(0x023E3170, void, HandleDataSet, app::XSDSchema* this_ptr, app::XmlSchemaElement* node, bool is_new_data_set)
    IL2CPP_REGISTER_METHOD(0x023E44B0, void, AddTablesToList, app::XSDSchema* this_ptr, app::List_1_System_Data_DataTable_* table_list, app::DataTable* dt)
    IL2CPP_REGISTER_METHOD(0x023E4660, app::String*, GetPrefix, app::XSDSchema* this_ptr, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x023E4960, app::String*, GetNamespaceFromPrefix, app::XSDSchema* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x023E4C70, app::String*, GetTableNamespace, app::XSDSchema* this_ptr, app::XmlSchemaIdentityConstraint* key)
    IL2CPP_REGISTER_METHOD(0x023E4EB0, app::String*, GetTableName, app::XSDSchema* this_ptr, app::XmlSchemaIdentityConstraint* key)
    IL2CPP_REGISTER_METHOD(0x023E5070, bool, IsTable, app::XSDSchema* this_ptr, app::XmlSchemaElement* node)
    IL2CPP_REGISTER_METHOD(0x023E5390, app::DataTable*, HandleTable, app::XSDSchema* this_ptr, app::XmlSchemaElement* node)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XSDSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023E5550, void, cctor, )
} // namespace app::classes::System::Data::XSDSchema
