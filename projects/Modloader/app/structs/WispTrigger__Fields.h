#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WispTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WispTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispTrigger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WispTrigger__Fields_DEFINED
struct MessageProvider;
struct MoonReference_1_IUberState_;
struct DynamicDataResolver;
struct Transform;
struct MoonAnimator;
struct MoonTimeline;
struct WispTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider* m_message;
    struct Vector3 Offset;
    struct MoonReference_1_IUberState_* m_state;
    struct DynamicDataResolver* m_dataResolver;
    struct Transform* WispObject;
    struct Transform* FollowedTransform;
    float Speed;
    struct MoonAnimator* m_wisp;
    struct MoonTimeline* m_timeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WispTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_WispTrigger__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonReference_1_IUberState_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_WispTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WispTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/WispTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WispTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
