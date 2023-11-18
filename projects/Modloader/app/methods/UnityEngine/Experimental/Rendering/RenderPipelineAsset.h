#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RenderPipelineAsset.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Experimental_Rendering_IRenderPipeline_.h>
#include <Modloader/app/structs/IRenderPipeline.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::UnityEngine::Experimental::Rendering::RenderPipelineAsset {
    IL2CPP_REGISTER_METHOD(0x024349E0, void, ctor, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02434B40, void, DestroyCreatedInstances, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02434D40, app::IRenderPipeline*, CreatePipeline, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::String__Array*, GetRenderingLayerMaskNames, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::String__Array*, GetCullingCategoryNames, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Material*, GetDefaultMaterial, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Shader*, GetAutodeskInteractiveShader, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Shader*, GetAutodeskInteractiveTransparentShader, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Shader*, GetAutodeskInteractiveMaskedShader, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Material*, GetDefaultParticleMaterial, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Material*, GetDefaultLineMaterial, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Material*, GetDefaultTerrainMaterial, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Material*, GetDefaultUIMaterial, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Material*, GetDefaultUIOverdrawMaterial, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Material*, GetDefaultUIETC1SupportedMaterial, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Material*, GetDefault2DMaterial, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Shader*, GetDefaultShader, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25880, app::IEnumerable_1_UnityEngine_Experimental_Rendering_IRenderPipeline_*, CreatedInstances, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02434E00, void, OnValidate, (app::RenderPipelineAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02434E00, void, OnDisable, (app::RenderPipelineAsset * this_ptr))
} // namespace app::classes::UnityEngine::Experimental::Rendering::RenderPipelineAsset
