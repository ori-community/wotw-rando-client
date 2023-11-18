#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryCleanUpTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryCleanUpTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryCleanUpTask__Fields_DEFINED)
#include <Modloader/app/structs/SimpleTask__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleTask__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryCleanUpTask__Fields_DEFINED
struct ArtOptimizationDataModel;
struct UberShaderComponent;
struct MemoryCleanUpTask__Fields {
    struct SimpleTask__Fields _;
    struct ArtOptimizationDataModel* m_dataModel;
    struct UberShaderComponent* m_uberShader;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryCleanUpTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_MemoryCleanUpTask__Fields_FWDDECL
#include <Modloader/app/structs/ArtOptimizationDataModel.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#endif
#undef IL2CPP_STRUCT_MemoryCleanUpTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryCleanUpTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MemoryCleanUpTask__Fields_FWDDECL)
#include <Modloader/app/structs/MemoryCleanUpTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryCleanUpTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
