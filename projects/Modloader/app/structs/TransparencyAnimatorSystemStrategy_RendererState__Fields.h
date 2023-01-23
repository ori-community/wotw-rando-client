#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransparencyAnimatorSystemStrategy_RendererState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransparencyAnimatorSystemStrategy_RendererState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyAnimatorSystemStrategy_RendererState__Fields_DEFINED)
#include <Modloader/app/structs/HandoverMode__Enum.h>
#include <Modloader/app/structs/TransparencyMode__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty_Color__Enum_DEFINED) && defined(IL2CPP_STRUCT_HandoverMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_TransparencyMode__Enum_DEFINED)
#define IL2CPP_STRUCT_TransparencyAnimatorSystemStrategy_RendererState__Fields_DEFINED
struct Renderer;
struct List_1_System_Single_;
struct List_1_System_Boolean_;
struct __declspec(align(8)) TransparencyAnimatorSystemStrategy_RendererState__Fields {
    UberShaderProperty_Color__Enum ColorProperty;

    int32_t InstanceID;
    struct Renderer* Renderer;
    float OriginalAlpha;
    struct List_1_System_Single_* Requests;
    struct List_1_System_Boolean_* RequestPersistance;
    HandoverMode__Enum LastHandoverMode;

    TransparencyMode__Enum LastTransparencyMode;

    float m_handoverAlpha;
    bool m_hasValidAlphaHandover;
    float _LastAlphaApplied_k__BackingField;
    int32_t _ProcessedFrame_k__BackingField;
    bool HasImportantRequest;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransparencyAnimatorSystemStrategy_RendererState__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransparencyAnimatorSystemStrategy_RendererState__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Boolean_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_TransparencyAnimatorSystemStrategy_RendererState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyAnimatorSystemStrategy_RendererState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransparencyAnimatorSystemStrategy_RendererState__Fields_FWDDECL)
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_RendererState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_RendererState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
