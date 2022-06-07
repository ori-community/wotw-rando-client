#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0470CAE0, Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_ * this_ptr, app::UberPoolGroupWarmer_PrewarmItem arg))
    IL2CPP_REGISTER_METHOD(0x02FA2610, app::IAsyncResult *, BeginInvoke, (app::Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_ * this_ptr, app::UberPoolGroupWarmer_PrewarmItem arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_ * this_ptr, app::IAsyncResult * result))
}
