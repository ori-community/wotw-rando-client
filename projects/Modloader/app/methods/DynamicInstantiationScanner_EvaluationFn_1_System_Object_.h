#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DynamicInstantiationScanner_EvaluationFn_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DynamicInstantiationScanner_EvaluationFn_1_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::DynamicInstantiationScanner_EvaluationFn_1_System_Object_ * this_ptr, app::Object* component, app::DynamicInstantiationScanner_EvaluationCtx** evaluation_ctx))
    IL2CPP_REGISTER_METHOD(0x019E0DB0, app::IAsyncResult*, BeginInvoke, (app::DynamicInstantiationScanner_EvaluationFn_1_System_Object_ * this_ptr, app::Object* component, app::DynamicInstantiationScanner_EvaluationCtx** evaluation_ctx, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::DynamicInstantiationScanner_EvaluationFn_1_System_Object_ * this_ptr, app::DynamicInstantiationScanner_EvaluationCtx** evaluation_ctx, app::IAsyncResult* result))
} // namespace app::classes::DynamicInstantiationScanner_EvaluationFn_1_System_Object_
