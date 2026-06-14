#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugRaycastCheck_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugRaycastCheck_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRaycastCheck_DEFINED)
#include <Modloader/app/structs/DebugRaycastCheck__Fields.h>
#if defined(IL2CPP_STRUCT_DebugRaycastCheck__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugRaycastCheck_DEFINED
struct DebugRaycastCheck__Class;
struct DebugRaycastCheck {
    struct DebugRaycastCheck__Class* klass;
    MonitorData* monitor;
    struct DebugRaycastCheck__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugRaycastCheck_FWDDECL)
#define IL2CPP_STRUCT_DebugRaycastCheck_FWDDECL
#include <Modloader/app/structs/DebugRaycastCheck__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugRaycastCheck_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRaycastCheck_DEFINED) && !defined(IL2CPP_STRUCT_DebugRaycastCheck_FWDDECL)
#include <Modloader/app/structs/DebugRaycastCheck.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugRaycastCheck.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
