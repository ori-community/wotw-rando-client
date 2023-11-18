#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SchemaCollectionPreprocessor.h>
#include <Modloader/app/structs/SchemaCollectionPreprocessor_Compositor__Enum.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroup.h>
#include <Modloader/app/structs/XmlSchemaCollection.h>
#include <Modloader/app/structs/XmlSchemaComplexType.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaGroup.h>
#include <Modloader/app/structs/XmlSchemaIdentityConstraint.h>
#include <Modloader/app/structs/XmlSchemaNotation.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>
#include <Modloader/app/structs/XmlSchemaRedefine.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>

namespace app::classes::System::Xml::Schema::SchemaCollectionPreprocessor {
    IL2CPP_REGISTER_METHOD(0x01AA5130, void, ctor, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlNameTable* name_table, app::SchemaNames* schema_names, app::ValidationEventHandler* event_handler))
    IL2CPP_REGISTER_METHOD(0x01AA5140, bool, Execute, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchema* schema, app::String* target_namespace, bool load_externals, app::XmlSchemaCollection* xsc))
    IL2CPP_REGISTER_METHOD(0x01AA54B0, void, Cleanup, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchema* schema))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_XmlResolver, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlResolver* value))
    IL2CPP_REGISTER_METHOD(0x01AA57D0, void, LoadExternals, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchema* schema, app::XmlSchemaCollection* xsc))
    IL2CPP_REGISTER_METHOD(0x01AA6470, void, BuildRefNamespaces, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchema* schema))
    IL2CPP_REGISTER_METHOD(0x01AA67B0, void, Preprocess, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchema* schema, app::String* target_namespace, app::SchemaCollectionPreprocessor_Compositor__Enum compositor))
    IL2CPP_REGISTER_METHOD(0x01AA8270, void, PreprocessRedefine, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaRedefine* redefine))
    IL2CPP_REGISTER_METHOD(0x01AA9230, int32_t, CountGroupSelfReference, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaObjectCollection* items, app::XmlQualifiedName* name))
    IL2CPP_REGISTER_METHOD(0x01AA9530, void, CheckRefinedGroup, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaGroup* group))
    IL2CPP_REGISTER_METHOD(0x01AA9600, void, CheckRefinedAttributeGroup, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaAttributeGroup* attribute_group))
    IL2CPP_REGISTER_METHOD(0x01AA97D0, void, CheckRefinedSimpleType, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaSimpleType* stype))
    IL2CPP_REGISTER_METHOD(0x01AA9930, void, CheckRefinedComplexType, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaComplexType* ctype))
    IL2CPP_REGISTER_METHOD(0x01AA9C80, void, PreprocessAttribute, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaAttribute* attribute))
    IL2CPP_REGISTER_METHOD(0x01AA9EA0, void, PreprocessLocalAttribute, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaAttribute* attribute))
    IL2CPP_REGISTER_METHOD(0x01AAA160, void, PreprocessAttributeContent, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaAttribute* attribute))
    IL2CPP_REGISTER_METHOD(0x01AAA420, void, PreprocessAttributeGroup, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaAttributeGroup* attribute_group))
    IL2CPP_REGISTER_METHOD(0x01AAA610, void, PreprocessElement, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaElement* element))
    IL2CPP_REGISTER_METHOD(0x01AAA920, void, PreprocessLocalElement, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaElement* element))
    IL2CPP_REGISTER_METHOD(0x01AAADD0, void, PreprocessElementContent, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaElement* element))
    IL2CPP_REGISTER_METHOD(0x01AAB210, void, PreprocessIdentityConstraint, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaIdentityConstraint* constraint))
    IL2CPP_REGISTER_METHOD(0x01AAB6E0, void, PreprocessSimpleType, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaSimpleType* simple_type, bool local))
    IL2CPP_REGISTER_METHOD(0x01AABE60, void, PreprocessComplexType, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaComplexType* complex_type, bool local))
    IL2CPP_REGISTER_METHOD(0x01AAC790, void, PreprocessGroup, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaGroup* group))
    IL2CPP_REGISTER_METHOD(0x01AACA00, void, PreprocessNotation, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaNotation* notation))
    IL2CPP_REGISTER_METHOD(0x01AACCC0, void, PreprocessParticle, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x01AAD600, void, PreprocessAttributes, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaObjectCollection* attributes, app::XmlSchemaAnyAttribute* any_attribute, app::XmlSchemaObject* parent))
    IL2CPP_REGISTER_METHOD(0x01AAD8B0, void, ValidateIdAttribute, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaObject* xso))
    IL2CPP_REGISTER_METHOD(0x01AADAF0, void, ValidateNameAttribute, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaObject* xso))
    IL2CPP_REGISTER_METHOD(0x01AADE60, void, ValidateQNameAttribute, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaObject* xso, app::String* attribute_name, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x016E51A0, void, SetParent, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaObject* child, app::XmlSchemaObject* parent))
    IL2CPP_REGISTER_METHOD(0x01AAE010, void, PreprocessAnnotation, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchemaObject* schema_object))
    IL2CPP_REGISTER_METHOD(0x01AAE180, app::Uri*, ResolveSchemaLocationUri, (app::SchemaCollectionPreprocessor * this_ptr, app::XmlSchema* enclosing_schema, app::String* location))
    IL2CPP_REGISTER_METHOD(0x01AAE260, app::Stream*, GetSchemaEntity, (app::SchemaCollectionPreprocessor * this_ptr, app::Uri* ruri))
} // namespace app::classes::System::Xml::Schema::SchemaCollectionPreprocessor
