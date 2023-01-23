#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterCurrentController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterCurrentController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterCurrentController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/WaterCurrentController_State__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_WaterCurrentController_State__Enum_DEFINED)
#define IL2CPP_STRUCT_WaterCurrentController__Fields_DEFINED
struct AnimationCurve;
struct WaterCurrentZone;
struct WaterCurrentController__Fields {
    struct MonoBehaviour__Fields _;
    WaterCurrentController_State__Enum CurrentState;

    float CurrentStateTime;
    struct AnimationCurve* Curve;
    struct AnimationCurve* FadeOutCurve;
    struct WaterCurrentZone* m_lastZone;
    float m_rampUpTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterCurrentController__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterCurrentController__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/WaterCurrentZone.h>
#endif
#undef IL2CPP_STRUCT_WaterCurrentController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterCurrentController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterCurrentController__Fields_FWDDECL)
#include <Modloader/app/structs/WaterCurrentController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterCurrentController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
