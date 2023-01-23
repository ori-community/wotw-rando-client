#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MetaballRenderer_IMetaball__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MetaballRenderer_IMetaball__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaballRenderer_IMetaball__Array_DEFINED)
#define IL2CPP_STRUCT_MetaballRenderer_IMetaball__Array_DEFINED
struct MetaballRenderer_IMetaball__Array__Class;
struct MetaballRenderer_IMetaball;
struct MetaballRenderer_IMetaball__Array {
    struct MetaballRenderer_IMetaball__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct MetaballRenderer_IMetaball* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_MetaballRenderer_IMetaball__Array_FWDDECL)
#define IL2CPP_STRUCT_MetaballRenderer_IMetaball__Array_FWDDECL
#include <Modloader/app/structs/MetaballRenderer_IMetaball.h>
#include <Modloader/app/structs/MetaballRenderer_IMetaball__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_MetaballRenderer_IMetaball__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaballRenderer_IMetaball__Array_DEFINED) && !defined(IL2CPP_STRUCT_MetaballRenderer_IMetaball__Array_FWDDECL)
#include <Modloader/app/structs/MetaballRenderer_IMetaball__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MetaballRenderer_IMetaball__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
