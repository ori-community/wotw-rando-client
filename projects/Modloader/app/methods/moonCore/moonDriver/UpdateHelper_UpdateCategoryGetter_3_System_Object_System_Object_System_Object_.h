#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateHelper_UpdateCategoryGetter_3_System_Object_System_Object_System_Object_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::moonCore::moonDriver::UpdateHelper_UpdateCategoryGetter_3_System_Object_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UpdateHelper_UpdateCategoryGetter_3_System_Object_System_Object_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01434D20, app::Object*, Invoke, (app::UpdateHelper_UpdateCategoryGetter_3_System_Object_System_Object_System_Object_ * this_ptr, app::Object* arg1, app::Object** arg2))
    IL2CPP_REGISTER_METHOD(0x019E0DB0, app::IAsyncResult*, BeginInvoke, (app::UpdateHelper_UpdateCategoryGetter_3_System_Object_System_Object_System_Object_ * this_ptr, app::Object* arg1, app::Object** arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0289DBF0, app::Object*, EndInvoke, (app::UpdateHelper_UpdateCategoryGetter_3_System_Object_System_Object_System_Object_ * this_ptr, app::Object** arg2, app::IAsyncResult* result))
} // namespace app::classes::moonCore::moonDriver::UpdateHelper_UpdateCategoryGetter_3_System_Object_System_Object_System_Object_
