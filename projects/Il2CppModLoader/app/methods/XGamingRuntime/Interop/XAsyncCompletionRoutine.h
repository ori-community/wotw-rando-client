#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::XGamingRuntime::Interop::XAsyncCompletionRoutine {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XAsyncCompletionRoutine * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01D253C0, void, Invoke, (app::XAsyncCompletionRoutine * this_ptr, app::XAsyncBlockPtr async_block))
    IL2CPP_REGISTER_METHOD(0x030B1820, app::IAsyncResult *, BeginInvoke, (app::XAsyncCompletionRoutine * this_ptr, app::XAsyncBlockPtr async_block, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XAsyncCompletionRoutine * this_ptr, app::IAsyncResult * result))
}
