#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0476CA68, Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02882470, bool, Invoke, (app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_ * this_ptr, app::SceneLoadingQueue_QueueSceneToLoad arg))
    IL2CPP_REGISTER_METHOD(0x02F9D930, app::IAsyncResult*, BeginInvoke, (app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_ * this_ptr, app::SceneLoadingQueue_QueueSceneToLoad arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_
