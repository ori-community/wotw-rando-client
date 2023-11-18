#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseValidator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseValidator__Fields_DEFINED
struct XmlSchemaCollection;
struct IValidationEventHandling;
struct XmlNameTable;
struct SchemaNames;
struct PositionInfo;
struct XmlResolver;
struct Uri;
struct SchemaInfo;
struct XmlValidatingReaderImpl;
struct XmlQualifiedName;
struct ValidationState;
struct StringBuilder;
struct String;
struct __declspec(align(8)) BaseValidator__Fields {
    struct XmlSchemaCollection* schemaCollection;
    struct IValidationEventHandling* eventHandling;
    struct XmlNameTable* nameTable;
    struct SchemaNames* schemaNames;
    struct PositionInfo* positionInfo;
    struct XmlResolver* xmlResolver;
    struct Uri* baseUri;
    struct SchemaInfo* schemaInfo;
    struct XmlValidatingReaderImpl* reader;
    struct XmlQualifiedName* elementName;
    struct ValidationState* context;
    struct StringBuilder* textValue;
    struct String* textString;
    bool hasSibling;
    bool checkDatatype;
};
#endif
#if !defined(IL2CPP_STRUCT_BaseValidator__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseValidator__Fields_FWDDECL
#include <Modloader/app/structs/IValidationEventHandling.h>
#include <Modloader/app/structs/PositionInfo.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/ValidationState.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchemaCollection.h>
#include <Modloader/app/structs/XmlValidatingReaderImpl.h>
#endif
#undef IL2CPP_STRUCT_BaseValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseValidator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseValidator__Fields_FWDDECL)
#include <Modloader/app/structs/BaseValidator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseValidator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
