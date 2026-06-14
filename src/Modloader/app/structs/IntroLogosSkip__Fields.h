#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntroLogosSkip__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntroLogosSkip__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntroLogosSkip__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_IntroLogosSkip__Fields_DEFINED
struct ActionSequence;
struct MoonTimeline;
struct IntroLogosSkip__Fields {
    struct MonoBehaviour__Fields _;
    float m_lastInput;
    struct ActionSequence* EndSequence;
    struct ActionSequence* TimelineRunning;
    struct MoonTimeline* MoonStudiosLogoTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntroLogosSkip__Fields_FWDDECL)
#define IL2CPP_STRUCT_IntroLogosSkip__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_IntroLogosSkip__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntroLogosSkip__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IntroLogosSkip__Fields_FWDDECL)
#include <Modloader/app/structs/IntroLogosSkip__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntroLogosSkip__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
