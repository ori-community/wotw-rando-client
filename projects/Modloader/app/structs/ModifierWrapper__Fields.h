#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModifierWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModifierWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_ModifierWrapper__Fields_DEFINED
struct UberShaderModifier;
struct SerializableUberSaderModifierWrapper;
struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_;
struct __declspec(align(8)) ModifierWrapper__Fields {
    int32_t Id;
    struct UberShaderModifier* Modifier;
    struct SerializableUberSaderModifierWrapper* m_serializableModifierWrapper;
    float m_energy;
    struct Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_* m_samples;
};
#endif
#if !defined(IL2CPP_STRUCT_ModifierWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_ModifierWrapper__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_ArtOptimization_Sample_.h>
#include <Modloader/app/structs/SerializableUberSaderModifierWrapper.h>
#include <Modloader/app/structs/UberShaderModifier.h>
#endif
#undef IL2CPP_STRUCT_ModifierWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ModifierWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/ModifierWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModifierWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
