#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ASN1.h>
#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/PKCS7_ContentInfo.h>
#include <Modloader/app/structs/PKCS7_ContentInfo_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::PKCS7_ContentInfo {
    IL2CPP_REGISTER_METHOD(0x025D9D10, void, ctor_1, app::PKCS7_ContentInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025D9E60, void, ctor_2, app::PKCS7_ContentInfo* this_ptr, app::String* oid)
    IL2CPP_REGISTER_METHOD(0x025D9E90, void, ctor_3, app::PKCS7_ContentInfo* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x025D9FF0, void, ctor_4, app::PKCS7_ContentInfo* this_ptr, app::ASN1* asn1)
    IL2CPP_REGISTER_METHOD(0x025DA200, app::ASN1*, get_ASN1_1, app::PKCS7_ContentInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ASN1*, get_Content_1, app::PKCS7_ContentInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Content_1, app::PKCS7_ContentInfo* this_ptr, app::ASN1* value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_ContentType_1, app::PKCS7_ContentInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ContentType_1, app::PKCS7_ContentInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x025DA210, app::ASN1*, GetASN1_1, app::PKCS7_ContentInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A47660, void, ctor_5, app::PKCS7_ContentInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A477B0, void, ctor_6, app::PKCS7_ContentInfo_1* this_ptr, app::String* oid)
    IL2CPP_REGISTER_METHOD(0x02A477E0, void, ctor_7, app::PKCS7_ContentInfo_1* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x02A47940, void, ctor_8, app::PKCS7_ContentInfo_1* this_ptr, app::ASN1_1* asn1)
    IL2CPP_REGISTER_METHOD(0x02A47B50, app::ASN1_1*, get_ASN1_2, app::PKCS7_ContentInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ASN1_1*, get_Content_2, app::PKCS7_ContentInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Content_2, app::PKCS7_ContentInfo_1* this_ptr, app::ASN1_1* value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_ContentType_2, app::PKCS7_ContentInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ContentType_2, app::PKCS7_ContentInfo_1* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02A47B60, app::ASN1_1*, GetASN1_2, app::PKCS7_ContentInfo_1* this_ptr)
} // namespace app::classes::Mono::Security::PKCS7_ContentInfo
