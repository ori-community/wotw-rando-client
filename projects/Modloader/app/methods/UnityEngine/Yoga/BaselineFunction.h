#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BaselineFunction.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/YogaNode.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::UnityEngine::Yoga::BaselineFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BaselineFunction * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x031BD4F0, float, Invoke, (app::BaselineFunction * this_ptr, app::YogaNode* node, float width, float height))
    IL2CPP_REGISTER_METHOD(0x031BDAC0, app::IAsyncResult*, BeginInvoke, (app::BaselineFunction * this_ptr, app::YogaNode* node, float width, float height, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, (app::BaselineFunction * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Yoga::BaselineFunction
