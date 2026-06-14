#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebRequestModuleElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebRequestModuleElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequestModuleElement_DEFINED)
#define IL2CPP_STRUCT_WebRequestModuleElement_DEFINED
struct WebRequestModuleElement__Class;
struct WebRequestModuleElement {
    struct WebRequestModuleElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WebRequestModuleElement_FWDDECL)
#define IL2CPP_STRUCT_WebRequestModuleElement_FWDDECL
#include <Modloader/app/structs/WebRequestModuleElement__Class.h>
#endif
#undef IL2CPP_STRUCT_WebRequestModuleElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequestModuleElement_DEFINED) && !defined(IL2CPP_STRUCT_WebRequestModuleElement_FWDDECL)
#include <Modloader/app/structs/WebRequestModuleElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebRequestModuleElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
