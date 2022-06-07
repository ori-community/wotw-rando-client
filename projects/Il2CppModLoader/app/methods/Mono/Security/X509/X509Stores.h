#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::X509::X509Stores {
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor, (app::X509Stores * this_ptr, app::String * path, bool new_format))
    IL2CPP_REGISTER_METHOD(0x0316B060, app::X509Store_1 *, get_Personal, (app::X509Stores * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316B1F0, app::X509Store_1 *, get_OtherPeople, (app::X509Stores * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316B380, app::X509Store_1 *, get_IntermediateCA, (app::X509Stores * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316B520, app::X509Store_1 *, get_TrustedRoot, (app::X509Stores * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316B6C0, app::X509Store_1 *, get_Untrusted, (app::X509Stores * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316B860, void, Clear, (app::X509Stores * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316B990, app::X509Store_1 *, Open, (app::X509Stores * this_ptr, app::String * store_name, bool create))
    IL2CPP_REGISTER_METHODINFO(0x0475E370, X509Stores_Open__MethodInfo)
}
