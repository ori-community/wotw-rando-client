#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplaySoundManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplaySoundManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySoundManager_DEFINED)
#include <Modloader/app/structs/GameplaySoundManager__Fields.h>
#if defined(IL2CPP_STRUCT_GameplaySoundManager__Fields_DEFINED)
#define IL2CPP_STRUCT_GameplaySoundManager_DEFINED
struct GameplaySoundManager__Class;
struct GameplaySoundManager {
    struct GameplaySoundManager__Class* klass;
    MonitorData* monitor;
    struct GameplaySoundManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplaySoundManager_FWDDECL)
#define IL2CPP_STRUCT_GameplaySoundManager_FWDDECL
#include <Modloader/app/structs/GameplaySoundManager__Class.h>
#endif
#undef IL2CPP_STRUCT_GameplaySoundManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySoundManager_DEFINED) && !defined(IL2CPP_STRUCT_GameplaySoundManager_FWDDECL)
#include <Modloader/app/structs/GameplaySoundManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplaySoundManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
