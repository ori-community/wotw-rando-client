#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ConsoleCancelEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ConsoleCancelEventHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::ConsoleCancelEventHandler * this_ptr, app::Object * sender, app::ConsoleCancelEventArgs * e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::ConsoleCancelEventHandler * this_ptr, app::Object * sender, app::ConsoleCancelEventArgs * e, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ConsoleCancelEventHandler * this_ptr, app::IAsyncResult * result))
}
