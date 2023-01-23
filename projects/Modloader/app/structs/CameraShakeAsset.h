#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraShakeAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraShakeAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeAsset_DEFINED)
#include <Modloader/app/structs/CameraShakeAsset__Fields.h>
#if defined(IL2CPP_STRUCT_CameraShakeAsset__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraShakeAsset_DEFINED
struct CameraShakeAsset__Class;
struct CameraShakeAsset {
    struct CameraShakeAsset__Class* klass;
    MonitorData* monitor;
    struct CameraShakeAsset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraShakeAsset_FWDDECL)
#define IL2CPP_STRUCT_CameraShakeAsset_FWDDECL
#include <Modloader/app/structs/CameraShakeAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraShakeAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeAsset_DEFINED) && !defined(IL2CPP_STRUCT_CameraShakeAsset_FWDDECL)
#include <Modloader/app/structs/CameraShakeAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraShakeAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
