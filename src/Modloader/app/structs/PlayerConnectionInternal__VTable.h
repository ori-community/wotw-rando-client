#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerConnectionInternal__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerConnectionInternal__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConnectionInternal__VTable_DEFINED)
#define IL2CPP_STRUCT_PlayerConnectionInternal__VTable_DEFINED
struct PlayerConnectionInternal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_Initialize;
    VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_DisconnectAll;
    VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_SendMessage;
    VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_TrySendMessage;
    VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_Poll;
    VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_RegisterInternal;
    VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal;
    VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_IsConnected;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerConnectionInternal__VTable_FWDDECL)
#define IL2CPP_STRUCT_PlayerConnectionInternal__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayerConnectionInternal__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConnectionInternal__VTable_DEFINED) && !defined(IL2CPP_STRUCT_PlayerConnectionInternal__VTable_FWDDECL)
#include <Modloader/app/structs/PlayerConnectionInternal__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerConnectionInternal__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
