#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebConnectionData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebConnectionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionData_DEFINED)
#include <Modloader/app/structs/WebConnectionData__Fields.h>
#if defined(IL2CPP_STRUCT_WebConnectionData__Fields_DEFINED)
#define IL2CPP_STRUCT_WebConnectionData_DEFINED
struct WebConnectionData__Class;
struct WebConnectionData {
    struct WebConnectionData__Class* klass;
    MonitorData* monitor;
    struct WebConnectionData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebConnectionData_FWDDECL)
#define IL2CPP_STRUCT_WebConnectionData_FWDDECL
#include <Modloader/app/structs/WebConnectionData__Class.h>
#endif
#undef IL2CPP_STRUCT_WebConnectionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionData_DEFINED) && !defined(IL2CPP_STRUCT_WebConnectionData_FWDDECL)
#include <Modloader/app/structs/WebConnectionData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebConnectionData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
