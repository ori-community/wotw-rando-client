#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FXAA_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FXAA_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_1__Fields_DEFINED)
#include <Modloader/app/structs/FXAA_Mode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FXAA_Mode__Enum_DEFINED)
#define IL2CPP_STRUCT_FXAA_1__Fields_DEFINED
struct ComputeShader;
struct RenderTarget;
struct RenderTexture;
struct ComputeBuffer;
struct Single__Array;
struct FXAA_1__Fields {
    struct MonoBehaviour__Fields _;
    FXAA_Mode__Enum RenderMode;

    float ContrastThreshold;
    float SubPixelRemoval;
    struct ComputeShader* Pass1;
    struct ComputeShader* Pass2Horizontal;
    struct ComputeShader* Pass2Vertical;
    struct ComputeShader* Resolve;
    struct RenderTarget* tempFinalOutput;
    struct RenderTarget* tempLuma;
    struct RenderTexture* m_finalOutputRenderTexture;
    struct RenderTexture* m_lumaRenderTexture;
    struct ComputeBuffer* m_HWorkComputeBuffer;
    struct ComputeBuffer* m_VWorkComputeBuffer;
    struct ComputeBuffer* m_indirectParamsComputeBuffer;
    struct Single__Array* m_reciprocalScreenSize;
    int32_t m_prevScreenWidth;
    int32_t m_prevScreenHeight;
    float m_prevContrastThreshold;
    float m_prevSubPixelRemoval;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FXAA_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_FXAA_1__Fields_FWDDECL
#include <Modloader/app/structs/ComputeBuffer.h>
#include <Modloader/app/structs/ComputeShader.h>
#include <Modloader/app/structs/RenderTarget.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_FXAA_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FXAA_1__Fields_FWDDECL)
#include <Modloader/app/structs/FXAA_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FXAA_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
