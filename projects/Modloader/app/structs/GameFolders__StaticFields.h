#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameFolders__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameFolders__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameFolders__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GameFolders__StaticFields_DEFINED
struct String;
struct GameFolders__StaticFields {
    struct String* m_playerDataFolderPath;
    struct String* m_playerTrialDataFolderPath;
    struct String* EditorOriFolderName;
    struct String* OriTrialFolderName;
    struct String* OriFolderName;
};
#endif
#if !defined(IL2CPP_STRUCT_GameFolders__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GameFolders__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GameFolders__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameFolders__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GameFolders__StaticFields_FWDDECL)
#include <Modloader/app/structs/GameFolders__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameFolders__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
