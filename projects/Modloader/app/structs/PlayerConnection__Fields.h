#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerConnection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerConnection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConnection__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerConnection__Fields_DEFINED
struct PlayerEditorConnectionEvents;
struct List_1_System_Int32_;
struct PlayerConnection__Fields {
    struct ScriptableObject__Fields _;
    struct PlayerEditorConnectionEvents* m_PlayerEditorConnectionEvents;
    struct List_1_System_Int32_* m_connectedPlayers;
    bool m_IsInitilized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerConnection__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerConnection__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents.h>
#endif
#undef IL2CPP_STRUCT_PlayerConnection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConnection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerConnection__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerConnection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerConnection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
