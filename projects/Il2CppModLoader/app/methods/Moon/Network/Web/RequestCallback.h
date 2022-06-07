#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Network::Web::RequestCallback {
    IL2CPP_REGISTER_METHOD(0x02E97F50, void, SetResponse, (app::RequestCallback * this_ptr, app::WebResponse_1 * response))
    IL2CPP_REGISTER_METHOD(0x02E98040, void, SetDataWriter, (app::RequestCallback * this_ptr, app::IDataWriter * data_writer))
    IL2CPP_REGISTER_METHOD(0x01DAE080, app::Byte__Array *, get_Data, (app::RequestCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E980F0, app::String *, get_DataAsText, (app::RequestCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::WebResponse_1 *, get_Response, (app::RequestCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IRequest *, get_Request, (app::RequestCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Request, (app::RequestCallback * this_ptr, app::IRequest * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RequestCallback * this_ptr))
}
