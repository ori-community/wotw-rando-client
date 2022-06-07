#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_DistortionAnimator_RendererData_Property_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_DistortionAnimator_RendererData_Property_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x029FCB60, void, Invoke, (app::Action_1_DistortionAnimator_RendererData_Property_ * this_ptr, app::DistortionAnimator_RendererData_Property obj))
    IL2CPP_REGISTER_METHOD(0x029FCFF0, app::IAsyncResult *, BeginInvoke, (app::Action_1_DistortionAnimator_RendererData_Property_ * this_ptr, app::DistortionAnimator_RendererData_Property obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_DistortionAnimator_RendererData_Property_ * this_ptr, app::IAsyncResult * result))
}
