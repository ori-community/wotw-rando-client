#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::fsConverterRegistrar {
    IL2CPP_REGISTER_METHOD(0x015098E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsConverterRegistrar * this_ptr))
}
