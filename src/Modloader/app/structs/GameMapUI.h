#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapUI_DEFINED)
#include <Modloader/app/structs/GameMapUI__Fields.h>
#if defined(IL2CPP_STRUCT_GameMapUI__Fields_DEFINED)
#define IL2CPP_STRUCT_GameMapUI_DEFINED
struct GameMapUI__Class;
struct GameMapUI {
    struct GameMapUI__Class* klass;
    MonitorData* monitor;
    struct GameMapUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapUI_FWDDECL)
#define IL2CPP_STRUCT_GameMapUI_FWDDECL
#include <Modloader/app/structs/GameMapUI__Class.h>
#endif
#undef IL2CPP_STRUCT_GameMapUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapUI_DEFINED) && !defined(IL2CPP_STRUCT_GameMapUI_FWDDECL)
#include <Modloader/app/structs/GameMapUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
