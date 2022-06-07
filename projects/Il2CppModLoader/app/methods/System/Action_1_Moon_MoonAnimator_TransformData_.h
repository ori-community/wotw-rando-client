#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_Moon_MoonAnimator_TransformData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Moon_MoonAnimator_TransformData_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02A00490, void, Invoke, (app::Action_1_Moon_MoonAnimator_TransformData_ * this_ptr, app::MoonAnimator_TransformData obj))
    IL2CPP_REGISTER_METHOD(0x02A00A70, app::IAsyncResult *, BeginInvoke, (app::Action_1_Moon_MoonAnimator_TransformData_ * this_ptr, app::MoonAnimator_TransformData obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Moon_MoonAnimator_TransformData_ * this_ptr, app::IAsyncResult * result))
}
