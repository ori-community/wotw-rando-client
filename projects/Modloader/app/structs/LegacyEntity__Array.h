#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyEntity__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyEntity__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntity__Array_DEFINED)
#define IL2CPP_STRUCT_LegacyEntity__Array_DEFINED
struct LegacyEntity__Array__Class;
struct LegacyEntity;
struct LegacyEntity__Array {
    struct LegacyEntity__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct LegacyEntity* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_LegacyEntity__Array_FWDDECL)
#define IL2CPP_STRUCT_LegacyEntity__Array_FWDDECL
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/LegacyEntity__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyEntity__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntity__Array_DEFINED) && !defined(IL2CPP_STRUCT_LegacyEntity__Array_FWDDECL)
#include <Modloader/app/structs/LegacyEntity__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyEntity__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
