#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameWorldArea_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameWorldArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorldArea_DEFINED)
#include <Modloader/app/structs/GameWorldArea__Fields.h>
#if defined(IL2CPP_STRUCT_GameWorldArea__Fields_DEFINED)
#define IL2CPP_STRUCT_GameWorldArea_DEFINED
struct GameWorldArea__Class;
struct GameWorldArea {
    struct GameWorldArea__Class* klass;
    MonitorData* monitor;
    struct GameWorldArea__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameWorldArea_FWDDECL)
#define IL2CPP_STRUCT_GameWorldArea_FWDDECL
#include <Modloader/app/structs/GameWorldArea__Class.h>
#endif
#undef IL2CPP_STRUCT_GameWorldArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorldArea_DEFINED) && !defined(IL2CPP_STRUCT_GameWorldArea_FWDDECL)
#include <Modloader/app/structs/GameWorldArea.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameWorldArea.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
