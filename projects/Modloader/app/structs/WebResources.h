#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebResources_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebResources_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebResources_DEFINED)
#define IL2CPP_STRUCT_WebResources_DEFINED
struct WebResources__Class;
struct WebResources {
    struct WebResources__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WebResources_FWDDECL)
#define IL2CPP_STRUCT_WebResources_FWDDECL
#include <Modloader/app/structs/WebResources__Class.h>
#endif
#undef IL2CPP_STRUCT_WebResources_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebResources_DEFINED) && !defined(IL2CPP_STRUCT_WebResources_FWDDECL)
#include <Modloader/app/structs/WebResources.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebResources.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
