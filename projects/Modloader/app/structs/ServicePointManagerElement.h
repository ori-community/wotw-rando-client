#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServicePointManagerElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServicePointManagerElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePointManagerElement_DEFINED)
#define IL2CPP_STRUCT_ServicePointManagerElement_DEFINED
struct ServicePointManagerElement__Class;
struct ServicePointManagerElement {
    struct ServicePointManagerElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ServicePointManagerElement_FWDDECL)
#define IL2CPP_STRUCT_ServicePointManagerElement_FWDDECL
#include <Modloader/app/structs/ServicePointManagerElement__Class.h>
#endif
#undef IL2CPP_STRUCT_ServicePointManagerElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePointManagerElement_DEFINED) && !defined(IL2CPP_STRUCT_ServicePointManagerElement_FWDDECL)
#include <Modloader/app/structs/ServicePointManagerElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServicePointManagerElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
