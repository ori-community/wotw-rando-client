#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::XGamingRuntime::XUserGetTokenAndSignatureUtf16Data {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::XUserGetTokenAndSignatureUtf16Data * this_ptr, app::String * token, app::String * signature))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Token, (app::XUserGetTokenAndSignatureUtf16Data * this_ptr))
}
