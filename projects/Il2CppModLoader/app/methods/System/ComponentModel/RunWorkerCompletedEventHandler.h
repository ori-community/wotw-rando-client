#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::RunWorkerCompletedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::RunWorkerCompletedEventHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::RunWorkerCompletedEventHandler * this_ptr, app::Object * sender, app::RunWorkerCompletedEventArgs * e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::RunWorkerCompletedEventHandler * this_ptr, app::Object * sender, app::RunWorkerCompletedEventArgs * e, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::RunWorkerCompletedEventHandler * this_ptr, app::IAsyncResult * result))
}
