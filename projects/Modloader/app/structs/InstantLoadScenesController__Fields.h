#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantLoadScenesController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantLoadScenesController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantLoadScenesController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_InstantLoadScenesController__Fields_DEFINED
struct Action;
struct InstantLoadScenesController__Fields {
    struct MonoBehaviour__Fields _;
    struct Action* m_onFinishedLoading;
    bool m_isLoading;
    float m_startInstantlyLoadingScenesTime;
    bool m_entireGameFrozen;
    struct Vector2 m_position;
    struct Action* OnScenesEnabledCallback;
    bool m_lockFinishLoading;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantLoadScenesController__Fields_FWDDECL)
#define IL2CPP_STRUCT_InstantLoadScenesController__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_InstantLoadScenesController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantLoadScenesController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InstantLoadScenesController__Fields_FWDDECL)
#include <Modloader/app/structs/InstantLoadScenesController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantLoadScenesController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
