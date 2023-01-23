#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaInfo_DEFINED)
#include <Modloader/app/structs/XmlSchemaInfo__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaInfo_DEFINED
struct XmlSchemaInfo__Class;
struct XmlSchemaInfo {
    struct XmlSchemaInfo__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaInfo_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaInfo_FWDDECL
#include <Modloader/app/structs/XmlSchemaInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaInfo_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaInfo_FWDDECL)
#include <Modloader/app/structs/XmlSchemaInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
