#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyEntity__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyEntity__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyEntity__Array_DEFINED)
#define IL2CPP_STRUCT_EnemyEntity__Array_DEFINED
struct EnemyEntity__Array__Class;
struct EnemyEntity;
struct EnemyEntity__Array {
    struct EnemyEntity__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct EnemyEntity* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_EnemyEntity__Array_FWDDECL)
#define IL2CPP_STRUCT_EnemyEntity__Array_FWDDECL
#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/EnemyEntity__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyEntity__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyEntity__Array_DEFINED) && !defined(IL2CPP_STRUCT_EnemyEntity__Array_FWDDECL)
#include <Modloader/app/structs/EnemyEntity__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyEntity__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
