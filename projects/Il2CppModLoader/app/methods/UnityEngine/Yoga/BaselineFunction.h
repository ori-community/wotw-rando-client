#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Yoga::BaselineFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BaselineFunction * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x031BD4F0, float, Invoke, (app::BaselineFunction * this_ptr, app::YogaNode * node, float width, float height))
    IL2CPP_REGISTER_METHOD(0x031BDAC0, app::IAsyncResult *, BeginInvoke, (app::BaselineFunction * this_ptr, app::YogaNode * node, float width, float height, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, (app::BaselineFunction * this_ptr, app::IAsyncResult * result))
}
