#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsLimitTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsLimitTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsLimitTest__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsLimitTest__Fields_DEFINED
struct Single__Array;
struct PhysicsLimitTest__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_currentOption;
    struct Single__Array* m_timeSamples;
    int32_t m_timeSampleIndex;
    int32_t m_totalFrames;
    int32_t m_fixedUpdates;
    int32_t m_frames;
    float m_time;
    bool m_synced;
    float m_lastRealTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsLimitTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsLimitTest__Fields_FWDDECL
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_PhysicsLimitTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsLimitTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsLimitTest__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicsLimitTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsLimitTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
