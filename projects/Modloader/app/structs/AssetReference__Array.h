#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssetReference__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssetReference__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetReference__Array_DEFINED)
#define IL2CPP_STRUCT_AssetReference__Array_DEFINED
struct AssetReference__Array__Class;
struct AssetReference;
struct AssetReference__Array {
    struct AssetReference__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct AssetReference* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_AssetReference__Array_FWDDECL)
#define IL2CPP_STRUCT_AssetReference__Array_FWDDECL
#include <Modloader/app/structs/AssetReference.h>
#include <Modloader/app/structs/AssetReference__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_AssetReference__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssetReference__Array_DEFINED) && !defined(IL2CPP_STRUCT_AssetReference__Array_FWDDECL)
#include <Modloader/app/structs/AssetReference__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssetReference__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
