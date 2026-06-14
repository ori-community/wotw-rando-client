#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Gizmos_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Gizmos_INITIALIZING
#if !defined(IL2CPP_STRUCT_Gizmos_DEFINED)
#define IL2CPP_STRUCT_Gizmos_DEFINED
struct Gizmos__Class;
struct Gizmos {
    struct Gizmos__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Gizmos_FWDDECL)
#define IL2CPP_STRUCT_Gizmos_FWDDECL
#include <Modloader/app/structs/Gizmos__Class.h>
#endif
#undef IL2CPP_STRUCT_Gizmos_INITIALIZING
#if !defined(IL2CPP_STRUCT_Gizmos_DEFINED) && !defined(IL2CPP_STRUCT_Gizmos_FWDDECL)
#include <Modloader/app/structs/Gizmos.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Gizmos.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
