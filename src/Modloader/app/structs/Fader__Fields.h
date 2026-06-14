#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Fader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Fader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Fader__Fields_DEFINED)
#include <Modloader/app/structs/Fader_State__Enum.h>
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Fader_State__Enum_DEFINED)
#define IL2CPP_STRUCT_Fader__Fields_DEFINED
struct GUITexture;
struct Action;
struct Fader__Fields {
    struct Suspendable__Fields _;
    float FadeInTime;
    float FadeStayTime;
    float FadeOutTime;
    float m_stateCurrentTime;
    Fader_State__Enum CurrentState;

    struct GUITexture* m_guitexture;
    struct Action* OnFadeInEvent;
    struct Action* OnFadeOutEvent;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Fader__Fields_FWDDECL)
#define IL2CPP_STRUCT_Fader__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GUITexture.h>
#endif
#undef IL2CPP_STRUCT_Fader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Fader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Fader__Fields_FWDDECL)
#include <Modloader/app/structs/Fader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Fader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
