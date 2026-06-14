#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_XsdBuilder__Fields_DEFINED
struct XmlReader;
struct PositionInfo;
struct XsdBuilder_XsdEntry;
struct HWStack;
struct Stack;
struct XmlNameTable;
struct SchemaNames;
struct XmlNamespaceManager;
struct XmlSchema;
struct XmlSchemaObject;
struct XmlSchemaElement;
struct XmlSchemaAny;
struct XmlSchemaAttribute;
struct XmlSchemaAnyAttribute;
struct XmlSchemaComplexType;
struct XmlSchemaSimpleType;
struct XmlSchemaComplexContent;
struct XmlSchemaComplexContentExtension;
struct XmlSchemaComplexContentRestriction;
struct XmlSchemaSimpleContent;
struct XmlSchemaSimpleContentExtension;
struct XmlSchemaSimpleContentRestriction;
struct XmlSchemaSimpleTypeUnion;
struct XmlSchemaSimpleTypeList;
struct XmlSchemaSimpleTypeRestriction;
struct XmlSchemaGroup;
struct XmlSchemaGroupRef;
struct XmlSchemaAll;
struct XmlSchemaChoice;
struct XmlSchemaSequence;
struct XmlSchemaParticle;
struct XmlSchemaAttributeGroup;
struct XmlSchemaAttributeGroupRef;
struct XmlSchemaNotation;
struct XmlSchemaIdentityConstraint;
struct XmlSchemaXPath;
struct XmlSchemaInclude;
struct XmlSchemaImport;
struct XmlSchemaAnnotation;
struct XmlSchemaAppInfo;
struct XmlSchemaDocumentation;
struct XmlSchemaFacet;
struct XmlNode__Array;
struct XmlSchemaRedefine;
struct ValidationEventHandler;
struct ArrayList;
struct Hashtable;
struct __declspec(align(8)) XsdBuilder__Fields {
    struct XmlReader* reader;
    struct PositionInfo* positionInfo;
    struct XsdBuilder_XsdEntry* currentEntry;
    struct XsdBuilder_XsdEntry* nextEntry;
    bool hasChild;
    struct HWStack* stateHistory;
    struct Stack* containerStack;
    struct XmlNameTable* nameTable;
    struct SchemaNames* schemaNames;
    struct XmlNamespaceManager* namespaceManager;
    bool canIncludeImport;
    struct XmlSchema* schema;
    struct XmlSchemaObject* xso;
    struct XmlSchemaElement* element;
    struct XmlSchemaAny* anyElement;
    struct XmlSchemaAttribute* attribute;
    struct XmlSchemaAnyAttribute* anyAttribute;
    struct XmlSchemaComplexType* complexType;
    struct XmlSchemaSimpleType* simpleType;
    struct XmlSchemaComplexContent* complexContent;
    struct XmlSchemaComplexContentExtension* complexContentExtension;
    struct XmlSchemaComplexContentRestriction* complexContentRestriction;
    struct XmlSchemaSimpleContent* simpleContent;
    struct XmlSchemaSimpleContentExtension* simpleContentExtension;
    struct XmlSchemaSimpleContentRestriction* simpleContentRestriction;
    struct XmlSchemaSimpleTypeUnion* simpleTypeUnion;
    struct XmlSchemaSimpleTypeList* simpleTypeList;
    struct XmlSchemaSimpleTypeRestriction* simpleTypeRestriction;
    struct XmlSchemaGroup* group;
    struct XmlSchemaGroupRef* groupRef;
    struct XmlSchemaAll* all;
    struct XmlSchemaChoice* choice;
    struct XmlSchemaSequence* sequence;
    struct XmlSchemaParticle* particle;
    struct XmlSchemaAttributeGroup* attributeGroup;
    struct XmlSchemaAttributeGroupRef* attributeGroupRef;
    struct XmlSchemaNotation* notation;
    struct XmlSchemaIdentityConstraint* identityConstraint;
    struct XmlSchemaXPath* xpath;
    struct XmlSchemaInclude* include;
    struct XmlSchemaImport* import;
    struct XmlSchemaAnnotation* annotation;
    struct XmlSchemaAppInfo* appInfo;
    struct XmlSchemaDocumentation* documentation;
    struct XmlSchemaFacet* facet;
    struct XmlNode__Array* markup;
    struct XmlSchemaRedefine* redefine;
    struct ValidationEventHandler* validationEventHandler;
    struct ArrayList* unhandledAttributes;
    struct Hashtable* namespaces;
};
#endif
#if !defined(IL2CPP_STRUCT_XsdBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_XsdBuilder__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/HWStack.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/PositionInfo.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/Stack.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlNode__Array.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaAll.h>
#include <Modloader/app/structs/XmlSchemaAnnotation.h>
#include <Modloader/app/structs/XmlSchemaAny.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaAppInfo.h>
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroup.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroupRef.h>
#include <Modloader/app/structs/XmlSchemaChoice.h>
#include <Modloader/app/structs/XmlSchemaComplexContent.h>
#include <Modloader/app/structs/XmlSchemaComplexContentExtension.h>
#include <Modloader/app/structs/XmlSchemaComplexContentRestriction.h>
#include <Modloader/app/structs/XmlSchemaComplexType.h>
#include <Modloader/app/structs/XmlSchemaDocumentation.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaFacet.h>
#include <Modloader/app/structs/XmlSchemaGroup.h>
#include <Modloader/app/structs/XmlSchemaGroupRef.h>
#include <Modloader/app/structs/XmlSchemaIdentityConstraint.h>
#include <Modloader/app/structs/XmlSchemaImport.h>
#include <Modloader/app/structs/XmlSchemaInclude.h>
#include <Modloader/app/structs/XmlSchemaNotation.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>
#include <Modloader/app/structs/XmlSchemaRedefine.h>
#include <Modloader/app/structs/XmlSchemaSequence.h>
#include <Modloader/app/structs/XmlSchemaSimpleContent.h>
#include <Modloader/app/structs/XmlSchemaSimpleContentExtension.h>
#include <Modloader/app/structs/XmlSchemaSimpleContentRestriction.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XmlSchemaSimpleTypeList.h>
#include <Modloader/app/structs/XmlSchemaSimpleTypeRestriction.h>
#include <Modloader/app/structs/XmlSchemaSimpleTypeUnion.h>
#include <Modloader/app/structs/XmlSchemaXPath.h>
#include <Modloader/app/structs/XsdBuilder_XsdEntry.h>
#endif
#undef IL2CPP_STRUCT_XsdBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XsdBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/XsdBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
