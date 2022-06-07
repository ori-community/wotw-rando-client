#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::CspParameters {
    IL2CPP_REGISTER_METHOD(0x005C3FF0, app::CspProviderFlags__Enum, get_Flags, (app::CspParameters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D0460, void, set_Flags, (app::CspParameters * this_ptr, app::CspProviderFlags__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x04715C68, CspParameters_set_Flags__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::CryptoKeySecurity *, get_CryptoKeySecurity, (app::CspParameters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_CryptoKeySecurity, (app::CspParameters * this_ptr, app::CryptoKeySecurity * value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::SecureString *, get_KeyPassword, (app::CspParameters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D0580, void, set_KeyPassword, (app::CspParameters * this_ptr, app::SecureString * value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, void *, get_ParentWindowHandle, (app::CspParameters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D0630, void, set_ParentWindowHandle, (app::CspParameters * this_ptr, void * value))
    IL2CPP_REGISTER_METHOD(0x020D0640, void, ctor_1, (app::CspParameters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D0670, void, ctor_2, (app::CspParameters * this_ptr, int32_t dw_type_in))
    IL2CPP_REGISTER_METHOD(0x020D0690, void, ctor_3, (app::CspParameters * this_ptr, int32_t dw_type_in, app::String * str_provider_name_in))
    IL2CPP_REGISTER_METHOD(0x020D06B0, void, ctor_4, (app::CspParameters * this_ptr, int32_t dw_type_in, app::String * str_provider_name_in, app::String * str_container_name_in))
    IL2CPP_REGISTER_METHOD(0x020D06D0, void, ctor_5, (app::CspParameters * this_ptr, int32_t provider_type, app::String * provider_name, app::String * key_container_name, app::CryptoKeySecurity * crypto_key_security, app::SecureString * key_password))
    IL2CPP_REGISTER_METHOD(0x020D0710, void, ctor_6, (app::CspParameters * this_ptr, int32_t provider_type, app::String * provider_name, app::String * key_container_name, app::CryptoKeySecurity * crypto_key_security, void * parent_window_handle))
    IL2CPP_REGISTER_METHOD(0x020D0750, void, ctor_7, (app::CspParameters * this_ptr, int32_t provider_type, app::String * provider_name, app::String * key_container_name, app::CspProviderFlags__Enum flags))
    IL2CPP_REGISTER_METHOD(0x020D0770, void, ctor_8, (app::CspParameters * this_ptr, app::CspParameters * parameters))
}
