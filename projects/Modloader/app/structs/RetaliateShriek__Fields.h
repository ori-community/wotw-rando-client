#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RetaliateShriek__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RetaliateShriek__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetaliateShriek__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RetaliateShriek__Fields_DEFINED
struct MoonTimeline;
struct Transform;
struct RetaliateShriek__Fields {
    struct Suspendable__Fields _;
    struct MoonTimeline* TimelineSequence;
    float PushForce;
    struct Transform* AnchorSpot;
    bool m_overrideOriginPosition;
    struct Vector3 m_originPosition;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RetaliateShriek__Fields_FWDDECL)
#define IL2CPP_STRUCT_RetaliateShriek__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RetaliateShriek__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetaliateShriek__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RetaliateShriek__Fields_FWDDECL)
#include <Modloader/app/structs/RetaliateShriek__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RetaliateShriek__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
