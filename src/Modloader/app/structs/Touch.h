#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Touch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Touch_INITIALIZING
#if !defined(IL2CPP_STRUCT_Touch_DEFINED)
#include <Modloader/app/structs/TouchPhase__Enum.h>
#include <Modloader/app/structs/TouchType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_TouchPhase__Enum_DEFINED) && defined(IL2CPP_STRUCT_TouchType__Enum_DEFINED)
#define IL2CPP_STRUCT_Touch_DEFINED
struct Touch {
    int32_t m_FingerId;
    struct Vector2 m_Position;
    struct Vector2 m_RawPosition;
    struct Vector2 m_PositionDelta;
    float m_TimeDelta;
    int32_t m_TapCount;
    TouchPhase__Enum m_Phase;

    TouchType__Enum m_Type;

    float m_Pressure;
    float m_maximumPossiblePressure;
    float m_Radius;
    float m_RadiusVariance;
    float m_AltitudeAngle;
    float m_AzimuthAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Touch_FWDDECL)
#define IL2CPP_STRUCT_Touch_FWDDECL
#endif
#undef IL2CPP_STRUCT_Touch_INITIALIZING
#if !defined(IL2CPP_STRUCT_Touch_DEFINED) && !defined(IL2CPP_STRUCT_Touch_FWDDECL)
#include <Modloader/app/structs/Touch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Touch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
