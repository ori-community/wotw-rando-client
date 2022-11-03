#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Action_1_Steamworks_UserStatsStored_t_ {
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::Action_1_Steamworks_UserStatsStored_t_ * this_ptr, app::UserStatsStored_t obj))
    IL2CPP_REGISTER_METHODINFO(0x04727468, Action_1_Steamworks_UserStatsStored_t__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Steamworks_UserStatsStored_t_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047815E8, Action_1_Steamworks_UserStatsStored_t___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A043A0, app::IAsyncResult*, BeginInvoke, (app::Action_1_Steamworks_UserStatsStored_t_ * this_ptr, app::UserStatsStored_t obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Steamworks_UserStatsStored_t_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_Steamworks_UserStatsStored_t_
