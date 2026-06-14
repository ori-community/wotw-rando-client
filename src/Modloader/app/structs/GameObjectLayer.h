#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObjectLayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObjectLayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectLayer_DEFINED)
#define IL2CPP_STRUCT_GameObjectLayer_DEFINED
struct GameObjectLayer__Class;
struct GameObjectLayer {
    struct GameObjectLayer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GameObjectLayer_FWDDECL)
#define IL2CPP_STRUCT_GameObjectLayer_FWDDECL
#include <Modloader/app/structs/GameObjectLayer__Class.h>
#endif
#undef IL2CPP_STRUCT_GameObjectLayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectLayer_DEFINED) && !defined(IL2CPP_STRUCT_GameObjectLayer_FWDDECL)
#include <Modloader/app/structs/GameObjectLayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObjectLayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
