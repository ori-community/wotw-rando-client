#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DriveNotFoundException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DriveNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DriveNotFoundException_DEFINED)
#include <Modloader/app/structs/DriveNotFoundException__Fields.h>
#if defined(IL2CPP_STRUCT_DriveNotFoundException__Fields_DEFINED)
#define IL2CPP_STRUCT_DriveNotFoundException_DEFINED
struct DriveNotFoundException__Class;
struct DriveNotFoundException {
    struct DriveNotFoundException__Class* klass;
    MonitorData* monitor;
    struct DriveNotFoundException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DriveNotFoundException_FWDDECL)
#define IL2CPP_STRUCT_DriveNotFoundException_FWDDECL
#include <Modloader/app/structs/DriveNotFoundException__Class.h>
#endif
#undef IL2CPP_STRUCT_DriveNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DriveNotFoundException_DEFINED) && !defined(IL2CPP_STRUCT_DriveNotFoundException_FWDDECL)
#include <Modloader/app/structs/DriveNotFoundException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DriveNotFoundException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
