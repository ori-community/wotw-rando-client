#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameWorld__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameWorld__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorld__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GameWorld__StaticFields_DEFINED
struct GameWorld;
struct GameWorld__StaticFields {
    struct GameWorld* Instance;
};
#endif
#if !defined(IL2CPP_STRUCT_GameWorld__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GameWorld__StaticFields_FWDDECL
#include <Modloader/app/structs/GameWorld.h>
#endif
#undef IL2CPP_STRUCT_GameWorld__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorld__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GameWorld__StaticFields_FWDDECL)
#include <Modloader/app/structs/GameWorld__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameWorld__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
