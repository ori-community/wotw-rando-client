#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (app::AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean_ * this_ptr, int32_t* obj1, int32_t* obj2))
    IL2CPP_REGISTER_METHODINFO(0x0477CDE0, AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04702888, AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7150, app::IAsyncResult*, BeginInvoke, (app::AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean_ * this_ptr, int32_t* obj1, int32_t* obj2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean_ * this_ptr, int32_t* obj1, int32_t* obj2, app::IAsyncResult* result))
} // namespace app::classes::AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean_
