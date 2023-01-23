#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaException__Fields_DEFINED)
#include <Modloader/app/structs/SystemException__Fields.h>
#if defined(IL2CPP_STRUCT_SystemException__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaException__Fields_DEFINED
struct String;
struct String__Array;
struct XmlSchemaObject;
struct XmlSchemaException__Fields {
    struct SystemException__Fields _;
    struct String* res;
    struct String__Array* args;
    struct String* sourceUri;
    int32_t lineNumber;
    int32_t linePosition;
    struct XmlSchemaObject* sourceSchemaObject;
    struct String* message;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaException__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaException__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaException__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
