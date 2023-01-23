#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebException_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebException_DEFINED)
#include <Modloader/app/structs/WebException__Fields.h>
#if defined(IL2CPP_STRUCT_WebException__Fields_DEFINED)
#define IL2CPP_STRUCT_WebException_DEFINED
struct WebException__Class;
struct WebException {
    struct WebException__Class* klass;
    MonitorData* monitor;
    struct WebException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebException_FWDDECL)
#define IL2CPP_STRUCT_WebException_FWDDECL
#include <Modloader/app/structs/WebException__Class.h>
#endif
#undef IL2CPP_STRUCT_WebException_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebException_DEFINED) && !defined(IL2CPP_STRUCT_WebException_FWDDECL)
#include <Modloader/app/structs/WebException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
