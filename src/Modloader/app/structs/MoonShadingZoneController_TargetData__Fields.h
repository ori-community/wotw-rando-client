#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonShadingZoneController_TargetData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonShadingZoneController_TargetData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonShadingZoneController_TargetData__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonShadingZoneController_TargetData__Fields_DEFINED
struct IMoonShadingZoneTarget;
struct IMoonShadingZone;
struct __declspec(align(8)) MoonShadingZoneController_TargetData__Fields {
    struct IMoonShadingZoneTarget* Target;
    struct IMoonShadingZone* Zone;
    float FadeTimer;
    bool WasInside;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonShadingZoneController_TargetData__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonShadingZoneController_TargetData__Fields_FWDDECL
#include <Modloader/app/structs/IMoonShadingZone.h>
#include <Modloader/app/structs/IMoonShadingZoneTarget.h>
#endif
#undef IL2CPP_STRUCT_MoonShadingZoneController_TargetData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonShadingZoneController_TargetData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonShadingZoneController_TargetData__Fields_FWDDECL)
#include <Modloader/app/structs/MoonShadingZoneController_TargetData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonShadingZoneController_TargetData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
