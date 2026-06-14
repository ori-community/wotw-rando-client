#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebClientImpl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebClientImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClientImpl_DEFINED)
#include <Modloader/app/structs/WebClientImpl__Fields.h>
#if defined(IL2CPP_STRUCT_WebClientImpl__Fields_DEFINED)
#define IL2CPP_STRUCT_WebClientImpl_DEFINED
struct WebClientImpl__Class;
struct WebClientImpl {
    struct WebClientImpl__Class* klass;
    MonitorData* monitor;
    struct WebClientImpl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebClientImpl_FWDDECL)
#define IL2CPP_STRUCT_WebClientImpl_FWDDECL
#include <Modloader/app/structs/WebClientImpl__Class.h>
#endif
#undef IL2CPP_STRUCT_WebClientImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClientImpl_DEFINED) && !defined(IL2CPP_STRUCT_WebClientImpl_FWDDECL)
#include <Modloader/app/structs/WebClientImpl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebClientImpl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
