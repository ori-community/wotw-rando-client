#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Compiler.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaCompilationSettings.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroup.h>
#include <Modloader/app/structs/XmlSchemaComplexType.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaGroup.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>
#include <Modloader/app/structs/XmlSchemaSubstitutionGroup.h>
#include <Modloader/app/structs/XmlSchemaSimpleType__Array.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/XmlSchemaSimpleContentExtension.h>
#include <Modloader/app/structs/XmlSchemaSimpleContentRestriction.h>
#include <Modloader/app/structs/XmlSchemaComplexContent.h>
#include <Modloader/app/structs/XmlSchemaComplexContentExtension.h>
#include <Modloader/app/structs/XmlSchemaComplexContentRestriction.h>
#include <Modloader/app/structs/XmlSchemaGroupRef.h>
#include <Modloader/app/structs/XmlSchemaAll.h>
#include <Modloader/app/structs/XmlSchemaChoice.h>
#include <Modloader/app/structs/XmlSchemaSequence.h>
#include <Modloader/app/structs/XmlSchemaAny.h>
#include <Modloader/app/structs/XmlSchemaGroupBase.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/XmlSchemaContentType__Enum.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/XmlSchemaIdentityConstraint.h>
#include <Modloader/app/structs/ContentValidator.h>
#include <Modloader/app/structs/ParticleContentValidator.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlSchemaAnnotated.h>
#include <Modloader/app/structs/SchemaDeclBase.h>

