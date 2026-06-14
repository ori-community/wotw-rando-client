#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameWorld_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameWorld_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorld_DEFINED)
#include <Modloader/app/structs/GameWorld__Fields.h>
#if defined(IL2CPP_STRUCT_GameWorld__Fields_DEFINED)
#define IL2CPP_STRUCT_GameWorld_DEFINED
struct GameWorld__Class;
struct GameWorld {
    struct GameWorld__Class* klass;
    MonitorData* monitor;
    struct GameWorld__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameWorld_FWDDECL)
#define IL2CPP_STRUCT_GameWorld_FWDDECL
#include <Modloader/app/structs/GameWorld__Class.h>
#endif
#undef IL2CPP_STRUCT_GameWorld_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorld_DEFINED) && !defined(IL2CPP_STRUCT_GameWorld_FWDDECL)
#include <Modloader/app/structs/GameWorld.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameWorld.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
