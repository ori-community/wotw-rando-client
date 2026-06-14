#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByteStateMap_Mapping__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByteStateMap_Mapping__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteStateMap_Mapping__Array_DEFINED)
#include <Modloader/app/structs/ByteStateMap_Mapping.h>
#if defined(IL2CPP_STRUCT_ByteStateMap_Mapping_DEFINED)
#define IL2CPP_STRUCT_ByteStateMap_Mapping__Array_DEFINED
struct ByteStateMap_Mapping__Array__Class;
struct ByteStateMap_Mapping__Array {
    struct ByteStateMap_Mapping__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct ByteStateMap_Mapping vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByteStateMap_Mapping__Array_FWDDECL)
#define IL2CPP_STRUCT_ByteStateMap_Mapping__Array_FWDDECL
#include <Modloader/app/structs/ByteStateMap_Mapping__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_ByteStateMap_Mapping__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteStateMap_Mapping__Array_DEFINED) && !defined(IL2CPP_STRUCT_ByteStateMap_Mapping__Array_FWDDECL)
#include <Modloader/app/structs/ByteStateMap_Mapping__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByteStateMap_Mapping__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
