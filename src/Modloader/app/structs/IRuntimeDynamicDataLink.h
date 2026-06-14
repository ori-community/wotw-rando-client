#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRuntimeDynamicDataLink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRuntimeDynamicDataLink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRuntimeDynamicDataLink_DEFINED)
#define IL2CPP_STRUCT_IRuntimeDynamicDataLink_DEFINED
struct IRuntimeDynamicDataLink__Class;
struct IRuntimeDynamicDataLink {
    struct IRuntimeDynamicDataLink__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRuntimeDynamicDataLink_FWDDECL)
#define IL2CPP_STRUCT_IRuntimeDynamicDataLink_FWDDECL
#include <Modloader/app/structs/IRuntimeDynamicDataLink__Class.h>
#endif
#undef IL2CPP_STRUCT_IRuntimeDynamicDataLink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRuntimeDynamicDataLink_DEFINED) && !defined(IL2CPP_STRUCT_IRuntimeDynamicDataLink_FWDDECL)
#include <Modloader/app/structs/IRuntimeDynamicDataLink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRuntimeDynamicDataLink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
