#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FadeOut__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FadeOut__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadeOut__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED)
#define IL2CPP_STRUCT_FadeOut__Fields_DEFINED
struct Renderer;
struct FadeOut__Fields {
    struct PerformingAction__Fields _;
    struct Renderer* Renderer;
    float Duration;
    float m_timeLeft;
    float m_fadeAmount;
    bool m_isSuspended;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FadeOut__Fields_FWDDECL)
#define IL2CPP_STRUCT_FadeOut__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_FadeOut__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadeOut__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FadeOut__Fields_FWDDECL)
#include <Modloader/app/structs/FadeOut__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FadeOut__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
