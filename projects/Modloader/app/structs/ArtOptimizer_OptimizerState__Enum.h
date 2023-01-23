#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtOptimizer_OptimizerState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtOptimizer_OptimizerState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizer_OptimizerState__Enum_DEFINED)
#define IL2CPP_STRUCT_ArtOptimizer_OptimizerState__Enum_DEFINED
enum class ArtOptimizer_OptimizerState__Enum : int32_t {
    Idle = 0x00000000,
    GettingReady = 0x00000001,
    PrepareSamples = 0x00000002,
    Processing = 0x00000003,
    Done = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_ArtOptimizer_OptimizerState__Enum_FWDDECL)
#define IL2CPP_STRUCT_ArtOptimizer_OptimizerState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ArtOptimizer_OptimizerState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizer_OptimizerState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ArtOptimizer_OptimizerState__Enum_FWDDECL)
#include <Modloader/app/structs/ArtOptimizer_OptimizerState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtOptimizer_OptimizerState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
