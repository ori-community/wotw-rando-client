#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_Request.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x029FD8B0, void, Invoke, (app::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ * this_ptr, app::ExperimentalTransparencyAnimatorSystemStrategy_Request obj))
    IL2CPP_REGISTER_METHOD(0x02A010D0, app::IAsyncResult*, BeginInvoke, (app::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ * this_ptr, app::ExperimentalTransparencyAnimatorSystemStrategy_Request obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_
