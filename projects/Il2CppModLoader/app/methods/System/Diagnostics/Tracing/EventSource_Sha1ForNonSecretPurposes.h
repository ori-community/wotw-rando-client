#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventSource_Sha1ForNonSecretPurposes {
    IL2CPP_REGISTER_METHOD(0x00154C30, void, Start, (app::EventSource_Sha1ForNonSecretPurposes__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00154C40, void, Append_1, (app::EventSource_Sha1ForNonSecretPurposes__Boxed * this_ptr, uint8_t input))
    IL2CPP_REGISTER_METHOD(0x00154C50, void, Append_2, (app::EventSource_Sha1ForNonSecretPurposes__Boxed * this_ptr, app::Byte__Array * input))
    IL2CPP_REGISTER_METHOD(0x00154C60, void, Finish, (app::EventSource_Sha1ForNonSecretPurposes__Boxed * this_ptr, app::Byte__Array * output))
    IL2CPP_REGISTER_METHOD(0x00154C70, void, Drain, (app::EventSource_Sha1ForNonSecretPurposes__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019FD330, uint32_t, Rol1, (uint32_t input))
    IL2CPP_REGISTER_METHOD(0x019FD340, uint32_t, Rol5, (uint32_t input))
    IL2CPP_REGISTER_METHOD(0x019FD350, uint32_t, Rol30, (uint32_t input))
}
