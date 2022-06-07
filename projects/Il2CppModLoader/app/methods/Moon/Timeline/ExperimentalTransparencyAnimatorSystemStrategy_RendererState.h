#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::ExperimentalTransparencyAnimatorSystemStrategy_RendererState {
    IL2CPP_REGISTER_METHOD(0x00769CA0, void, ctor, (app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_ProcessedFrame, (app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_ProcessedFrame, (app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_HandoverAlpha, (app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00769E40, void, set_HandoverAlpha, (app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x004E5A00, bool, ContainsHandoverValue, (app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00769E60, void, InvalidateHandoverForNextFrame, (app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00769E70, void, KillInvalidHandover, (app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00769E90, bool, HasAnimatedProperties, (app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState * this_ptr))
}
