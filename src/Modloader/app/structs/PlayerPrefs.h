#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerPrefs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerPrefs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPrefs_DEFINED)
#define IL2CPP_STRUCT_PlayerPrefs_DEFINED
struct PlayerPrefs__Class;
struct PlayerPrefs {
    struct PlayerPrefs__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerPrefs_FWDDECL)
#define IL2CPP_STRUCT_PlayerPrefs_FWDDECL
#include <Modloader/app/structs/PlayerPrefs__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerPrefs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPrefs_DEFINED) && !defined(IL2CPP_STRUCT_PlayerPrefs_FWDDECL)
#include <Modloader/app/structs/PlayerPrefs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerPrefs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
