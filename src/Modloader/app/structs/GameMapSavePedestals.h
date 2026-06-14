#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapSavePedestals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapSavePedestals_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapSavePedestals_DEFINED)
#include <Modloader/app/structs/GameMapSavePedestals__Fields.h>
#if defined(IL2CPP_STRUCT_GameMapSavePedestals__Fields_DEFINED)
#define IL2CPP_STRUCT_GameMapSavePedestals_DEFINED
struct GameMapSavePedestals__Class;
struct GameMapSavePedestals {
    struct GameMapSavePedestals__Class* klass;
    MonitorData* monitor;
    struct GameMapSavePedestals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapSavePedestals_FWDDECL)
#define IL2CPP_STRUCT_GameMapSavePedestals_FWDDECL
#include <Modloader/app/structs/GameMapSavePedestals__Class.h>
#endif
#undef IL2CPP_STRUCT_GameMapSavePedestals_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapSavePedestals_DEFINED) && !defined(IL2CPP_STRUCT_GameMapSavePedestals_FWDDECL)
#include <Modloader/app/structs/GameMapSavePedestals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapSavePedestals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
