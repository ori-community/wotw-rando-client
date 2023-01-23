#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraAdditiveSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraAdditiveSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraAdditiveSettings_DEFINED)
#include <Modloader/app/structs/CameraAdditiveSettings__Fields.h>
#if defined(IL2CPP_STRUCT_CameraAdditiveSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraAdditiveSettings_DEFINED
struct CameraAdditiveSettings__Class;
struct CameraAdditiveSettings {
    struct CameraAdditiveSettings__Class* klass;
    MonitorData* monitor;
    struct CameraAdditiveSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraAdditiveSettings_FWDDECL)
#define IL2CPP_STRUCT_CameraAdditiveSettings_FWDDECL
#include <Modloader/app/structs/CameraAdditiveSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraAdditiveSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraAdditiveSettings_DEFINED) && !defined(IL2CPP_STRUCT_CameraAdditiveSettings_FWDDECL)
#include <Modloader/app/structs/CameraAdditiveSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraAdditiveSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
