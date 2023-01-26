#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ASN1.h>
#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::ASN1 {
    IL2CPP_REGISTER_METHOD(0x023CF080, void, ctor_1, (app::ASN1 * this_ptr, uint8_t tag))
    IL2CPP_REGISTER_METHOD(0x0149F480, void, ctor_2, (app::ASN1 * this_ptr, uint8_t tag, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x023CF090, void, ctor_3, (app::ASN1 * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x023CF240, int32_t, get_Count_1, (app::ASN1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, uint8_t, get_Tag_1, (app::ASN1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023CF260, int32_t, get_Length_1, (app::ASN1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023CF270, app::Byte__Array*, get_Value_1, (app::ASN1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023CF3D0, void, set_Value_1, (app::ASN1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x023CF520, bool, CompareArray_1, (app::ASN1 * this_ptr, app::Byte__Array* array1, app::Byte__Array* array2))
    IL2CPP_REGISTER_METHOD(0x023CF5C0, bool, CompareValue_1, (app::ASN1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x023CF650, app::ASN1*, Add_1, (app::ASN1 * this_ptr, app::ASN1* asn1))
    IL2CPP_REGISTER_METHOD(0x023CF7E0, app::Byte__Array*, GetBytes_1, (app::ASN1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023CFFF0, void, Decode_1, (app::ASN1 * this_ptr, app::Byte__Array* asn1, int32_t* an_pos, int32_t an_length))
    IL2CPP_REGISTER_METHOD(0x023D0210, void, DecodeTLV_1, (app::ASN1 * this_ptr, app::Byte__Array* asn1, int32_t* pos, uint8_t* tag, int32_t* length, app::Byte__Array** content))
    IL2CPP_REGISTER_METHOD(0x023D0390, app::ASN1*, get_Item_1, (app::ASN1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x023D0480, app::ASN1*, Element_1, (app::ASN1 * this_ptr, int32_t index, uint8_t an_tag))
    IL2CPP_REGISTER_METHOD(0x023D0590, app::String*, ToString_1, (app::ASN1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023CF080, void, ctor_4, (app::ASN1_1 * this_ptr, uint8_t tag))
    IL2CPP_REGISTER_METHOD(0x0149F480, void, ctor_5, (app::ASN1_1 * this_ptr, uint8_t tag, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x02A36250, void, ctor_6, (app::ASN1_1 * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x023CF240, int32_t, get_Count_2, (app::ASN1_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, uint8_t, get_Tag_2, (app::ASN1_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023CF260, int32_t, get_Length_2, (app::ASN1_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A36400, app::Byte__Array*, get_Value_2, (app::ASN1_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A36560, void, set_Value_2, (app::ASN1_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x023CF520, bool, CompareArray_2, (app::ASN1_1 * this_ptr, app::Byte__Array* array1, app::Byte__Array* array2))
    IL2CPP_REGISTER_METHOD(0x023CF5C0, bool, CompareValue_2, (app::ASN1_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x02A366B0, app::ASN1_1*, Add_2, (app::ASN1_1 * this_ptr, app::ASN1_1* asn1))
    IL2CPP_REGISTER_METHOD(0x02A36840, app::Byte__Array*, GetBytes_2, (app::ASN1_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A37050, void, Decode_2, (app::ASN1_1 * this_ptr, app::Byte__Array* asn1, int32_t* an_pos, int32_t an_length))
    IL2CPP_REGISTER_METHOD(0x02A37270, void, DecodeTLV_2, (app::ASN1_1 * this_ptr, app::Byte__Array* asn1, int32_t* pos, uint8_t* tag, int32_t* length, app::Byte__Array** content))
    IL2CPP_REGISTER_METHOD(0x02A373F0, app::ASN1_1*, get_Item_2, (app::ASN1_1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02A374E0, app::ASN1_1*, Element_2, (app::ASN1_1 * this_ptr, int32_t index, uint8_t an_tag))
    IL2CPP_REGISTER_METHOD(0x02A375F0, app::String*, ToString_2, (app::ASN1_1 * this_ptr))
} // namespace app::classes::Mono::Security::ASN1
