#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeeSeinTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeeSeinTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeeSeinTrigger__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Ray_DEFINED)
#define IL2CPP_STRUCT_SeeSeinTrigger__Fields_DEFINED
struct Component_1__Array;
struct Transform;
struct SeeSeinTrigger__Fields {
    struct MonoBehaviour__Fields _;
    float DelayUntilNextTrigger;
    float TriggerDistance;
    float DistanceSmoothFactor;
    struct LayerMask LayerMask;
    float m_time;
    bool m_eventTriggered;
    struct Component_1__Array* m_recievers;
    struct Vector2 RayStartOffset;
    struct Transform* m_transform;
    bool m_canSeeSein;
    struct Ray m_lastRay;
    int32_t m_frame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeeSeinTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeeSeinTrigger__Fields_FWDDECL
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeeSeinTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeeSeinTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeeSeinTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/SeeSeinTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeeSeinTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
