#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EscapeRaceHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EscapeRaceHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EscapeRaceHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EscapeRaceHandler__Fields_DEFINED
struct EscapeRaceData;
struct Action;
struct EscapeRaceHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct EscapeRaceData* Data;
    bool m_inProgress;
    bool m_inStartProximity;
    bool m_inEndProximity;
    bool m_startRaceOnEnable;
    struct Action* m_onStartRaceAction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EscapeRaceHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_EscapeRaceHandler__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/EscapeRaceData.h>
#endif
#undef IL2CPP_STRUCT_EscapeRaceHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EscapeRaceHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EscapeRaceHandler__Fields_FWDDECL)
#include <Modloader/app/structs/EscapeRaceHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EscapeRaceHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
