#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTimelineUiFaderOnEnable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTimelineUiFaderOnEnable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimelineUiFaderOnEnable__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTimelineUiFaderOnEnable__Fields_DEFINED
struct MoonTimelineUiFader;
struct MoonTimelineUiFaderOnEnable__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimelineUiFader* Fader;
    bool FadeInOnEnable;
    bool FadeOutOnDisable;
    bool m_targetEnabled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTimelineUiFaderOnEnable__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTimelineUiFaderOnEnable__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimelineUiFader.h>
#endif
#undef IL2CPP_STRUCT_MoonTimelineUiFaderOnEnable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimelineUiFaderOnEnable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTimelineUiFaderOnEnable__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTimelineUiFaderOnEnable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTimelineUiFaderOnEnable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
