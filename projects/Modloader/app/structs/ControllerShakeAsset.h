#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerShakeAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerShakeAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerShakeAsset_DEFINED)
#include <Modloader/app/structs/ControllerShakeAsset__Fields.h>
#if defined(IL2CPP_STRUCT_ControllerShakeAsset__Fields_DEFINED)
#define IL2CPP_STRUCT_ControllerShakeAsset_DEFINED
struct ControllerShakeAsset__Class;
struct ControllerShakeAsset {
    struct ControllerShakeAsset__Class* klass;
    MonitorData* monitor;
    struct ControllerShakeAsset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerShakeAsset_FWDDECL)
#define IL2CPP_STRUCT_ControllerShakeAsset_FWDDECL
#include <Modloader/app/structs/ControllerShakeAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_ControllerShakeAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerShakeAsset_DEFINED) && !defined(IL2CPP_STRUCT_ControllerShakeAsset_FWDDECL)
#include <Modloader/app/structs/ControllerShakeAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerShakeAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
