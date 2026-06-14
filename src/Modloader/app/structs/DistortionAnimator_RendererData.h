#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DistortionAnimator_RendererData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DistortionAnimator_RendererData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortionAnimator_RendererData_DEFINED)
#define IL2CPP_STRUCT_DistortionAnimator_RendererData_DEFINED
struct List_1_UberShaderProperty_Vector_;
struct List_1_DistortionAnimator_RendererData_Property_;
struct Renderer;
struct DistortionAnimator_RendererData {
    struct List_1_UberShaderProperty_Vector_* m_propertiesEnums;
    struct List_1_DistortionAnimator_RendererData_Property_* m_properties;
    struct Renderer* Renderer;
};
#endif
#if !defined(IL2CPP_STRUCT_DistortionAnimator_RendererData_FWDDECL)
#define IL2CPP_STRUCT_DistortionAnimator_RendererData_FWDDECL
#include <Modloader/app/structs/List_1_DistortionAnimator_RendererData_Property_.h>
#include <Modloader/app/structs/List_1_UberShaderProperty_Vector_.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_DistortionAnimator_RendererData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortionAnimator_RendererData_DEFINED) && !defined(IL2CPP_STRUCT_DistortionAnimator_RendererData_FWDDECL)
#include <Modloader/app/structs/DistortionAnimator_RendererData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DistortionAnimator_RendererData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
