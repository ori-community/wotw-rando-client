#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObjectActivator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObjectActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectActivator_DEFINED)
#include <Modloader/app/structs/GameObjectActivator__Fields.h>
#if defined(IL2CPP_STRUCT_GameObjectActivator__Fields_DEFINED)
#define IL2CPP_STRUCT_GameObjectActivator_DEFINED
struct GameObjectActivator__Class;
struct GameObjectActivator {
    struct GameObjectActivator__Class* klass;
    MonitorData* monitor;
    struct GameObjectActivator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameObjectActivator_FWDDECL)
#define IL2CPP_STRUCT_GameObjectActivator_FWDDECL
#include <Modloader/app/structs/GameObjectActivator__Class.h>
#endif
#undef IL2CPP_STRUCT_GameObjectActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectActivator_DEFINED) && !defined(IL2CPP_STRUCT_GameObjectActivator_FWDDECL)
#include <Modloader/app/structs/GameObjectActivator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObjectActivator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
