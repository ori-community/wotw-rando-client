#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Events::UnityAction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityAction * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::UnityAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::UnityAction * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityAction * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Events::UnityAction
