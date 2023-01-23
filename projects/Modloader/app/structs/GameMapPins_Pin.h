#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapPins_Pin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapPins_Pin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapPins_Pin_DEFINED)
#include <Modloader/app/structs/GameMapPins_Pin__Fields.h>
#if defined(IL2CPP_STRUCT_GameMapPins_Pin__Fields_DEFINED)
#define IL2CPP_STRUCT_GameMapPins_Pin_DEFINED
struct GameMapPins_Pin__Class;
struct GameMapPins_Pin {
    struct GameMapPins_Pin__Class* klass;
    MonitorData* monitor;
    struct GameMapPins_Pin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapPins_Pin_FWDDECL)
#define IL2CPP_STRUCT_GameMapPins_Pin_FWDDECL
#include <Modloader/app/structs/GameMapPins_Pin__Class.h>
#endif
#undef IL2CPP_STRUCT_GameMapPins_Pin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapPins_Pin_DEFINED) && !defined(IL2CPP_STRUCT_GameMapPins_Pin_FWDDECL)
#include <Modloader/app/structs/GameMapPins_Pin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapPins_Pin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
