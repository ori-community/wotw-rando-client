#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlendMode__Enum.h>
#include <Modloader/app/structs/BlendOp__Enum.h>
#include <Modloader/app/structs/ColorWriteMask__Enum.h>
#include <Modloader/app/structs/RenderTargetBlendState.h>
#include <Modloader/app/structs/RenderTargetBlendState__Boxed.h>

namespace app::classes::UnityEngine::Experimental::Rendering::RenderTargetBlendState {
    IL2CPP_REGISTER_METHOD(
        0x001F0E80,
        void,
        ctor,
        app::RenderTargetBlendState__Boxed* this_ptr,
        app::ColorWriteMask__Enum write_mask,
        app::BlendMode__Enum source_color_blend_mode,
        app::BlendMode__Enum destination_color_blend_mode,
        app::BlendMode__Enum source_alpha_blend_mode,
        app::BlendMode__Enum destination_alpha_blend_mode,
        app::BlendOp__Enum color_blend_operation,
        app::BlendOp__Enum alpha_blend_operation
    )
    IL2CPP_REGISTER_METHOD(0x02523FA0, app::RenderTargetBlendState, get_Default, )
} // namespace app::classes::UnityEngine::Experimental::Rendering::RenderTargetBlendState
