#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapPins_Pin__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapPins_Pin__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapPins_Pin__Array_DEFINED)
#define IL2CPP_STRUCT_GameMapPins_Pin__Array_DEFINED
struct GameMapPins_Pin__Array__Class;
struct GameMapPins_Pin;
struct GameMapPins_Pin__Array {
    struct GameMapPins_Pin__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct GameMapPins_Pin* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_GameMapPins_Pin__Array_FWDDECL)
#define IL2CPP_STRUCT_GameMapPins_Pin__Array_FWDDECL
#include <Modloader/app/structs/GameMapPins_Pin.h>
#include <Modloader/app/structs/GameMapPins_Pin__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_GameMapPins_Pin__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapPins_Pin__Array_DEFINED) && !defined(IL2CPP_STRUCT_GameMapPins_Pin__Array_FWDDECL)
#include <Modloader/app/structs/GameMapPins_Pin__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapPins_Pin__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
