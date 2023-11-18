#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathNodePageInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathNodePageInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodePageInfo_DEFINED)
#include <Modloader/app/structs/XPathNodePageInfo__Fields.h>
#if defined(IL2CPP_STRUCT_XPathNodePageInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_XPathNodePageInfo_DEFINED
struct XPathNodePageInfo__Class;
struct XPathNodePageInfo {
    struct XPathNodePageInfo__Class* klass;
    MonitorData* monitor;
    struct XPathNodePageInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XPathNodePageInfo_FWDDECL)
#define IL2CPP_STRUCT_XPathNodePageInfo_FWDDECL
#include <Modloader/app/structs/XPathNodePageInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_XPathNodePageInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodePageInfo_DEFINED) && !defined(IL2CPP_STRUCT_XPathNodePageInfo_FWDDECL)
#include <Modloader/app/structs/XPathNodePageInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathNodePageInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
