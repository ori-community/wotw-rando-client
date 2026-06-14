#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderWrapper__Fields_DEFINED
struct UberShaderComponent;
struct SerializableUberShaderWrapper;
struct List_1_Moon_ArtOptimization_ModifierWrapper_;
struct Dictionary_2_System_Int32_System_Boolean_;
struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_;
struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_;
struct __declspec(align(8)) UberShaderWrapper__Fields {
    int32_t Id;
    struct UberShaderComponent* UberShader;
    struct SerializableUberShaderWrapper* m_serializableWrapper;
    struct List_1_Moon_ArtOptimization_ModifierWrapper_* m_modifiers;
    float m_energy;
    struct Dictionary_2_System_Int32_System_Boolean_* m_frustumStatus;
    struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_* m_samples;
    struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_* m_modifiersMap;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderWrapper__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_.h>
#include <Modloader/app/structs/List_1_Moon_ArtOptimization_ModifierWrapper_.h>
#include <Modloader/app/structs/SerializableUberShaderWrapper.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#endif
#undef IL2CPP_STRUCT_UberShaderWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
