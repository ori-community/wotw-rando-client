#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtOptimizationDataModel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtOptimizationDataModel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizationDataModel__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtOptimizationDataModel__Fields_DEFINED
struct List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_;
struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_;
struct List_1_Moon_ArtOptimization_UberShaderWrapper_;
struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_;
struct TexturesPool;
struct String;
struct __declspec(align(8)) ArtOptimizationDataModel__Fields {
    float Timestamp;
    float ScanningTime;
    struct List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* m_serializedUberShaderWrappers;
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_* m_serializableUberShadersMap;
    struct List_1_Moon_ArtOptimization_UberShaderWrapper_* m_uberShaders;
    struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_* m_uberShadersMap;
    struct TexturesPool* m_pool;
    struct String* _SceneGuid_k__BackingField;
    struct String* m_outputFolder;
    struct String* m_fullPath;
};
#endif
#if !defined(IL2CPP_STRUCT_ArtOptimizationDataModel__Fields_FWDDECL)
#define IL2CPP_STRUCT_ArtOptimizationDataModel__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_.h>
#include <Modloader/app/structs/Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_.h>
#include <Modloader/app/structs/List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_.h>
#include <Modloader/app/structs/List_1_Moon_ArtOptimization_UberShaderWrapper_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TexturesPool.h>
#endif
#undef IL2CPP_STRUCT_ArtOptimizationDataModel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizationDataModel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ArtOptimizationDataModel__Fields_FWDDECL)
#include <Modloader/app/structs/ArtOptimizationDataModel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtOptimizationDataModel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
