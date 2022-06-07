#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs {
    IL2CPP_REGISTER_METHOD(0x01DD9AD0, void, ctor, (app::ExceptionEventArgs * this_ptr, app::Exception * exception))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Exception *, get_Exception, (app::ExceptionEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Exception, (app::ExceptionEventArgs * this_ptr, app::Exception * value))
}
