#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Enable2DLighting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Enable2DLighting_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enable2DLighting_DEFINED)
#include <Modloader/app/structs/Enable2DLighting__Fields.h>
#if defined(IL2CPP_STRUCT_Enable2DLighting__Fields_DEFINED)
#define IL2CPP_STRUCT_Enable2DLighting_DEFINED
struct Enable2DLighting__Class;
struct Enable2DLighting {
    struct Enable2DLighting__Class* klass;
    MonitorData* monitor;
    struct Enable2DLighting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Enable2DLighting_FWDDECL)
#define IL2CPP_STRUCT_Enable2DLighting_FWDDECL
#include <Modloader/app/structs/Enable2DLighting__Class.h>
#endif
#undef IL2CPP_STRUCT_Enable2DLighting_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enable2DLighting_DEFINED) && !defined(IL2CPP_STRUCT_Enable2DLighting_FWDDECL)
#include <Modloader/app/structs/Enable2DLighting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Enable2DLighting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
