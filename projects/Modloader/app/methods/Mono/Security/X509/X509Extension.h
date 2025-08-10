#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ASN1.h>
#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/X509Extension.h>
#include <Modloader/app/structs/X509Extension_2.h>

namespace app::classes::Mono::Security::X509::X509Extension {
    IL2CPP_REGISTER_METHOD(0x02285E50, void, ctor_1, app::X509Extension* this_ptr, app::ASN1* asn1)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Decode_1, app::X509Extension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02286270, bool, Equals_1, app::X509Extension* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode_1, app::X509Extension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02286460, void, WriteLine_1, app::X509Extension* this_ptr, app::StringBuilder* sb, int32_t n, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x022866E0, app::String*, ToString_1, app::X509Extension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C8740, void, ctor_2, app::X509Extension_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03165450, void, ctor_3, app::X509Extension_2* this_ptr, app::ASN1_1* asn1)
    IL2CPP_REGISTER_METHOD(0x03165870, void, ctor_4, app::X509Extension_2* this_ptr, app::X509Extension_2* extension)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Decode_2, app::X509Extension_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Encode, app::X509Extension_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03165A00, app::ASN1_1*, get_ASN1, app::X509Extension_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Oid, app::X509Extension_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Critical, app::X509Extension_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_Critical, app::X509Extension_2* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, app::X509Extension_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03165CB0, app::ASN1_1*, get_Value, app::X509Extension_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03165CE0, bool, Equals_2, app::X509Extension_2* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x03165ED0, app::Byte__Array*, GetBytes, app::X509Extension_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode_2, app::X509Extension_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03165F00, void, WriteLine_2, app::X509Extension_2* this_ptr, app::StringBuilder* sb, int32_t n, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x03166180, app::String*, ToString_2, app::X509Extension_2* this_ptr)
} // namespace app::classes::Mono::Security::X509::X509Extension
