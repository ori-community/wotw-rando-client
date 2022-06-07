#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::DataColumnChangeEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DataColumnChangeEventHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::DataColumnChangeEventHandler * this_ptr, app::Object * sender, app::DataColumnChangeEventArgs * e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::DataColumnChangeEventHandler * this_ptr, app::Object * sender, app::DataColumnChangeEventArgs * e, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DataColumnChangeEventHandler * this_ptr, app::IAsyncResult * result))
}
