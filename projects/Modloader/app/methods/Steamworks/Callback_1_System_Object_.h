#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Steamworks::Callback_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D1A5D0, void, add_m_Func, (app::Callback_1_System_Object_ * this_ptr, app::Callback_1_T_DispatchDelegate_System_Object_* value))
    IL2CPP_REGISTER_METHOD(0x01D1A690, void, remove_m_Func, (app::Callback_1_System_Object_ * this_ptr, app::Callback_1_T_DispatchDelegate_System_Object_* value))
    IL2CPP_REGISTER_METHOD(0x01D1BAA0, app::Callback_1_System_Object_*, Create, (app::Callback_1_T_DispatchDelegate_System_Object_ * func))
    IL2CPP_REGISTER_METHOD(0x01D1BC00, app::Callback_1_System_Object_*, CreateGameServer, (app::Callback_1_T_DispatchDelegate_System_Object_ * func))
    IL2CPP_REGISTER_METHOD(0x01D1BD60, void, ctor, (app::Callback_1_System_Object_ * this_ptr, app::Callback_1_T_DispatchDelegate_System_Object_* func, bool b_game_server))
    IL2CPP_REGISTER_METHOD(0x01D1BF70, void, Finalize, (app::Callback_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D1C020, void, Dispose, (app::Callback_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D1C130, void, Register, (app::Callback_1_System_Object_ * this_ptr, app::Callback_1_T_DispatchDelegate_System_Object_* func))
    IL2CPP_REGISTER_METHODINFO(0x04742F70, Callback_1_System_Object__Register__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D1C2A0, void, Unregister, (app::Callback_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D1B050, void, SetGameserverFlag, (app::Callback_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D1C2C0, void, OnRunCallback, (app::Callback_1_System_Object_ * this_ptr, void* thisptr, void* pv_param))
    IL2CPP_REGISTER_METHOD(0x01D1C450, void, OnRunCallResult, (app::Callback_1_System_Object_ * this_ptr, void* thisptr, void* pv_param, bool b_failed, uint64_t h_steam_a_p_i_call))
    IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, OnGetCallbackSizeBytes, (app::Callback_1_System_Object_ * this_ptr, void* thisptr))
    IL2CPP_REGISTER_METHOD(0x01D1C5E0, void, BuildCCallbackBase, (app::Callback_1_System_Object_ * this_ptr))
} // namespace app::classes::Steamworks::Callback_1_System_Object_
