#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteropHelp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteropHelp_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteropHelp_DEFINED)
#define IL2CPP_STRUCT_InteropHelp_DEFINED
struct InteropHelp__Class;
struct InteropHelp {
    struct InteropHelp__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_InteropHelp_FWDDECL)
#define IL2CPP_STRUCT_InteropHelp_FWDDECL
#include <Modloader/app/structs/InteropHelp__Class.h>
#endif
#undef IL2CPP_STRUCT_InteropHelp_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteropHelp_DEFINED) && !defined(IL2CPP_STRUCT_InteropHelp_FWDDECL)
#include <Modloader/app/structs/InteropHelp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteropHelp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
