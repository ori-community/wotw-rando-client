#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrailModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrailModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrailModifier__Fields_DEFINED)
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_MeshTrailModifier__Fields_DEFINED
struct MeshTrail;
struct MeshRenderer;
struct MeshTrailModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct MeshTrail* MeshTrail;
    struct MeshRenderer* MeshRenderer;
    SuspendableMask__Enum _Mask_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshTrailModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeshTrailModifier__Fields_FWDDECL
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/MeshTrail.h>
#endif
#undef IL2CPP_STRUCT_MeshTrailModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrailModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrailModifier__Fields_FWDDECL)
#include <Modloader/app/structs/MeshTrailModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrailModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
