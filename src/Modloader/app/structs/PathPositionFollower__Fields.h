#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathPositionFollower__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathPositionFollower__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathPositionFollower__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_PathPositionFollower__Fields_DEFINED
struct PathFollower;
struct LinearPath;
struct ActionSequence;
struct PathPositionFollower__Fields {
    struct SaveSerialize__Fields _;
    struct PathFollower* m_follower;
    float Speed;
    struct LinearPath* LinearPath;
    bool ChangeAngle;
    struct ActionSequence* OnReachEndSequence;
    bool m_startCalled;
    bool m_hasLoaded;
    bool m_endSequenceExecuted;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct Bounds ActiveBounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PathPositionFollower__Fields_FWDDECL)
#define IL2CPP_STRUCT_PathPositionFollower__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/LinearPath.h>
#include <Modloader/app/structs/PathFollower.h>
#endif
#undef IL2CPP_STRUCT_PathPositionFollower__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathPositionFollower__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PathPositionFollower__Fields_FWDDECL)
#include <Modloader/app/structs/PathPositionFollower__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathPositionFollower__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
