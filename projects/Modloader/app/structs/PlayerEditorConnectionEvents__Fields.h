#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerEditorConnectionEvents__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerEditorConnectionEvents__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerEditorConnectionEvents__Fields_DEFINED
struct List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_;
struct PlayerEditorConnectionEvents_ConnectionChangeEvent;
struct __declspec(align(8)) PlayerEditorConnectionEvents__Fields {
    struct List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_* messageTypeSubscribers;
    struct PlayerEditorConnectionEvents_ConnectionChangeEvent* connectionEvent;
    struct PlayerEditorConnectionEvents_ConnectionChangeEvent* disconnectionEvent;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerEditorConnectionEvents__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngin_Networki_PlayerConnecti_PlayerEditorConnectionEven_MessageTypeSubscribe_.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_ConnectionChangeEvent.h>
#endif
#undef IL2CPP_STRUCT_PlayerEditorConnectionEvents__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerEditorConnectionEvents__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerEditorConnectionEvents__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
