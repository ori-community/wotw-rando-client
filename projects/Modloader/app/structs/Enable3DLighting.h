#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Enable3DLighting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Enable3DLighting_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enable3DLighting_DEFINED)
#include <Modloader/app/structs/Enable3DLighting__Fields.h>
#if defined(IL2CPP_STRUCT_Enable3DLighting__Fields_DEFINED)
#define IL2CPP_STRUCT_Enable3DLighting_DEFINED
struct Enable3DLighting__Class;
struct Enable3DLighting {
    struct Enable3DLighting__Class* klass;
    MonitorData* monitor;
    struct Enable3DLighting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Enable3DLighting_FWDDECL)
#define IL2CPP_STRUCT_Enable3DLighting_FWDDECL
#include <Modloader/app/structs/Enable3DLighting__Class.h>
#endif
#undef IL2CPP_STRUCT_Enable3DLighting_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enable3DLighting_DEFINED) && !defined(IL2CPP_STRUCT_Enable3DLighting_FWDDECL)
#include <Modloader/app/structs/Enable3DLighting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Enable3DLighting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
