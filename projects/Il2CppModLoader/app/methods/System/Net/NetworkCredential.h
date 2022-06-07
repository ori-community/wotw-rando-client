#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::NetworkCredential {
    IL2CPP_REGISTER_METHOD(0x01E75AC0, void, ctor_1, (app::NetworkCredential * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E75B80, void, ctor_2, (app::NetworkCredential * this_ptr, app::String * user_name, app::String * password))
    IL2CPP_REGISTER_METHOD(0x01E75C50, void, ctor_3, (app::NetworkCredential * this_ptr, app::String * user_name, app::SecureString * password))
    IL2CPP_REGISTER_METHOD(0x01E75D10, void, ctor_4, (app::NetworkCredential * this_ptr, app::String * user_name, app::String * password, app::String * domain))
    IL2CPP_REGISTER_METHOD(0x01E75D60, void, ctor_5, (app::NetworkCredential * this_ptr, app::String * user_name, app::SecureString * password, app::String * domain))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_UserName, (app::NetworkCredential * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E75EE0, void, set_UserName, (app::NetworkCredential * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01E75F90, app::String *, get_Password, (app::NetworkCredential * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E75FA0, void, set_Password, (app::NetworkCredential * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01E75FC0, app::SecureString *, get_SecurePassword, (app::NetworkCredential * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E75FE0, void, set_SecurePassword, (app::NetworkCredential * this_ptr, app::SecureString * value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Domain, (app::NetworkCredential * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E76150, void, set_Domain, (app::NetworkCredential * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, InternalGetUserName, (app::NetworkCredential * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E75F90, app::String *, InternalGetPassword, (app::NetworkCredential * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::SecureString *, InternalGetSecurePassword, (app::NetworkCredential * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, InternalGetDomain, (app::NetworkCredential * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E76200, app::String *, InternalGetDomainUserName, (app::NetworkCredential * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::NetworkCredential *, GetCredential_1, (app::NetworkCredential * this_ptr, app::Uri * uri, app::String * auth_type))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::NetworkCredential *, GetCredential_2, (app::NetworkCredential * this_ptr, app::String * host, int32_t port, app::String * authentication_type))
}
