#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapSavePedestal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapSavePedestal_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapSavePedestal_DEFINED)
#include <Modloader/app/structs/GameMapSavePedestal__Fields.h>
#if defined(IL2CPP_STRUCT_GameMapSavePedestal__Fields_DEFINED)
#define IL2CPP_STRUCT_GameMapSavePedestal_DEFINED
struct GameMapSavePedestal__Class;
struct GameMapSavePedestal {
    struct GameMapSavePedestal__Class* klass;
    MonitorData* monitor;
    struct GameMapSavePedestal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapSavePedestal_FWDDECL)
#define IL2CPP_STRUCT_GameMapSavePedestal_FWDDECL
#include <Modloader/app/structs/GameMapSavePedestal__Class.h>
#endif
#undef IL2CPP_STRUCT_GameMapSavePedestal_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapSavePedestal_DEFINED) && !defined(IL2CPP_STRUCT_GameMapSavePedestal_FWDDECL)
#include <Modloader/app/structs/GameMapSavePedestal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapSavePedestal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
