#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::Design::CheckoutException {
    IL2CPP_REGISTER_METHOD(0x01A94260, void, ctor_1, (app::CheckoutException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A93D50, void, ctor_2, (app::CheckoutException * this_ptr, app::String* message, int32_t error_code))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::CheckoutException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01FE3200, void, cctor, ())
} // namespace app::classes::System::ComponentModel::Design::CheckoutException
