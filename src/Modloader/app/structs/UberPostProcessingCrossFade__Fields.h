#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostProcessingCrossFade__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostProcessingCrossFade__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcessingCrossFade__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPostProcessingCrossFade__Fields_DEFINED
struct UberPostProcessingCrossFade_CameraInformation;
struct Material;
struct RenderTexture;
struct UberPostProcess;
struct Shader;
struct UberPostProcessingCrossFade__Fields {
    struct MonoBehaviour__Fields _;
    struct UberPostProcessingCrossFade_CameraInformation* FromInfo;
    struct UberPostProcessingCrossFade_CameraInformation* ToInfo;
    float TweenTime;
    struct Material* m_mat;
    struct RenderTexture* m_buf;
    bool m_bufferBeenUsed;
    int32_t m_frameCounter;
    int32_t m_currentFrame;
    float m_lastTweenTime;
    int32_t m_nextFrame;
    bool m_toggle;
    struct UberPostProcess* m_post;
    struct Shader* CrossFadeBlend;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPostProcessingCrossFade__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPostProcessingCrossFade__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/UberPostProcess.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade_CameraInformation.h>
#endif
#undef IL2CPP_STRUCT_UberPostProcessingCrossFade__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcessingCrossFade__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPostProcessingCrossFade__Fields_FWDDECL)
#include <Modloader/app/structs/UberPostProcessingCrossFade__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostProcessingCrossFade__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
