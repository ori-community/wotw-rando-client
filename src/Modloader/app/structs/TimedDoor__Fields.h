#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimedDoor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimedDoor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedDoor__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_TimedDoor__Fields_DEFINED
struct AudioClip;
struct ActionMethod;
struct LegacyTranslateAnimator;
struct TimedDoor__Fields {
    struct SaveSerialize__Fields _;
    struct AudioClip* ChallengeCompleteSound;
    struct ActionMethod* ActionAtTimeout;
    struct ActionMethod* ActionAtSolved;
    bool ShutdownDoor;
    bool m_isSolved;
    struct LegacyTranslateAnimator* m_animator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimedDoor__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimedDoor__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/LegacyTranslateAnimator.h>
#endif
#undef IL2CPP_STRUCT_TimedDoor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedDoor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimedDoor__Fields_FWDDECL)
#include <Modloader/app/structs/TimedDoor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimedDoor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
