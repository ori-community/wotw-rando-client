#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SchemaCollectionCompiler.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ContentValidator.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/ParticleContentValidator.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaAll.h>
#include <Modloader/app/structs/XmlSchemaAny.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroup.h>
#include <Modloader/app/structs/XmlSchemaChoice.h>
#include <Modloader/app/structs/XmlSchemaComplexContent.h>
#include <Modloader/app/structs/XmlSchemaComplexContentExtension.h>
#include <Modloader/app/structs/XmlSchemaComplexContentRestriction.h>
#include <Modloader/app/structs/XmlSchemaComplexType.h>
#include <Modloader/app/structs/XmlSchemaContentType__Enum.h>
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaGroup.h>
#include <Modloader/app/structs/XmlSchemaGroupBase.h>
#include <Modloader/app/structs/XmlSchemaGroupRef.h>
#include <Modloader/app/structs/XmlSchemaIdentityConstraint.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>
#include <Modloader/app/structs/XmlSchemaSequence.h>
#include <Modloader/app/structs/XmlSchemaSimpleContentExtension.h>
#include <Modloader/app/structs/XmlSchemaSimpleContentRestriction.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XmlSchemaSimpleType__Array.h>
#include <Modloader/app/structs/XmlSchemaSubstitutionGroup.h>
#include <Modloader/app/structs/XmlSchemaSubstitutionGroupV1Compat.h>
#include <Modloader/app/structs/XmlSchemaType.h>

