#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_Request.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0288E680, bool, Invoke, (app::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ * this_ptr, app::ExperimentalTransparencyAnimatorSystemStrategy_Request obj))
    IL2CPP_REGISTER_METHOD(0x02892170, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ * this_ptr, app::ExperimentalTransparencyAnimatorSystemStrategy_Request obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_
