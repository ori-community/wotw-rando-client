#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraShake_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraShake_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShake_DEFINED)
#include <Modloader/app/structs/CameraShake__Fields.h>
#if defined(IL2CPP_STRUCT_CameraShake__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraShake_DEFINED
struct CameraShake__Class;
struct CameraShake {
    struct CameraShake__Class* klass;
    MonitorData* monitor;
    struct CameraShake__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraShake_FWDDECL)
#define IL2CPP_STRUCT_CameraShake_FWDDECL
#include <Modloader/app/structs/CameraShake__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraShake_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShake_DEFINED) && !defined(IL2CPP_STRUCT_CameraShake_FWDDECL)
#include <Modloader/app/structs/CameraShake.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraShake.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
