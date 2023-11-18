#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPivotZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPivotZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPivotZone_DEFINED)
#include <Modloader/app/structs/CameraPivotZone__Fields.h>
#if defined(IL2CPP_STRUCT_CameraPivotZone__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraPivotZone_DEFINED
struct CameraPivotZone__Class;
struct CameraPivotZone {
    struct CameraPivotZone__Class* klass;
    MonitorData* monitor;
    struct CameraPivotZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraPivotZone_FWDDECL)
#define IL2CPP_STRUCT_CameraPivotZone_FWDDECL
#include <Modloader/app/structs/CameraPivotZone__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraPivotZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPivotZone_DEFINED) && !defined(IL2CPP_STRUCT_CameraPivotZone_FWDDECL)
#include <Modloader/app/structs/CameraPivotZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPivotZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
