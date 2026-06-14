#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeChaseCameraZoomOffsetAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeChaseCameraZoomOffsetAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeChaseCameraZoomOffsetAction__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ChangeChaseCameraZoomOffsetAction__Fields_DEFINED
struct AnimationCurve;
struct ChangeChaseCameraZoomOffsetAction__Fields {
    struct PerformingAction__Fields _;
    float TargetZoomOffset;
    float Duration;
    struct AnimationCurve* ParameterRemapCurve;
    float m_initialOffset;
    float m_currentTime;
    bool m_active;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeChaseCameraZoomOffsetAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChangeChaseCameraZoomOffsetAction__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_ChangeChaseCameraZoomOffsetAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeChaseCameraZoomOffsetAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChangeChaseCameraZoomOffsetAction__Fields_FWDDECL)
#include <Modloader/app/structs/ChangeChaseCameraZoomOffsetAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeChaseCameraZoomOffsetAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
