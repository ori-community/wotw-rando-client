#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GoToSceneController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GoToSceneController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoToSceneController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GoToSceneController__Fields_DEFINED
struct MoonGuid;
struct Action;
struct GoToSceneController__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonGuid* StartInScene;
    struct Vector3 m_position;
    bool m_useAfterSceneLoad;
    bool m_createCheckpointLater;
    struct Action* m_onCompleteLoad;
    struct Action* m_onCompleteImmediateLoad;
    bool m_isMovingImmediately;
    int32_t m_selectedSaveSlot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GoToSceneController__Fields_FWDDECL)
#define IL2CPP_STRUCT_GoToSceneController__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/MoonGuid.h>
#endif
#undef IL2CPP_STRUCT_GoToSceneController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoToSceneController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GoToSceneController__Fields_FWDDECL)
#include <Modloader/app/structs/GoToSceneController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GoToSceneController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
