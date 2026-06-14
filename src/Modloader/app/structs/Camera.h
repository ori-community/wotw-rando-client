#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Camera_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Camera_INITIALIZING
#if !defined(IL2CPP_STRUCT_Camera_DEFINED)
#include <Modloader/app/structs/Camera__Fields.h>
#if defined(IL2CPP_STRUCT_Camera__Fields_DEFINED)
#define IL2CPP_STRUCT_Camera_DEFINED
struct Camera__Class;
struct Camera {
    struct Camera__Class* klass;
    MonitorData* monitor;
    struct Camera__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Camera_FWDDECL)
#define IL2CPP_STRUCT_Camera_FWDDECL
#include <Modloader/app/structs/Camera__Class.h>
#endif
#undef IL2CPP_STRUCT_Camera_INITIALIZING
#if !defined(IL2CPP_STRUCT_Camera_DEFINED) && !defined(IL2CPP_STRUCT_Camera_FWDDECL)
#include <Modloader/app/structs/Camera.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Camera.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
