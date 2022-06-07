#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WwiseHooksProcessing {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WwiseHooksProcessing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7DA50, void, cctor, ())
}
