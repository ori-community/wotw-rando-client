#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAppInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAppInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAppInfo_DEFINED)
#include <Modloader/app/structs/XmlSchemaAppInfo__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAppInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAppInfo_DEFINED
struct XmlSchemaAppInfo__Class;
struct XmlSchemaAppInfo {
    struct XmlSchemaAppInfo__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaAppInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAppInfo_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAppInfo_FWDDECL
#include <Modloader/app/structs/XmlSchemaAppInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAppInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAppInfo_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAppInfo_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAppInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAppInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
