#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraGoThroughScrollLocks__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraGoThroughScrollLocks__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraGoThroughScrollLocks__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraGoThroughScrollLocks__Fields_DEFINED
struct GameplayCamera;
struct CameraScrollLock;
struct Transform;
struct HashSet_1_Moon_ISuspendable_;
struct HashSet_1_UnityEngine_Object_;
struct __declspec(align(8)) CameraGoThroughScrollLocks__Fields {
    struct GameplayCamera* m_cameraController;
    bool CanPassScrollocks;
    bool m_isFading;
    struct CameraScrollLock* m_lastPassedScrollLock;
    struct Transform* m_currentCharacter;
    bool m_suspendedForScrollLock;
    bool m_waitForScrollLock;
    struct HashSet_1_Moon_ISuspendable_* m_currentCharacterSuspendables;
    struct HashSet_1_UnityEngine_Object_* DisablePassThroughRequests;
};
#endif
#if !defined(IL2CPP_STRUCT_CameraGoThroughScrollLocks__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraGoThroughScrollLocks__Fields_FWDDECL
#include <Modloader/app/structs/CameraScrollLock.h>
#include <Modloader/app/structs/GameplayCamera.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_Object_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CameraGoThroughScrollLocks__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraGoThroughScrollLocks__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraGoThroughScrollLocks__Fields_FWDDECL)
#include <Modloader/app/structs/CameraGoThroughScrollLocks__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraGoThroughScrollLocks__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
