#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields_DEFINED)
#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_JobHandle_DEFINED)
#define IL2CPP_STRUCT_GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields_DEFINED
struct GenericCastManager_1_Command_Mode_UnityEngine_CapsulecastCommand_;
struct Dictionary_2_System_Int32_System_Int32_;
struct CapsulecastCommand__Array;
struct RaycastHit__Array;
struct List_1_GenericCastManager_1_NativeArrays__2;
struct GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields {
    struct MonoBehaviour__Fields _;
    bool DebugLogs;
    struct GenericCastManager_1_Command_Mode_UnityEngine_CapsulecastCommand_* m_mode;
    struct Dictionary_2_System_Int32_System_Int32_* m_cmdRequests;
    struct Dictionary_2_System_Int32_System_Int32_* m_hitRequests;
    struct CapsulecastCommand__Array* m_cmds;
    struct RaycastHit__Array* m_hits;
    int32_t m_cmdCount;
    int32_t m_nativeIndex;
    struct List_1_GenericCastManager_1_NativeArrays__2* m_native;
    struct JobHandle m_job;
    bool m_executing;
    bool m_isRaycastManager;
    int32_t m_fixedUpdatesThisFrame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields_FWDDECL)
#define IL2CPP_STRUCT_GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields_FWDDECL
#include <Modloader/app/structs/CapsulecastCommand__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_Mode_UnityEngine_CapsulecastCommand_.h>
#include <Modloader/app/structs/List_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#endif
#undef IL2CPP_STRUCT_GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields_DEFINED) && !defined(IL2CPP_STRUCT_GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields_FWDDECL)
#include <Modloader/app/structs/GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericCastManager_1_UnityEngine_CapsulecastCommand___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
