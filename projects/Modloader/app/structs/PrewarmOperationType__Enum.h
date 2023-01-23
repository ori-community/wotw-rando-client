#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrewarmOperationType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrewarmOperationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmOperationType__Enum_DEFINED)
#define IL2CPP_STRUCT_PrewarmOperationType__Enum_DEFINED
enum class PrewarmOperationType__Enum : int32_t {
    ShaderPrewarm = 0x00000000,
    AudioPrewarm = 0x00000001,
    PoolingPrewarm = 0x00000002,
    AtlasPrewarm = 0x00000003,
    LoadIntroLogos = 0x00000004,
    ActivateIntroLogos = 0x00000005,
    ResourcesLoad = 0x00000006,
    IL2CPPPrewarm = 0x00000007,
    GCFinalizerPrewarm = 0x00000008,
    ClearPoolingRefs = 0x00000009,
    LoadPoolingPrewarm = 0x0000000a,
    UnloadIntroLogos = 0x0000000b,
    LoadGameplaySystemsScenes = 0x0000000c,
};
#endif
#if !defined(IL2CPP_STRUCT_PrewarmOperationType__Enum_FWDDECL)
#define IL2CPP_STRUCT_PrewarmOperationType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PrewarmOperationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmOperationType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PrewarmOperationType__Enum_FWDDECL)
#include <Modloader/app/structs/PrewarmOperationType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrewarmOperationType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
