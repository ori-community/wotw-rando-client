#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Camera_GateFitParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Camera_GateFitParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_Camera_GateFitParameters_DEFINED)
#include <Modloader/app/structs/Camera_GateFitMode__Enum.h>
#if defined(IL2CPP_STRUCT_Camera_GateFitMode__Enum_DEFINED)
#define IL2CPP_STRUCT_Camera_GateFitParameters_DEFINED
struct Camera_GateFitParameters {
    Camera_GateFitMode__Enum _mode_k__BackingField;

    float _aspect_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Camera_GateFitParameters_FWDDECL)
#define IL2CPP_STRUCT_Camera_GateFitParameters_FWDDECL
#endif
#undef IL2CPP_STRUCT_Camera_GateFitParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_Camera_GateFitParameters_DEFINED) && !defined(IL2CPP_STRUCT_Camera_GateFitParameters_FWDDECL)
#include <Modloader/app/structs/Camera_GateFitParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Camera_GateFitParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
