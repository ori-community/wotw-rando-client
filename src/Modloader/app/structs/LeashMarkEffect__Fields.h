#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeashMarkEffect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeashMarkEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashMarkEffect__Fields_DEFINED)
#include <Modloader/app/structs/LeashMarkEffect_State__Enum.h>
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_LeashMarkEffect_State__Enum_DEFINED)
#define IL2CPP_STRUCT_LeashMarkEffect__Fields_DEFINED
struct MoonTimeline;
struct Transform;
struct IEnumerator;
struct LeashMarkEffect__Fields {
    struct Suspendable__Fields _;
    struct MoonTimeline* Appearing;
    struct MoonTimeline* Playing;
    struct MoonTimeline* Disappearing;
    struct Transform* Mark;
    struct Transform* DirectionPreview;
    LeashMarkEffect_State__Enum m_currentState;

    bool _IsSuspended_k__BackingField;
    struct IEnumerator* m_delayedDestroyInactive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeashMarkEffect__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeashMarkEffect__Fields_FWDDECL
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LeashMarkEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashMarkEffect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeashMarkEffect__Fields_FWDDECL)
#include <Modloader/app/structs/LeashMarkEffect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeashMarkEffect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
