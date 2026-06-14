#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonRenderPipelineAsset_ConfigurableOn__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_UserConfigurable.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineAsset_UserConfigurable {
    IL2CPP_REGISTER_METHOD(
        0x002FC6E0,
        void,
        ctor,
        app::MoonRenderPipelineAsset_UserConfigurable* this_ptr,
        app::MoonRenderPipelineAsset_ConfigurableOn__Enum platforms
    )
}
