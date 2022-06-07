#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::DataSetClearEventhandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DataSetClearEventhandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::DataSetClearEventhandler * this_ptr, app::Object * sender, app::DataTable * table))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::DataSetClearEventhandler * this_ptr, app::Object * sender, app::DataTable * table, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DataSetClearEventhandler * this_ptr, app::IAsyncResult * result))
}
