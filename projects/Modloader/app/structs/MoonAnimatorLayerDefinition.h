#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimatorLayerDefinition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimatorLayerDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorLayerDefinition_DEFINED)
#include <Modloader/app/structs/MoonAnimatorLayerBlendingMode__Enum.h>
#include <Modloader/app/structs/MoonAnimatorLayerName.h>
#if defined(IL2CPP_STRUCT_MoonAnimatorLayerName_DEFINED) && defined(IL2CPP_STRUCT_MoonAnimatorLayerBlendingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonAnimatorLayerDefinition_DEFINED
struct AvatarMask;
struct MoonAnimatorLayerDefinition {
    struct MoonAnimatorLayerName Name;
    MoonAnimatorLayerBlendingMode__Enum BlendMode;

    struct AvatarMask* Mask_1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimatorLayerDefinition_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimatorLayerDefinition_FWDDECL
#include <Modloader/app/structs/AvatarMask.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimatorLayerDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorLayerDefinition_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimatorLayerDefinition_FWDDECL)
#include <Modloader/app/structs/MoonAnimatorLayerDefinition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimatorLayerDefinition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
