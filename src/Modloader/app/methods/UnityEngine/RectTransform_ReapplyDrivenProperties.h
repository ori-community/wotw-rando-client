#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/RectTransform_ReapplyDrivenProperties.h>

namespace app::classes::UnityEngine::RectTransform_ReapplyDrivenProperties {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::RectTransform_ReapplyDrivenProperties* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, app::RectTransform_ReapplyDrivenProperties* this_ptr, app::RectTransform* driven)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::RectTransform_ReapplyDrivenProperties* this_ptr,
        app::RectTransform* driven,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::RectTransform_ReapplyDrivenProperties* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::RectTransform_ReapplyDrivenProperties
