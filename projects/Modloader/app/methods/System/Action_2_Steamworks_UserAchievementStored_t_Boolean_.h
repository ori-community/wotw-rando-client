#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Steamworks_UserAchievementStored_t_Boolean_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UserAchievementStored_t.h>

namespace app::classes::System::Action_2_Steamworks_UserAchievementStored_t_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02C0E990, void, Invoke, (app::Action_2_Steamworks_UserAchievementStored_t_Boolean_ * this_ptr, app::UserAchievementStored_t arg1, bool arg2))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Steamworks_UserAchievementStored_t_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C0EE80, app::IAsyncResult*, BeginInvoke, (app::Action_2_Steamworks_UserAchievementStored_t_Boolean_ * this_ptr, app::UserAchievementStored_t arg1, bool arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Steamworks_UserAchievementStored_t_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_2_Steamworks_UserAchievementStored_t_Boolean_
