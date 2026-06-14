#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerConnection__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerConnection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConnection__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PlayerConnection__StaticFields_DEFINED
struct IPlayerEditorConnectionNative;
struct PlayerConnection;
struct PlayerConnection__StaticFields {
    struct IPlayerEditorConnectionNative* connectionNative;
    struct PlayerConnection* s_Instance;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerConnection__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PlayerConnection__StaticFields_FWDDECL
#include <Modloader/app/structs/IPlayerEditorConnectionNative.h>
#include <Modloader/app/structs/PlayerConnection.h>
#endif
#undef IL2CPP_STRUCT_PlayerConnection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConnection__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerConnection__StaticFields_FWDDECL)
#include <Modloader/app/structs/PlayerConnection__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerConnection__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
