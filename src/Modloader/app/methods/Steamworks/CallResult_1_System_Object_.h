#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallResult_1_System_Object_.h>
#include <Modloader/app/structs/CallResult_1_T_APIDispatchDelegate_System_Object_.h>
#include <Modloader/app/structs/SteamAPICall_t.h>

namespace app::classes::Steamworks::CallResult_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::SteamAPICall_t, get_Handle, app::CallResult_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D1A5D0,
        void,
        add_m_Func,
        app::CallResult_1_System_Object_* this_ptr,
        app::CallResult_1_T_APIDispatchDelegate_System_Object_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x01D1A690,
        void,
        remove_m_Func,
        app::CallResult_1_System_Object_* this_ptr,
        app::CallResult_1_T_APIDispatchDelegate_System_Object_* value
    )
    IL2CPP_REGISTER_METHOD(0x01D1A750, app::CallResult_1_System_Object_*, Create, app::CallResult_1_T_APIDispatchDelegate_System_Object_* func)
    IL2CPP_REGISTER_METHOD(0x01D1A8B0, void, ctor, app::CallResult_1_System_Object_* this_ptr, app::CallResult_1_T_APIDispatchDelegate_System_Object_* func)
    IL2CPP_REGISTER_METHOD(0x01D1AAD0, void, Finalize, app::CallResult_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D1AB80, void, Dispose, app::CallResult_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D1AC90,
        void,
        Set,
        app::CallResult_1_System_Object_* this_ptr,
        app::SteamAPICall_t h_a_p_i_call,
        app::CallResult_1_T_APIDispatchDelegate_System_Object_* func
    )
    IL2CPP_REGISTER_METHOD(0x01D1AE70, bool, IsActive, app::CallResult_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D1AF30, void, Cancel, app::CallResult_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D1B050, void, SetGameserverFlag, app::CallResult_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D1B070, void, OnRunCallback, app::CallResult_1_System_Object_* this_ptr, void* thisptr, void* pv_param)
    IL2CPP_REGISTER_METHOD(
        0x01D1B230,
        void,
        OnRunCallResult,
        app::CallResult_1_System_Object_* this_ptr,
        void* thisptr,
        void* pv_param,
        bool b_failed,
        uint64_t h_steam_a_p_i_call_
    )
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, OnGetCallbackSizeBytes, app::CallResult_1_System_Object_* this_ptr, void* thisptr)
    IL2CPP_REGISTER_METHOD(0x01D1B430, void, BuildCCallbackBase, app::CallResult_1_System_Object_* this_ptr)
} // namespace app::classes::Steamworks::CallResult_1_System_Object_
