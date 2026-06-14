#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameControllerLate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameControllerLate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameControllerLate__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GameControllerLate__Fields_DEFINED
struct GameObject;
struct WaitForFixedUpdate;
struct WaitForEndOfFrame;
struct Coroutine;
struct GameControllerLate__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* LateStartHookPrefab;
    struct WaitForFixedUpdate* m_waitForFixedUpdate;
    struct WaitForEndOfFrame* m_waitForEndOfFrame;
    struct Coroutine* m_eofCoroutine;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameControllerLate__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameControllerLate__Fields_FWDDECL
#include <Modloader/app/structs/Coroutine.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/WaitForEndOfFrame.h>
#include <Modloader/app/structs/WaitForFixedUpdate.h>
#endif
#undef IL2CPP_STRUCT_GameControllerLate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameControllerLate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameControllerLate__Fields_FWDDECL)
#include <Modloader/app/structs/GameControllerLate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameControllerLate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
