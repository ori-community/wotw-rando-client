#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IXmlSchemaInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IXmlSchemaInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlSchemaInfo_DEFINED)
#define IL2CPP_STRUCT_IXmlSchemaInfo_DEFINED
struct IXmlSchemaInfo__Class;
struct IXmlSchemaInfo {
    struct IXmlSchemaInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IXmlSchemaInfo_FWDDECL)
#define IL2CPP_STRUCT_IXmlSchemaInfo_FWDDECL
#include <Modloader/app/structs/IXmlSchemaInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IXmlSchemaInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlSchemaInfo_DEFINED) && !defined(IL2CPP_STRUCT_IXmlSchemaInfo_FWDDECL)
#include <Modloader/app/structs/IXmlSchemaInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IXmlSchemaInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
