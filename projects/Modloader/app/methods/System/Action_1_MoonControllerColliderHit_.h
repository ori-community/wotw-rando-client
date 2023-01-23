#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_MoonControllerColliderHit_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Action_1_MoonControllerColliderHit_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_MoonControllerColliderHit_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04779CC8, Action_1_MoonControllerColliderHit___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A02340, void, Invoke, (app::Action_1_MoonControllerColliderHit_ * this_ptr, app::MoonControllerColliderHit obj))
    IL2CPP_REGISTER_METHODINFO(0x04745318, Action_1_MoonControllerColliderHit__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A02F70, app::IAsyncResult*, BeginInvoke, (app::Action_1_MoonControllerColliderHit_ * this_ptr, app::MoonControllerColliderHit obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_MoonControllerColliderHit_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_MoonControllerColliderHit_
