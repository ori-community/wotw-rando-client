#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerStatistic__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerStatistic__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatistic__Array_DEFINED)
#define IL2CPP_STRUCT_PlayerStatistic__Array_DEFINED
struct PlayerStatistic__Array__Class;
struct PlayerStatistic;
struct PlayerStatistic__Array {
    struct PlayerStatistic__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct PlayerStatistic* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerStatistic__Array_FWDDECL)
#define IL2CPP_STRUCT_PlayerStatistic__Array_FWDDECL
#include <Modloader/app/structs/PlayerStatistic.h>
#include <Modloader/app/structs/PlayerStatistic__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerStatistic__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatistic__Array_DEFINED) && !defined(IL2CPP_STRUCT_PlayerStatistic__Array_FWDDECL)
#include <Modloader/app/structs/PlayerStatistic__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerStatistic__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
