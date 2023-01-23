#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPresetAsset__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPresetAsset__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetAsset__Array_DEFINED)
#define IL2CPP_STRUCT_UberPresetAsset__Array_DEFINED
struct UberPresetAsset__Array__Class;
struct UberPresetAsset;
struct UberPresetAsset__Array {
    struct UberPresetAsset__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct UberPresetAsset* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_UberPresetAsset__Array_FWDDECL)
#define IL2CPP_STRUCT_UberPresetAsset__Array_FWDDECL
#include <Modloader/app/structs/UberPresetAsset.h>
#include <Modloader/app/structs/UberPresetAsset__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPresetAsset__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetAsset__Array_DEFINED) && !defined(IL2CPP_STRUCT_UberPresetAsset__Array_FWDDECL)
#include <Modloader/app/structs/UberPresetAsset__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPresetAsset__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
