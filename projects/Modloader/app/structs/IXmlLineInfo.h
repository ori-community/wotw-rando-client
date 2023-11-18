#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IXmlLineInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IXmlLineInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlLineInfo_DEFINED)
#define IL2CPP_STRUCT_IXmlLineInfo_DEFINED
struct IXmlLineInfo__Class;
struct IXmlLineInfo {
    struct IXmlLineInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IXmlLineInfo_FWDDECL)
#define IL2CPP_STRUCT_IXmlLineInfo_FWDDECL
#include <Modloader/app/structs/IXmlLineInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IXmlLineInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlLineInfo_DEFINED) && !defined(IL2CPP_STRUCT_IXmlLineInfo_FWDDECL)
#include <Modloader/app/structs/IXmlLineInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IXmlLineInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
