#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BypassElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BypassElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_BypassElement_DEFINED)
#define IL2CPP_STRUCT_BypassElement_DEFINED
struct BypassElement__Class;
struct BypassElement {
    struct BypassElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BypassElement_FWDDECL)
#define IL2CPP_STRUCT_BypassElement_FWDDECL
#include <Modloader/app/structs/BypassElement__Class.h>
#endif
#undef IL2CPP_STRUCT_BypassElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_BypassElement_DEFINED) && !defined(IL2CPP_STRUCT_BypassElement_FWDDECL)
#include <Modloader/app/structs/BypassElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BypassElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
