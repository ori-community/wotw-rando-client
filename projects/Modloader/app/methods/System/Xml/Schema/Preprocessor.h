#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Preprocessor.h>
#include <Modloader/app/structs/RedefineEntry.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlReaderSettings.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaAnnotation.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroup.h>
#include <Modloader/app/structs/XmlSchemaCompilationSettings.h>
#include <Modloader/app/structs/XmlSchemaComplexType.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaExternal.h>
#include <Modloader/app/structs/XmlSchemaGroup.h>
#include <Modloader/app/structs/XmlSchemaIdentityConstraint.h>
#include <Modloader/app/structs/XmlSchemaNotation.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>

namespace app::classes::System::Xml::Schema::Preprocessor {
    IL2CPP_REGISTER_METHOD(
        0x016D9770,
        void,
        ctor,
        app::Preprocessor* this_ptr,
        app::XmlNameTable* name_table,
        app::SchemaNames* schema_names,
        app::ValidationEventHandler* event_handler,
        app::XmlSchemaCompilationSettings* compilation_settings
    )
    IL2CPP_REGISTER_METHOD(0x016D9AB0, bool, Execute, app::Preprocessor* this_ptr, app::XmlSchema* schema, app::String* target_namespace, bool load_externals)
    IL2CPP_REGISTER_METHOD(0x016DA170, void, Cleanup, app::Preprocessor* this_ptr, app::XmlSchema* schema)
    IL2CPP_REGISTER_METHOD(0x016DA2A0, void, CleanupRedefine, app::Preprocessor* this_ptr, app::XmlSchemaExternal* include)
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_XmlResolver, app::Preprocessor* this_ptr, app::XmlResolver* value)
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_ReaderSettings, app::Preprocessor* this_ptr, app::XmlReaderSettings* value)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_SchemaLocations, app::Preprocessor* this_ptr, app::Hashtable* value)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_ChameleonSchemas, app::Preprocessor* this_ptr, app::Hashtable* value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchema*, get_RootSchema, app::Preprocessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016DA3B0, void, BuildSchemaList, app::Preprocessor* this_ptr, app::XmlSchema* schema)
    IL2CPP_REGISTER_METHOD(0x016DA5E0, void, LoadExternals, app::Preprocessor* this_ptr, app::XmlSchema* schema)
    IL2CPP_REGISTER_METHOD(0x016DB3D0, app::XmlSchema*, GetBuildInSchema, )
    IL2CPP_REGISTER_METHOD(0x016DC600, void, BuildRefNamespaces, app::Preprocessor* this_ptr, app::XmlSchema* schema)
    IL2CPP_REGISTER_METHOD(
        0x016DC930,
        void,
        ParseUri,
        app::Preprocessor* this_ptr,
        app::String* uri,
        app::String* code,
        app::XmlSchemaObject* source_schema_object
    )
    IL2CPP_REGISTER_METHOD(
        0x016DCA60,
        void,
        Preprocess,
        app::Preprocessor* this_ptr,
        app::XmlSchema* schema,
        app::String* target_namespace,
        app::ArrayList* imports
    )
    IL2CPP_REGISTER_METHOD(0x016DDF10, void, CopyIncludedComponents, app::Preprocessor* this_ptr, app::XmlSchema* included_schema, app::XmlSchema* schema)
    IL2CPP_REGISTER_METHOD(0x016DEED0, void, PreprocessRedefine, app::Preprocessor* this_ptr, app::RedefineEntry* redefine_entry)
    IL2CPP_REGISTER_METHOD(0x016DFA00, void, GetIncludedSet, app::Preprocessor* this_ptr, app::XmlSchema* schema, app::ArrayList* includes_list)
    IL2CPP_REGISTER_METHOD(0x016DFBF0, app::XmlSchema*, GetParentSchema, app::XmlSchemaObject* current_schema_object)
    IL2CPP_REGISTER_METHOD(0x016DFCC0, void, SetSchemaDefaults, app::Preprocessor* this_ptr, app::XmlSchema* schema)
    IL2CPP_REGISTER_METHOD(
        0x016DFE00,
        int32_t,
        CountGroupSelfReference,
        app::Preprocessor* this_ptr,
        app::XmlSchemaObjectCollection* items,
        app::XmlQualifiedName* name,
        app::XmlSchemaGroup* redefined
    )
    IL2CPP_REGISTER_METHOD(0x016E0110, void, CheckRefinedGroup, app::Preprocessor* this_ptr, app::XmlSchemaGroup* group)
    IL2CPP_REGISTER_METHOD(0x016E01F0, void, CheckRefinedAttributeGroup, app::Preprocessor* this_ptr, app::XmlSchemaAttributeGroup* attribute_group)
    IL2CPP_REGISTER_METHOD(0x016E03C0, void, CheckRefinedSimpleType, app::Preprocessor* this_ptr, app::XmlSchemaSimpleType* stype)
    IL2CPP_REGISTER_METHOD(0x016E0520, void, CheckRefinedComplexType, app::Preprocessor* this_ptr, app::XmlSchemaComplexType* ctype)
    IL2CPP_REGISTER_METHOD(0x016E0870, void, PreprocessAttribute, app::Preprocessor* this_ptr, app::XmlSchemaAttribute* attribute)
    IL2CPP_REGISTER_METHOD(0x016E0A90, void, PreprocessLocalAttribute, app::Preprocessor* this_ptr, app::XmlSchemaAttribute* attribute)
    IL2CPP_REGISTER_METHOD(0x016E0D50, void, PreprocessAttributeContent, app::Preprocessor* this_ptr, app::XmlSchemaAttribute* attribute)
    IL2CPP_REGISTER_METHOD(0x016E0FE0, void, PreprocessAttributeGroup, app::Preprocessor* this_ptr, app::XmlSchemaAttributeGroup* attribute_group)
    IL2CPP_REGISTER_METHOD(0x016E11D0, void, PreprocessElement, app::Preprocessor* this_ptr, app::XmlSchemaElement* element)
    IL2CPP_REGISTER_METHOD(0x016E14E0, void, PreprocessLocalElement, app::Preprocessor* this_ptr, app::XmlSchemaElement* element)
    IL2CPP_REGISTER_METHOD(0x016E1990, void, PreprocessElementContent, app::Preprocessor* this_ptr, app::XmlSchemaElement* element)
    IL2CPP_REGISTER_METHOD(0x016E1D80, void, PreprocessIdentityConstraint, app::Preprocessor* this_ptr, app::XmlSchemaIdentityConstraint* constraint)
    IL2CPP_REGISTER_METHOD(0x016E2250, void, PreprocessSimpleType, app::Preprocessor* this_ptr, app::XmlSchemaSimpleType* simple_type, bool local)
    IL2CPP_REGISTER_METHOD(0x016E2990, void, PreprocessComplexType, app::Preprocessor* this_ptr, app::XmlSchemaComplexType* complex_type, bool local)
    IL2CPP_REGISTER_METHOD(0x016E32C0, void, PreprocessGroup, app::Preprocessor* this_ptr, app::XmlSchemaGroup* group)
    IL2CPP_REGISTER_METHOD(0x016E3530, void, PreprocessNotation, app::Preprocessor* this_ptr, app::XmlSchemaNotation* notation)
    IL2CPP_REGISTER_METHOD(0x016E3820, void, PreprocessParticle, app::Preprocessor* this_ptr, app::XmlSchemaParticle* particle)
    IL2CPP_REGISTER_METHOD(
        0x016E4270,
        void,
        PreprocessAttributes,
        app::Preprocessor* this_ptr,
        app::XmlSchemaObjectCollection* attributes,
        app::XmlSchemaAnyAttribute* any_attribute,
        app::XmlSchemaObject* parent
    )
    IL2CPP_REGISTER_METHOD(0x016E45B0, void, ValidateIdAttribute, app::Preprocessor* this_ptr, app::XmlSchemaObject* xso)
    IL2CPP_REGISTER_METHOD(0x016E4840, void, ValidateNameAttribute, app::Preprocessor* this_ptr, app::XmlSchemaObject* xso)
    IL2CPP_REGISTER_METHOD(
        0x016E4BB0,
        void,
        ValidateQNameAttribute,
        app::Preprocessor* this_ptr,
        app::XmlSchemaObject* xso,
        app::String* attribute_name,
        app::XmlQualifiedName* value
    )
    IL2CPP_REGISTER_METHOD(
        0x016E4EC0,
        app::Uri*,
        ResolveSchemaLocationUri,
        app::Preprocessor* this_ptr,
        app::XmlSchema* enclosing_schema,
        app::String* location
    )
    IL2CPP_REGISTER_METHOD(0x016E4F20, app::Object*, GetSchemaEntity, app::Preprocessor* this_ptr, app::Uri* ruri)
    IL2CPP_REGISTER_METHOD(0x016E4F60, app::XmlSchema*, GetChameleonSchema, app::Preprocessor* this_ptr, app::String* target_namespace, app::XmlSchema* schema)
    IL2CPP_REGISTER_METHOD(0x016E51A0, void, SetParent, app::Preprocessor* this_ptr, app::XmlSchemaObject* child, app::XmlSchemaObject* parent)
    IL2CPP_REGISTER_METHOD(0x016E51C0, void, PreprocessAnnotation_1, app::Preprocessor* this_ptr, app::XmlSchemaObject* schema_object)
    IL2CPP_REGISTER_METHOD(0x016E5300, void, PreprocessAnnotation_2, app::Preprocessor* this_ptr, app::XmlSchemaAnnotation* annotation)
} // namespace app::classes::System::Xml::Schema::Preprocessor
