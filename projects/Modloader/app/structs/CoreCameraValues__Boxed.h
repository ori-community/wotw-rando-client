#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CoreCameraValues__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CoreCameraValues__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CoreCameraValues__Boxed_DEFINED)
#include <Modloader/app/structs/CoreCameraValues.h>
#if defined(IL2CPP_STRUCT_CoreCameraValues_DEFINED)
#define IL2CPP_STRUCT_CoreCameraValues__Boxed_DEFINED
struct CoreCameraValues__Class;
struct CoreCameraValues__Boxed {
    struct CoreCameraValues__Class* klass;
    MonitorData* monitor;
    struct CoreCameraValues fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CoreCameraValues__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CoreCameraValues__Boxed_FWDDECL
#include <Modloader/app/structs/CoreCameraValues__Class.h>
#endif
#undef IL2CPP_STRUCT_CoreCameraValues__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CoreCameraValues__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CoreCameraValues__Boxed_FWDDECL)
#include <Modloader/app/structs/CoreCameraValues__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CoreCameraValues__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
