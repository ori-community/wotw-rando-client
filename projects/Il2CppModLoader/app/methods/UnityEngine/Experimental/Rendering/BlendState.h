#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::Rendering::BlendState {
    IL2CPP_REGISTER_METHOD(0x001EC6F0, void, ctor, (app::BlendState__Boxed * this_ptr, bool separate_m_r_t_blend, bool alpha_to_mask))
    IL2CPP_REGISTER_METHOD(0x02432C00, app::BlendState, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_blendState0, (app::BlendState__Boxed * this_ptr, app::RenderTargetBlendState value))
    IL2CPP_REGISTER_METHOD(0x0010D3A0, void, set_blendState1, (app::BlendState__Boxed * this_ptr, app::RenderTargetBlendState value))
    IL2CPP_REGISTER_METHOD(0x0010D3B0, void, set_blendState2, (app::BlendState__Boxed * this_ptr, app::RenderTargetBlendState value))
    IL2CPP_REGISTER_METHOD(0x0010D3C0, void, set_blendState3, (app::BlendState__Boxed * this_ptr, app::RenderTargetBlendState value))
} // namespace app::classes::UnityEngine::Experimental::Rendering::BlendState
