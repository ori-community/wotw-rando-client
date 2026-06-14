#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder__Fields_DEFINED
struct SchemaInfo;
struct String;
struct XmlReader;
struct PositionInfo;
struct ParticleContentValidator;
struct XdrBuilder_XdrEntry;
struct HWStack;
struct XdrBuilder_ElementContent;
struct XdrBuilder_GroupContent;
struct XdrBuilder_AttributeContent;
struct XdrBuilder_DeclBaseInfo;
struct XmlNameTable;
struct SchemaNames;
struct XmlNamespaceManager;
struct ValidationEventHandler;
struct Hashtable;
struct XmlResolver;
struct __declspec(align(8)) XdrBuilder__Fields {
    struct SchemaInfo* _SchemaInfo;
    struct String* _TargetNamespace;
    struct XmlReader* _reader;
    struct PositionInfo* positionInfo;
    struct ParticleContentValidator* _contentValidator;
    struct XdrBuilder_XdrEntry* _CurState;
    struct XdrBuilder_XdrEntry* _NextState;
    struct HWStack* _StateHistory;
    struct HWStack* _GroupStack;
    struct String* _XdrName;
    struct String* _XdrPrefix;
    struct XdrBuilder_ElementContent* _ElementDef;
    struct XdrBuilder_GroupContent* _GroupDef;
    struct XdrBuilder_AttributeContent* _AttributeDef;
    struct XdrBuilder_DeclBaseInfo* _UndefinedAttributeTypes;
    struct XdrBuilder_DeclBaseInfo* _BaseDecl;
    struct XmlNameTable* _NameTable;
    struct SchemaNames* _SchemaNames;
    struct XmlNamespaceManager* _CurNsMgr;
    struct String* _Text;
    struct ValidationEventHandler* validationEventHandler;
    struct Hashtable* _UndeclaredElements;
    struct XmlResolver* xmlResolver;
};
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder__Fields_FWDDECL
#include <Modloader/app/structs/HWStack.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/ParticleContentValidator.h>
#include <Modloader/app/structs/PositionInfo.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XdrBuilder_AttributeContent.h>
#include <Modloader/app/structs/XdrBuilder_DeclBaseInfo.h>
#include <Modloader/app/structs/XdrBuilder_ElementContent.h>
#include <Modloader/app/structs/XdrBuilder_GroupContent.h>
#include <Modloader/app/structs/XdrBuilder_XdrEntry.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlResolver.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/XdrBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
