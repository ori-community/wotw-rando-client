#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HelperGhostController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HelperGhostController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HelperGhostController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HelperGhostController__Fields_DEFINED
struct String;
struct MessageProvider;
struct MessageBox;
struct GhostPlayer;
struct HelperGhostController__Fields {
    struct MonoBehaviour__Fields _;
    struct String* HelperGhostReplayFilePath;
    struct MessageProvider* Hint;
    bool m_isRunning;
    struct MessageBox* m_messageBox;
    struct GhostPlayer* m_ghostPlayer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HelperGhostController__Fields_FWDDECL)
#define IL2CPP_STRUCT_HelperGhostController__Fields_FWDDECL
#include <Modloader/app/structs/GhostPlayer.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HelperGhostController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HelperGhostController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HelperGhostController__Fields_FWDDECL)
#include <Modloader/app/structs/HelperGhostController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HelperGhostController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
