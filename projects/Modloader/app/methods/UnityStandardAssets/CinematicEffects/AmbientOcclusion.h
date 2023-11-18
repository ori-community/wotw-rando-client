#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AmbientOcclusion.h>
#include <Modloader/app/structs/AmbientOcclusion_OcclusionSource__Enum.h>
#include <Modloader/app/structs/AmbientOcclusion_PropertyObserver.h>
#include <Modloader/app/structs/AmbientOcclusion_SampleCount__Enum.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/Shader.h>

namespace app::classes::UnityStandardAssets::CinematicEffects::AmbientOcclusion {
    IL2CPP_REGISTER_METHOD(0x024FC710, bool, get_isAmbientOnlySupported, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FC7A0, bool, get_isGBufferAvailable, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FC810, float, get_intensity, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FC830, float, get_radius, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FBA30, app::AmbientOcclusion_SampleCount__Enum, get_sampleCount, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FC8F0, int32_t, get_sampleCountValue, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FCA10, app::AmbientOcclusion_OcclusionSource__Enum, get_occlusionSource, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FCAC0, bool, get_downsampling, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FCAE0, bool, get_ambientOnly, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FCBB0, app::RenderTextureFormat__Enum, get_aoTextureFormat, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FCBE0, app::Shader*, get_aoShader, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FCCE0, app::Material*, get_aoMaterial, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FCDB0, app::CommandBuffer*, get_aoCommands, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FCF60, app::Camera*, get_targetCamera, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FCFE0, app::AmbientOcclusion_PropertyObserver, get_propertyObserver, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FD000, void, set_propertyObserver, (app::AmbientOcclusion * this_ptr, app::AmbientOcclusion_PropertyObserver value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Mesh*, get_quadMesh, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FD010, void, BuildAOCommands, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FDE80, void, ExecuteAOPass, (app::AmbientOcclusion * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x024FEA60, void, UpdateMaterialProperties, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FEE80, void, OnEnable, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FF050, void, OnDisable, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FF170, void, Update, (app::AmbientOcclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FF3D0, void, OnRenderImage, (app::AmbientOcclusion * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x024FF4C0, void, ctor, (app::AmbientOcclusion * this_ptr))
} // namespace app::classes::UnityStandardAssets::CinematicEffects::AmbientOcclusion
