#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SwaggerComunicator {
    IL2CPP_REGISTER_METHOD(0x02EA2BB0, app::SwaggerComunicator *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02EA2D90, void, Send, (app::SwaggerComunicator * this_ptr, app::IRequest * request))
    IL2CPP_REGISTER_METHOD(0x02EA3230, app::String *, get_WebServerUrl, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SwaggerComunicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EA3330, void, cctor, ())
}
