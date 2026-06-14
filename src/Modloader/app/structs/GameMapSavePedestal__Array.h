#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapSavePedestal__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapSavePedestal__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapSavePedestal__Array_DEFINED)
#define IL2CPP_STRUCT_GameMapSavePedestal__Array_DEFINED
struct GameMapSavePedestal__Array__Class;
struct GameMapSavePedestal;
struct GameMapSavePedestal__Array {
    struct GameMapSavePedestal__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct GameMapSavePedestal* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_GameMapSavePedestal__Array_FWDDECL)
#define IL2CPP_STRUCT_GameMapSavePedestal__Array_FWDDECL
#include <Modloader/app/structs/GameMapSavePedestal.h>
#include <Modloader/app/structs/GameMapSavePedestal__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_GameMapSavePedestal__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapSavePedestal__Array_DEFINED) && !defined(IL2CPP_STRUCT_GameMapSavePedestal__Array_FWDDECL)
#include <Modloader/app/structs/GameMapSavePedestal__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapSavePedestal__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
