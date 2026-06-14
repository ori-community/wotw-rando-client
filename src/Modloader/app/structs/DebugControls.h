#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugControls_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugControls_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugControls_DEFINED)
#include <Modloader/app/structs/DebugControls__Fields.h>
#if defined(IL2CPP_STRUCT_DebugControls__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugControls_DEFINED
struct DebugControls__Class;
struct DebugControls {
    struct DebugControls__Class* klass;
    MonitorData* monitor;
    struct DebugControls__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugControls_FWDDECL)
#define IL2CPP_STRUCT_DebugControls_FWDDECL
#include <Modloader/app/structs/DebugControls__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugControls_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugControls_DEFINED) && !defined(IL2CPP_STRUCT_DebugControls_FWDDECL)
#include <Modloader/app/structs/DebugControls.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugControls.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
