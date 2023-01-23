#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UIVertex.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Action_1_UnityEngine_UIVertex_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_UIVertex_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C0C830, void, Invoke, (app::Action_1_UnityEngine_UIVertex_ * this_ptr, app::UIVertex obj))
    IL2CPP_REGISTER_METHOD(0x02C0CEF0, app::IAsyncResult*, BeginInvoke, (app::Action_1_UnityEngine_UIVertex_ * this_ptr, app::UIVertex obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_UIVertex_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_UnityEngine_UIVertex_
