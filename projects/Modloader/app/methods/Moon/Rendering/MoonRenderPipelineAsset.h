#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/IRenderPipeline.h>
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_ClearSceneRT__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DofBlurType__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_XboxResolution__Enum.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineAsset {
    IL2CPP_REGISTER_METHOD(0x007929C0, app::IRenderPipeline*, InternalCreatePipeline, app::MoonRenderPipelineAsset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00792B10, void, CopyImportantProps, app::MoonRenderPipelineAsset* this_ptr, app::MoonRenderPipelineAsset* src)
    IL2CPP_REGISTER_METHOD(0x00792C10, app::Int2, getResolution, app::MoonRenderPipelineAsset_XboxResolution__Enum resolution, app::Camera* camera)
    IL2CPP_REGISTER_METHOD(0x00792E10, app::Int2, getSceneResolution, app::MoonRenderPipelineAsset* this_ptr, app::Camera* camera)
    IL2CPP_REGISTER_METHOD(0x00792EF0, app::Int2, getUIResolution, app::MoonRenderPipelineAsset* this_ptr, app::Camera* camera)
    IL2CPP_REGISTER_METHOD(0x00792FD0, app::RenderTextureFormat__Enum, getFrameBufferFormat, app::MoonRenderPipelineAsset* this_ptr, app::Camera* camera)
    IL2CPP_REGISTER_METHOD(
        0x00793130,
        app::Color,
        getClearColor,
        app::MoonRenderPipelineAsset* this_ptr,
        app::MoonRenderPipelineAsset_ClearSceneRT__Enum color,
        app::Camera* camera
    )
    IL2CPP_REGISTER_METHOD(0x007932D0, app::Color, getSceneClearColor, app::MoonRenderPipelineAsset* this_ptr, app::Camera* camera)
    IL2CPP_REGISTER_METHOD(0x00793310, void, ApplyFxaaQualityLevel, app::MoonRenderPipelineAsset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00793400, void, setBlurType, app::MoonRenderPipelineAsset* this_ptr, app::MoonRenderPipelineAsset_DofBlurType__Enum type)
    IL2CPP_REGISTER_METHOD(0x00793410, void, CopySerializedPropertiesTo, app::MoonRenderPipelineAsset* this_ptr, app::MoonRenderPipelineAsset* target)
    IL2CPP_REGISTER_METHOD(0x007935D0, void, ctor, app::MoonRenderPipelineAsset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00793F20, void, cctor, )
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineAsset
