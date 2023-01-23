#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializableUberSaderModifierWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializableUberSaderModifierWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializableUberSaderModifierWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializableUberSaderModifierWrapper__Fields_DEFINED
struct UberShaderModifier;
struct HashSet_1_Moon_ArtOptimization_Sample_;
struct List_1_System_Single_;
struct __declspec(align(8)) SerializableUberSaderModifierWrapper__Fields {
    int32_t Id;
    float Energy;
    float MaxEnergy;
    struct UberShaderModifier* Modifier;
    struct HashSet_1_Moon_ArtOptimization_Sample_* Samples;
    struct List_1_System_Single_* SamplesEnergy;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializableUberSaderModifierWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializableUberSaderModifierWrapper__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_Moon_ArtOptimization_Sample_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/UberShaderModifier.h>
#endif
#undef IL2CPP_STRUCT_SerializableUberSaderModifierWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializableUberSaderModifierWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializableUberSaderModifierWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/SerializableUberSaderModifierWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializableUberSaderModifierWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
