#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_2_Steamworks_UserStatsReceived_t_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02C0EF60, void, Invoke, (app::Action_2_Steamworks_UserStatsReceived_t_Boolean_ * this_ptr, app::UserStatsReceived_t arg1, bool arg2))
    IL2CPP_REGISTER_METHODINFO(0x047614E8, Action_2_Steamworks_UserStatsReceived_t_Boolean__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Steamworks_UserStatsReceived_t_Boolean_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C0F470, app::IAsyncResult *, BeginInvoke, (app::Action_2_Steamworks_UserStatsReceived_t_Boolean_ * this_ptr, app::UserStatsReceived_t arg1, bool arg2, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Steamworks_UserStatsReceived_t_Boolean_ * this_ptr, app::IAsyncResult * result))
}
