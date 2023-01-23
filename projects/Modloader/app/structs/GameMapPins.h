#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapPins_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapPins_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapPins_DEFINED)
#include <Modloader/app/structs/GameMapPins__Fields.h>
#if defined(IL2CPP_STRUCT_GameMapPins__Fields_DEFINED)
#define IL2CPP_STRUCT_GameMapPins_DEFINED
struct GameMapPins__Class;
struct GameMapPins {
    struct GameMapPins__Class* klass;
    MonitorData* monitor;
    struct GameMapPins__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapPins_FWDDECL)
#define IL2CPP_STRUCT_GameMapPins_FWDDECL
#include <Modloader/app/structs/GameMapPins__Class.h>
#endif
#undef IL2CPP_STRUCT_GameMapPins_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapPins_DEFINED) && !defined(IL2CPP_STRUCT_GameMapPins_FWDDECL)
#include <Modloader/app/structs/GameMapPins.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapPins.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
