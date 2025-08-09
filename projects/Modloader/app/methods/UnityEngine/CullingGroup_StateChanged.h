#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/CullingGroupEvent.h>
#include <Modloader/app/structs/CullingGroup_StateChanged.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::CullingGroup_StateChanged {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::CullingGroup_StateChanged* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01D253C0, void, Invoke, app::CullingGroup_StateChanged* this_ptr, app::CullingGroupEvent sphere)
    IL2CPP_REGISTER_METHOD(
        0x0242BAB0,
        app::IAsyncResult*,
        BeginInvoke,
        app::CullingGroup_StateChanged* this_ptr,
        app::CullingGroupEvent sphere,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::CullingGroup_StateChanged* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::CullingGroup_StateChanged
