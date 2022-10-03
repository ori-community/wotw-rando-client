#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Security::X509::X520_AttributeTypeAndValue {
    IL2CPP_REGISTER_METHOD(0x0316BB70, void, ctor_1, (app::X520_AttributeTypeAndValue * this_ptr, app::String* oid, int32_t upper_bound))
    IL2CPP_REGISTER_METHOD(0x0316BB80, void, ctor_2, (app::X520_AttributeTypeAndValue * this_ptr, app::String* oid, int32_t upper_bound, uint8_t encoding))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Value, (app::X520_AttributeTypeAndValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316BB90, void, set_Value, (app::X520_AttributeTypeAndValue * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0477EBA8, X520_AttributeTypeAndValue_set_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0316BC90, app::ASN1_1*, get_ASN1, (app::X520_AttributeTypeAndValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316BCA0, app::ASN1_1*, GetASN1_1, (app::X520_AttributeTypeAndValue * this_ptr, uint8_t encoding))
    IL2CPP_REGISTER_METHOD(0x0316BC90, app::ASN1_1*, GetASN1_2, (app::X520_AttributeTypeAndValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316C170, app::Byte__Array*, GetBytes_1, (app::X520_AttributeTypeAndValue * this_ptr, uint8_t encoding))
    IL2CPP_REGISTER_METHOD(0x0316C1A0, app::Byte__Array*, GetBytes_2, (app::X520_AttributeTypeAndValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316C1E0, uint8_t, SelectBestEncoding, (app::X520_AttributeTypeAndValue * this_ptr))
} // namespace app::classes::Mono::Security::X509::X520_AttributeTypeAndValue
