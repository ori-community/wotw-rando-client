#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::X509::SafeBag {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_1, (app::SafeBag * this_ptr, app::String* bag_o_i_d, app::ASN1* asn1))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_BagOID_1, (app::SafeBag * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ASN1*, get_ASN1_1, (app::SafeBag * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_2, (app::SafeBag_1 * this_ptr, app::String* bag_o_i_d, app::ASN1_1* asn1))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_BagOID_2, (app::SafeBag_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ASN1_1*, get_ASN1_2, (app::SafeBag_1 * this_ptr))
} // namespace app::classes::Mono::Security::X509::SafeBag
