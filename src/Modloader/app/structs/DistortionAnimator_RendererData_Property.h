#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DistortionAnimator_RendererData_Property_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DistortionAnimator_RendererData_Property_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortionAnimator_RendererData_Property_DEFINED)
#include <Modloader/app/structs/UberShaderProperty_Vector__Enum.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty_Vector__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_DistortionAnimator_RendererData_Property_DEFINED
struct DistortionAnimator_RendererData_Property {
    UberShaderProperty_Vector__Enum PropertyEnum;

    struct Vector4 OriginalValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DistortionAnimator_RendererData_Property_FWDDECL)
#define IL2CPP_STRUCT_DistortionAnimator_RendererData_Property_FWDDECL
#endif
#undef IL2CPP_STRUCT_DistortionAnimator_RendererData_Property_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortionAnimator_RendererData_Property_DEFINED) && !defined(IL2CPP_STRUCT_DistortionAnimator_RendererData_Property_FWDDECL)
#include <Modloader/app/structs/DistortionAnimator_RendererData_Property.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DistortionAnimator_RendererData_Property.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
