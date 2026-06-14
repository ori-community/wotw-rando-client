#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebExceptionMapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebExceptionMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebExceptionMapping_DEFINED)
#define IL2CPP_STRUCT_WebExceptionMapping_DEFINED
struct WebExceptionMapping__Class;
struct WebExceptionMapping {
    struct WebExceptionMapping__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WebExceptionMapping_FWDDECL)
#define IL2CPP_STRUCT_WebExceptionMapping_FWDDECL
#include <Modloader/app/structs/WebExceptionMapping__Class.h>
#endif
#undef IL2CPP_STRUCT_WebExceptionMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebExceptionMapping_DEFINED) && !defined(IL2CPP_STRUCT_WebExceptionMapping_FWDDECL)
#include <Modloader/app/structs/WebExceptionMapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebExceptionMapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
