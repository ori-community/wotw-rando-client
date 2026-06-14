#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeDistanceGate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeDistanceGate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeDistanceGate__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TimeDistanceGate__Fields_DEFINED
struct __declspec(align(8)) TimeDistanceGate__Fields {
    float m_lastTime;
    float m_timeCooldownOriginal;
    float m_timeCooldown;
    float m_distanceCooldownOriginal;
    float m_distanceCooldown;
    struct Vector3 m_lastPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeDistanceGate__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeDistanceGate__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimeDistanceGate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeDistanceGate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeDistanceGate__Fields_FWDDECL)
#include <Modloader/app/structs/TimeDistanceGate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeDistanceGate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
