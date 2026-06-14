#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathParser_ParamInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathParser_ParamInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathParser_ParamInfo_DEFINED)
#include <Modloader/app/structs/XPathParser_ParamInfo__Fields.h>
#if defined(IL2CPP_STRUCT_XPathParser_ParamInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_XPathParser_ParamInfo_DEFINED
struct XPathParser_ParamInfo__Class;
struct XPathParser_ParamInfo {
    struct XPathParser_ParamInfo__Class* klass;
    MonitorData* monitor;
    struct XPathParser_ParamInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XPathParser_ParamInfo_FWDDECL)
#define IL2CPP_STRUCT_XPathParser_ParamInfo_FWDDECL
#include <Modloader/app/structs/XPathParser_ParamInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_XPathParser_ParamInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathParser_ParamInfo_DEFINED) && !defined(IL2CPP_STRUCT_XPathParser_ParamInfo_FWDDECL)
#include <Modloader/app/structs/XPathParser_ParamInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathParser_ParamInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
