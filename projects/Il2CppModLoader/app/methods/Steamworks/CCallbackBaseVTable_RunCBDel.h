#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::CCallbackBaseVTable_RunCBDel {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CCallbackBaseVTable_RunCBDel * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x012E7480, void, Invoke, (app::CCallbackBaseVTable_RunCBDel * this_ptr, void * thisptr, void * pv_param))
    IL2CPP_REGISTER_METHOD(0x015F7940, app::IAsyncResult *, BeginInvoke, (app::CCallbackBaseVTable_RunCBDel * this_ptr, void * thisptr, void * pv_param, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::CCallbackBaseVTable_RunCBDel * this_ptr, app::IAsyncResult * result))
}
