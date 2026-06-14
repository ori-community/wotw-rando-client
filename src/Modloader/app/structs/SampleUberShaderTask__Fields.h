#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SampleUberShaderTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SampleUberShaderTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleUberShaderTask__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/SimpleTask__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_SampleUberShaderTask__Fields_DEFINED
struct ArtOptimizationDataModel;
struct UberShaderComponent;
struct SampleUberShaderTask__Fields {
    struct SimpleTask__Fields _;
    struct ArtOptimizationDataModel* m_dataModel;
    struct UberShaderComponent* m_uberShader;
    struct Bounds m_bounds;
    int32_t m_sampleIndex;
    float m_progress;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SampleUberShaderTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_SampleUberShaderTask__Fields_FWDDECL
#include <Modloader/app/structs/ArtOptimizationDataModel.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#endif
#undef IL2CPP_STRUCT_SampleUberShaderTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleUberShaderTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SampleUberShaderTask__Fields_FWDDECL)
#include <Modloader/app/structs/SampleUberShaderTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SampleUberShaderTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
