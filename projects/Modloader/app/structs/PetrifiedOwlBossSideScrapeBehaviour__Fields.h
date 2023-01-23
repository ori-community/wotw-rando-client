#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossSideScrapeBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossSideScrapeBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossSideScrapeBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossSideScrapeBehaviour__Fields_DEFINED
struct MoonTimeline;
struct Enum__Array;
struct PetrifiedOwlBossSideScrapeBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    bool m_isMirrored;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossSideScrapeBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossSideScrapeBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossSideScrapeBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossSideScrapeBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossSideScrapeBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossSideScrapeBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossSideScrapeBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