namespace app::classes::System::Xml::Schema::SchemaCollectionCompiler {
    IL2CPP_REGISTER_METHOD(0x016E7DC0, void, ctor, (app::SchemaCollectionCompiler * this_ptr, app::XmlNameTable* name_table, app::ValidationEventHandler* event_handler))
    IL2CPP_REGISTER_METHOD(0x016E8000, bool, Execute, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchema* schema, app::SchemaInfo* schema_info, bool compile_content_model))
    IL2CPP_REGISTER_METHOD(0x016E8060, void, Prepare, (app::SchemaCollectionCompiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016E8490, void, Cleanup_1, (app::SchemaCollectionCompiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016E91E0, void, Cleanup_2, (app::XmlSchema * schema))
    IL2CPP_REGISTER_METHOD(0x016E98B0, void, Compile, (app::SchemaCollectionCompiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016EB590, void, Output, (app::SchemaCollectionCompiler * this_ptr, app::SchemaInfo* schema_info))
    IL2CPP_REGISTER_METHOD(0x016EC410, void, CleanupAttribute, (app::XmlSchemaAttribute * attribute))
    IL2CPP_REGISTER_METHOD(0x016EC450, void, CleanupAttributeGroup, (app::XmlSchemaAttributeGroup * attribute_group))
    IL2CPP_REGISTER_METHOD(0x016EC4A0, void, CleanupComplexType, (app::XmlSchemaComplexType * complex_type))
    IL2CPP_REGISTER_METHOD(0x016EC840, void, CleanupSimpleType, (app::XmlSchemaSimpleType * simple_type))
    IL2CPP_REGISTER_METHOD(0x016EC870, void, CleanupElement, (app::XmlSchemaElement * element))
    IL2CPP_REGISTER_METHOD(0x016ECAA0, void, CleanupAttributes, (app::XmlSchemaObjectCollection * attributes))
    IL2CPP_REGISTER_METHOD(0x016ECBE0, void, CleanupGroup, (app::XmlSchemaGroup * group))
    IL2CPP_REGISTER_METHOD(0x016ECC10, void, CleanupParticle, (app::XmlSchemaParticle * particle))
    IL2CPP_REGISTER_METHOD(0x016ECE80, void, CompileSubstitutionGroup, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaSubstitutionGroupV1Compat* substitution_group))
    IL2CPP_REGISTER_METHOD(0x016ED390, void, CheckSubstitutionGroup, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaSubstitutionGroup* substitution_group))
    IL2CPP_REGISTER_METHOD(0x016ED640, void, CompileGroup, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaGroup* group))
    IL2CPP_REGISTER_METHOD(0x016ED760, void, CompileSimpleType, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaSimpleType* simple_type))
    IL2CPP_REGISTER_METHOD(0x016EDF80, app::XmlSchemaSimpleType__Array*, CompileBaseMemberTypes, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaSimpleType* simple_type))
    IL2CPP_REGISTER_METHOD(0x016EE440, void, CheckUnionType, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaSimpleType* union_member, app::ArrayList* member_type_definitions, app::XmlSchemaSimpleType* parent_type))
    IL2CPP_REGISTER_METHOD(0x016EE5C0, void, CompileComplexType, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* complex_type))
    IL2CPP_REGISTER_METHOD(0x016EEFD0, void, CompileSimpleContentExtension, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaSimpleContentExtension* simple_extension))
    IL2CPP_REGISTER_METHOD(0x016EF240, void, CompileSimpleContentRestriction, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaSimpleContentRestriction* simple_restriction))
    IL2CPP_REGISTER_METHOD(0x016EF660, void, CompileComplexContentExtension, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaComplexContent* complex_content, app::XmlSchemaComplexContentExtension* complex_extension))
    IL2CPP_REGISTER_METHOD(0x016EFB00, void, CompileComplexContentRestriction, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaComplexContent* complex_content, app::XmlSchemaComplexContentRestriction* complex_restriction))
    IL2CPP_REGISTER_METHOD(0x016EFDE0, void, CheckParticleDerivation, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* complex_type))
    IL2CPP_REGISTER_METHOD(0x016EFF20, app::XmlSchemaParticle*, CompileContentTypeParticle, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaParticle* particle, bool substitution))
    IL2CPP_REGISTER_METHOD(0x016F0120, app::XmlSchemaParticle*, CannonicalizeParticle, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaParticle* particle, bool root, bool substitution))
    IL2CPP_REGISTER_METHOD(0x016F0510, app::XmlSchemaParticle*, CannonicalizeElement, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaElement* element, bool substitution))
    IL2CPP_REGISTER_METHOD(0x016F06D0, app::XmlSchemaParticle*, CannonicalizeGroupRef, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaGroupRef* group_ref, bool root, bool substitution))
    IL2CPP_REGISTER_METHOD(0x016F0F40, app::XmlSchemaParticle*, CannonicalizeAll, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaAll* all, bool root, bool substitution))
    IL2CPP_REGISTER_METHOD(0x016F1630, app::XmlSchemaParticle*, CannonicalizeChoice, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaChoice* choice, bool root, bool substitution))
    IL2CPP_REGISTER_METHOD(0x016F1D90, app::XmlSchemaParticle*, CannonicalizeSequence, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaSequence* sequence, bool root, bool substitution))
    IL2CPP_REGISTER_METHOD(0x016F2470, bool, IsValidRestriction, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaParticle* derived_particle, app::XmlSchemaParticle* base_particle))
    IL2CPP_REGISTER_METHOD(0x016F2AF0, bool, IsElementFromElement, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaElement* derived_element, app::XmlSchemaElement* base_element))
    IL2CPP_REGISTER_METHOD(0x016F2C80, bool, IsElementFromAny, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaElement* derived_element, app::XmlSchemaAny* base_any))
    IL2CPP_REGISTER_METHOD(0x016F2D20, bool, IsAnyFromAny, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaAny* derived_any, app::XmlSchemaAny* base_any))
    IL2CPP_REGISTER_METHOD(0x016F2D80, bool, IsGroupBaseFromAny, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaGroupBase* derived_group_base, app::XmlSchemaAny* base_any))
    IL2CPP_REGISTER_METHOD(0x016F30A0, bool, IsElementFromGroupBase, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaElement* derived_element, app::XmlSchemaGroupBase* base_group_base, bool skip_emptable_only))
    IL2CPP_REGISTER_METHOD(0x016F36C0, bool, IsGroupBaseFromGroupBase, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaGroupBase* derived_group_base, app::XmlSchemaGroupBase* base_group_base, bool skip_emptable_only))
    IL2CPP_REGISTER_METHOD(0x016F39E0, bool, IsSequenceFromAll, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaSequence* derived_sequence, app::XmlSchemaAll* base_all))
    IL2CPP_REGISTER_METHOD(0x016F3E20, bool, IsSequenceFromChoice, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaSequence* derived_sequence, app::XmlSchemaChoice* base_choice))
    IL2CPP_REGISTER_METHOD(0x016F4170, void, CalculateSequenceRange, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaSequence* sequence, app::Decimal* min_occurs, app::Decimal* max_occurs))
    IL2CPP_REGISTER_METHOD(0x016F49F0, bool, IsValidOccurrenceRangeRestriction_1, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaParticle* derived_particle, app::XmlSchemaParticle* base_particle))
    IL2CPP_REGISTER_METHOD(0x016F4B40, bool, IsValidOccurrenceRangeRestriction_2, (app::SchemaCollectionCompiler * this_ptr, app::Decimal min_occurs, app::Decimal max_occurs, app::Decimal base_min_occurs, app::Decimal base_max_occurs))
    IL2CPP_REGISTER_METHOD(0x016F4C70, int32_t, GetMappingParticle, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaParticle* particle, app::XmlSchemaObjectCollection* collection))
    IL2CPP_REGISTER_METHOD(0x016F4DE0, bool, IsParticleEmptiable, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x016F4EF0, void, CalculateEffectiveTotalRange, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaParticle* particle, app::Decimal* min_occurs, app::Decimal* max_occurs))
    IL2CPP_REGISTER_METHOD(0x016F5F40, void, PushComplexType, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* complex_type))
    IL2CPP_REGISTER_METHOD(0x016F5F70, app::XmlSchemaContentType__Enum, GetSchemaContentType, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaComplexContent* complex_content, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x016F5FF0, void, CompileAttributeGroup, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaAttributeGroup* attribute_group))
    IL2CPP_REGISTER_METHOD(0x016F6610, void, CompileLocalAttributes, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* base_type, app::XmlSchemaComplexType* derived_type, app::XmlSchemaObjectCollection* attributes, app::XmlSchemaAnyAttribute* any_attribute, app::XmlSchemaDerivationMethod__Enum derived_by))
    IL2CPP_REGISTER_METHOD(0x016F7700, app::XmlSchemaAnyAttribute*, CompileAnyAttributeUnion, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaAnyAttribute* a, app::XmlSchemaAnyAttribute* b))
    IL2CPP_REGISTER_METHOD(0x016F77F0, app::XmlSchemaAnyAttribute*, CompileAnyAttributeIntersection, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaAnyAttribute* a, app::XmlSchemaAnyAttribute* b))
    IL2CPP_REGISTER_METHOD(0x016F78E0, void, CompileAttribute, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaAttribute* xa))
    IL2CPP_REGISTER_METHOD(0x016F83D0, void, CompileIdentityConstraint, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaIdentityConstraint* xi))
    IL2CPP_REGISTER_METHOD(0x016F8AC0, void, CompileElement, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaElement* xe))
    IL2CPP_REGISTER_METHOD(0x016F9660, app::ContentValidator*, CompileComplexContent, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* complex_type))
    IL2CPP_REGISTER_METHOD(0x016FA050, void, BuildParticleContentModel, (app::SchemaCollectionCompiler * this_ptr, app::ParticleContentValidator* content_validator, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x016FA820, void, CompileParticleElements, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x016FABA0, void, CompileCompexTypeElements, (app::SchemaCollectionCompiler * this_ptr, app::XmlSchemaComplexType* complex_type))
    IL2CPP_REGISTER_METHOD(0x016FACC0, app::XmlSchemaSimpleType*, GetSimpleType, (app::SchemaCollectionCompiler * this_ptr, app::XmlQualifiedName* name))
    IL2CPP_REGISTER_METHOD(0x016FAE80, app::XmlSchemaComplexType*, GetComplexType, (app::SchemaCollectionCompiler * this_ptr, app::XmlQualifiedName* name))
    IL2CPP_REGISTER_METHOD(0x016FAF90, app::XmlSchemaType*, GetAnySchemaType, (app::SchemaCollectionCompiler * this_ptr, app::XmlQualifiedName* name))
} // namespace app::classes::System::Xml::Schema::SchemaCollectionCompiler
