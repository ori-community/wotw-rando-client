#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Level2Map__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Level2Map__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Level2Map__Array_DEFINED)
#define IL2CPP_STRUCT_Level2Map__Array_DEFINED
struct Level2Map__Array__Class;
struct Level2Map;
struct Level2Map__Array {
    struct Level2Map__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Level2Map* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Level2Map__Array_FWDDECL)
#define IL2CPP_STRUCT_Level2Map__Array_FWDDECL
#include <Modloader/app/structs/Level2Map.h>
#include <Modloader/app/structs/Level2Map__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Level2Map__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Level2Map__Array_DEFINED) && !defined(IL2CPP_STRUCT_Level2Map__Array_FWDDECL)
#include <Modloader/app/structs/Level2Map__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Level2Map__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
