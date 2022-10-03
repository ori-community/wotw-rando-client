#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509Certificate2Collection {
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, ctor_1, (app::X509Certificate2Collection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C5C40, void, ctor_2, (app::X509Certificate2Collection * this_ptr, app::X509Certificate2Collection* certificates))
    IL2CPP_REGISTER_METHOD(0x021C5C70, app::X509Certificate2*, get_Item, (app::X509Certificate2Collection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04735DB0, X509Certificate2Collection_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021C5DC0, int32_t, Add, (app::X509Certificate2Collection * this_ptr, app::X509Certificate2* certificate))
    IL2CPP_REGISTER_METHODINFO(0x047449D8, X509Certificate2Collection_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021C5EA0, void, AddRange, (app::X509Certificate2Collection * this_ptr, app::X509Certificate2Collection* certificates))
    IL2CPP_REGISTER_METHODINFO(0x047344B0, X509Certificate2Collection_AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021C5F80, bool, Contains, (app::X509Certificate2Collection * this_ptr, app::X509Certificate2* certificate))
    IL2CPP_REGISTER_METHODINFO(0x0473FDD0, X509Certificate2Collection_Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021C61D0, app::X509Certificate2Collection*, Find, (app::X509Certificate2Collection * this_ptr, app::X509FindType__Enum find_type, app::Object* find_value, bool valid_only))
    IL2CPP_REGISTER_METHODINFO(0x0472A1B0, X509Certificate2Collection_Find__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021C7150, app::X509Certificate2Enumerator*, GetEnumerator, (app::X509Certificate2Collection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C7310, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509Certificate2Collection