namespace app::classes::System::Xml::Schema::Compiler {
    IL2CPP_REGISTER_METHOD(0x019AA4E0, void, ctor, (app::Compiler * this_ptr, app::XmlNameTable* name_table, app::ValidationEventHandler* event_handler, app::XmlSchema* schema_for_schema, app::XmlSchemaCompilationSettings* compilation_settings))
    IL2CPP_REGISTER_METHOD(0x019AAE40, bool, Execute, (app::Compiler * this_ptr, app::XmlSchemaSet* schema_set, app::SchemaInfo* schema_compiled_info))
    IL2CPP_REGISTER_METHOD(0x019AAED0, void, Prepare, (app::Compiler * this_ptr, app::XmlSchema* schema, bool cleanup))
    IL2CPP_REGISTER_METHOD(0x019AC210, void, UpdateSForSSimpleTypes, (app::Compiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019AC410, void, Output, (app::Compiler * this_ptr, app::SchemaInfo* schema_info))
    IL2CPP_REGISTER_METHOD(0x019AD320, void, ImportAllCompiledSchemas, (app::Compiler * this_ptr, app::XmlSchemaSet* schema_set))
    IL2CPP_REGISTER_METHOD(0x019AD490, bool, Compile, (app::Compiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019AEFC0, void, CleanupAttribute, (app::Compiler * this_ptr, app::XmlSchemaAttribute* attribute))
    IL2CPP_REGISTER_METHOD(0x019AF000, void, CleanupAttributeGroup, (app::Compiler * this_ptr, app::XmlSchemaAttributeGroup* attribute_group))
    IL2CPP_REGISTER_METHOD(0x019AF080, void, CleanupComplexType, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type))
    IL2CPP_REGISTER_METHOD(0x019AF470, void, CleanupSimpleType, (app::Compiler * this_ptr, app::XmlSchemaSimpleType* simple_type))
    IL2CPP_REGISTER_METHOD(0x019AF580, void, CleanupElement, (app::Compiler * this_ptr, app::XmlSchemaElement* element))
    IL2CPP_REGISTER_METHOD(0x019AF7C0, void, CleanupAttributes, (app::Compiler * this_ptr, app::XmlSchemaObjectCollection* attributes))
    IL2CPP_REGISTER_METHOD(0x019AF900, void, CleanupGroup, (app::Compiler * this_ptr, app::XmlSchemaGroup* group))
    IL2CPP_REGISTER_METHOD(0x019AF960, void, CleanupParticle, (app::Compiler * this_ptr, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x019AFB90, void, ProcessSubstitutionGroups, (app::Compiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019B0300, void, CompileSubstitutionGroup, (app::Compiler * this_ptr, app::XmlSchemaSubstitutionGroup* substitution_group))
    IL2CPP_REGISTER_METHOD(0x019B08D0, void, RecursivelyCheckRedefinedGroups, (app::Compiler * this_ptr, app::XmlSchemaGroup* redefined_group, app::XmlSchemaGroup* base_group))
    IL2CPP_REGISTER_METHOD(0x019B0A80, void, RecursivelyCheckRedefinedAttributeGroups, (app::Compiler * this_ptr, app::XmlSchemaAttributeGroup* attribute_group, app::XmlSchemaAttributeGroup* base_attribute_group))
    IL2CPP_REGISTER_METHOD(0x019B0B10, void, CompileGroup, (app::Compiler * this_ptr, app::XmlSchemaGroup* group))
    IL2CPP_REGISTER_METHOD(0x019B0C20, void, CompileSimpleType, (app::Compiler * this_ptr, app::XmlSchemaSimpleType* simple_type))
    IL2CPP_REGISTER_METHODINFO(0x0477A188, Compiler_CompileSimpleType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019B1470, app::XmlSchemaSimpleType__Array*, CompileBaseMemberTypes, (app::Compiler * this_ptr, app::XmlSchemaSimpleType* simple_type))
    IL2CPP_REGISTER_METHODINFO(0x04710518, Compiler_CompileBaseMemberTypes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019B1930, void, CheckUnionType, (app::Compiler * this_ptr, app::XmlSchemaSimpleType* union_member, app::ArrayList* member_type_definitions, app::XmlSchemaSimpleType* parent_type))
    IL2CPP_REGISTER_METHOD(0x019B1AB0, void, CompileComplexType, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type))
    IL2CPP_REGISTER_METHOD(0x019B22A0, void, CompileSimpleContentExtension, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaSimpleContentExtension* simple_extension))
    IL2CPP_REGISTER_METHOD(0x019B2510, void, CompileSimpleContentRestriction, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaSimpleContentRestriction* simple_restriction))
    IL2CPP_REGISTER_METHOD(0x019B2930, void, CompileComplexContentExtension, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaComplexContent* complex_content, app::XmlSchemaComplexContentExtension* complex_extension))
    IL2CPP_REGISTER_METHOD(0x019B2D80, void, CompileComplexContentRestriction, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaComplexContent* complex_content, app::XmlSchemaComplexContentRestriction* complex_restriction))
    IL2CPP_REGISTER_METHOD(0x019B3050, void, CheckParticleDerivation_1, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type))
    IL2CPP_REGISTER_METHOD(0x019B3430, void, CheckParticleDerivation_2, (app::Compiler * this_ptr, app::XmlSchemaParticle* derived_particle, app::XmlSchemaParticle* base_particle))
    IL2CPP_REGISTER_METHOD(0x019B3530, app::XmlSchemaParticle*, CompileContentTypeParticle, (app::Compiler * this_ptr, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x019B3720, app::XmlSchemaParticle*, CannonicalizeParticle, (app::Compiler * this_ptr, app::XmlSchemaParticle* particle, bool root))
    IL2CPP_REGISTER_METHOD(0x019B3AA0, app::XmlSchemaParticle*, CannonicalizeElement, (app::Compiler * this_ptr, app::XmlSchemaElement* element))
    IL2CPP_REGISTER_METHOD(0x019B3E40, app::XmlSchemaParticle*, CannonicalizeGroupRef, (app::Compiler * this_ptr, app::XmlSchemaGroupRef* group_ref, bool root))
    IL2CPP_REGISTER_METHOD(0x019B4670, app::XmlSchemaParticle*, CannonicalizeAll, (app::Compiler * this_ptr, app::XmlSchemaAll* all, bool root))
    IL2CPP_REGISTER_METHOD(0x019B4A60, app::XmlSchemaParticle*, CannonicalizeChoice, (app::Compiler * this_ptr, app::XmlSchemaChoice* choice, bool root))
    IL2CPP_REGISTER_METHOD(0x019B51E0, app::XmlSchemaParticle*, CannonicalizeSequence, (app::Compiler * this_ptr, app::XmlSchemaSequence* sequence, bool root))
    IL2CPP_REGISTER_METHOD(0x019B58C0, app::XmlSchemaParticle*, CannonicalizePointlessRoot, (app::Compiler * this_ptr, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x019B5CD0, bool, IsValidRestriction, (app::Compiler * this_ptr, app::XmlSchemaParticle* derived_particle, app::XmlSchemaParticle* base_particle))
    IL2CPP_REGISTER_METHOD(0x019B66C0, bool, IsElementFromElement, (app::Compiler * this_ptr, app::XmlSchemaElement* derived_element, app::XmlSchemaElement* base_element))
    IL2CPP_REGISTER_METHOD(0x019B6990, bool, IsElementFromAny, (app::Compiler * this_ptr, app::XmlSchemaElement* derived_element, app::XmlSchemaAny* base_any))
    IL2CPP_REGISTER_METHOD(0x019B6C00, bool, IsAnyFromAny, (app::Compiler * this_ptr, app::XmlSchemaAny* derived_any, app::XmlSchemaAny* base_any))
    IL2CPP_REGISTER_METHOD(0x019B6D30, bool, IsGroupBaseFromAny, (app::Compiler * this_ptr, app::XmlSchemaGroupBase* derived_group_base, app::XmlSchemaAny* base_any))
    IL2CPP_REGISTER_METHOD(0x019B7270, bool, IsElementFromGroupBase, (app::Compiler * this_ptr, app::XmlSchemaElement* derived_element, app::XmlSchemaGroupBase* base_group_base))
    IL2CPP_REGISTER_METHOD(0x019B7F70, bool, IsChoiceFromChoiceSubstGroup, (app::Compiler * this_ptr, app::XmlSchemaChoice* derived_choice, app::XmlSchemaChoice* base_choice))
    IL2CPP_REGISTER_METHOD(0x019B8120, bool, IsGroupBaseFromGroupBase, (app::Compiler * this_ptr, app::XmlSchemaGroupBase* derived_group_base, app::XmlSchemaGroupBase* base_group_base, bool skip_emptable_only))
    IL2CPP_REGISTER_METHOD(0x019B8460, bool, IsSequenceFromAll, (app::Compiler * this_ptr, app::XmlSchemaSequence* derived_sequence, app::XmlSchemaAll* base_all))
    IL2CPP_REGISTER_METHOD(0x019B88A0, bool, IsSequenceFromChoice, (app::Compiler * this_ptr, app::XmlSchemaSequence* derived_sequence, app::XmlSchemaChoice* base_choice))
    IL2CPP_REGISTER_METHOD(0x019B8F70, bool, IsValidOccurrenceRangeRestriction_1, (app::Compiler * this_ptr, app::XmlSchemaParticle* derived_particle, app::XmlSchemaParticle* base_particle))
    IL2CPP_REGISTER_METHOD(0x019B90C0, bool, IsValidOccurrenceRangeRestriction_2, (app::Compiler * this_ptr, app::Decimal min_occurs, app::Decimal max_occurs, app::Decimal base_min_occurs, app::Decimal base_max_occurs))
    IL2CPP_REGISTER_METHOD(0x019B91F0, int32_t, GetMappingParticle, (app::Compiler * this_ptr, app::XmlSchemaParticle* particle, app::XmlSchemaObjectCollection* collection))
    IL2CPP_REGISTER_METHOD(0x019B9360, bool, IsParticleEmptiable, (app::Compiler * this_ptr, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x019B9470, void, CalculateEffectiveTotalRange, (app::Compiler * this_ptr, app::XmlSchemaParticle* particle, app::Decimal* min_occurs, app::Decimal* max_occurs))
    IL2CPP_REGISTER_METHOD(0x019BA450, void, PushComplexType, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type))
    IL2CPP_REGISTER_METHOD(0x016F5F70, app::XmlSchemaContentType__Enum, GetSchemaContentType, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaComplexContent* complex_content, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x019BA480, void, CompileAttributeGroup, (app::Compiler * this_ptr, app::XmlSchemaAttributeGroup* attribute_group))
    IL2CPP_REGISTER_METHOD(0x019BAB00, void, CompileLocalAttributes, (app::Compiler * this_ptr, app::XmlSchemaComplexType* base_type, app::XmlSchemaComplexType* derived_type, app::XmlSchemaObjectCollection* attributes, app::XmlSchemaAnyAttribute* any_attribute, app::XmlSchemaDerivationMethod__Enum derived_by))
    IL2CPP_REGISTER_METHOD(0x019BBC50, void, CheckAtrributeGroupRestriction, (app::Compiler * this_ptr, app::XmlSchemaAttributeGroup* base_attribute_group, app::XmlSchemaAttributeGroup* derived_attribute_group))
    IL2CPP_REGISTER_METHOD(0x019BC460, bool, IsProcessContentsRestricted, (app::Compiler * this_ptr, app::XmlSchemaComplexType* base_type, app::XmlSchemaAnyAttribute* derived_attribute_wildcard, app::XmlSchemaAnyAttribute* base_attribute_wildcard))
    IL2CPP_REGISTER_METHOD(0x019BC560, app::XmlSchemaAnyAttribute*, CompileAnyAttributeUnion, (app::Compiler * this_ptr, app::XmlSchemaAnyAttribute* a, app::XmlSchemaAnyAttribute* b))
    IL2CPP_REGISTER_METHOD(0x019BC650, app::XmlSchemaAnyAttribute*, CompileAnyAttributeIntersection, (app::Compiler * this_ptr, app::XmlSchemaAnyAttribute* a, app::XmlSchemaAnyAttribute* b))
    IL2CPP_REGISTER_METHOD(0x019BC740, void, CompileAttribute, (app::Compiler * this_ptr, app::XmlSchemaAttribute* xa))
    IL2CPP_REGISTER_METHODINFO(0x0476E850, Compiler_CompileAttribute__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019BCF80, void, SetDefaultFixed, (app::Compiler * this_ptr, app::XmlSchemaAttribute* xa, app::SchemaAttDef* decl))
    IL2CPP_REGISTER_METHOD(0x019BD220, void, CompileIdentityConstraint, (app::Compiler * this_ptr, app::XmlSchemaIdentityConstraint* xi))
    IL2CPP_REGISTER_METHODINFO(0x0477B4E0, Compiler_CompileIdentityConstraint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019BD900, void, CompileElement, (app::Compiler * this_ptr, app::XmlSchemaElement* xe))
    IL2CPP_REGISTER_METHODINFO(0x047295B0, Compiler_CompileElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019BE5D0, app::ContentValidator*, CompileComplexContent, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type))
    IL2CPP_REGISTER_METHOD(0x019BEFD0, bool, BuildParticleContentModel, (app::Compiler * this_ptr, app::ParticleContentValidator* content_validator, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x019BF760, void, CompileParticleElements_1, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x019BFAE0, void, CompileParticleElements_2, (app::Compiler * this_ptr, app::XmlSchemaParticle* particle))
    IL2CPP_REGISTER_METHOD(0x019BFD70, void, CompileComplexTypeElements, (app::Compiler * this_ptr, app::XmlSchemaComplexType* complex_type))
    IL2CPP_REGISTER_METHOD(0x019BFEF0, app::XmlSchemaSimpleType*, GetSimpleType, (app::Compiler * this_ptr, app::XmlQualifiedName* name))
    IL2CPP_REGISTER_METHOD(0x019C0020, app::XmlSchemaComplexType*, GetComplexType, (app::Compiler * this_ptr, app::XmlQualifiedName* name))
    IL2CPP_REGISTER_METHOD(0x019C0120, app::XmlSchemaType*, GetAnySchemaType, (app::Compiler * this_ptr, app::XmlQualifiedName* name))
    IL2CPP_REGISTER_METHOD(0x019C0340, void, CopyPosition, (app::Compiler * this_ptr, app::XmlSchemaAnnotated* to, app::XmlSchemaAnnotated* from, bool copy_parent))
    IL2CPP_REGISTER_METHOD(0x019C03C0, bool, IsFixedEqual, (app::Compiler * this_ptr, app::SchemaDeclBase* base_decl, app::SchemaDeclBase* derived_decl))
} // namespace app::classes::System::Xml::Schema::Compiler
