#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Globalization::Unicode::SortKeyBuffer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SortKeyBuffer * this_ptr, int32_t lcid))
    IL2CPP_REGISTER_METHOD(0x023C4400, void, Reset, (app::SortKeyBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023C4420, void, Initialize, (app::SortKeyBuffer * this_ptr, app::CompareOptions__Enum options, int32_t lcid, app::String* s, bool french_sort))
    IL2CPP_REGISTER_METHOD(0x023C45F0, void, AppendCJKExtension, (app::SortKeyBuffer * this_ptr, uint8_t lv1msb, uint8_t lv1lsb))
    IL2CPP_REGISTER_METHOD(0x023C46D0, void, AppendKana, (app::SortKeyBuffer * this_ptr, uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3, bool is_small_kana, uint8_t mark_type, bool is_katakana, bool is_half_width))
    IL2CPP_REGISTER_METHOD(0x023C47A0, void, AppendNormal, (app::SortKeyBuffer * this_ptr, uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3))
    IL2CPP_REGISTER_METHOD(0x023C49D0, void, AppendLevel5, (app::SortKeyBuffer * this_ptr, uint8_t category, uint8_t lv1))
    IL2CPP_REGISTER_METHOD(0x023C4AB0, void, AppendBufferPrimitive, (app::SortKeyBuffer * this_ptr, uint8_t value, app::Byte__Array** buf, int32_t* bidx))
    IL2CPP_REGISTER_METHOD(0x023C4BB0, app::SortKey*, GetResultAndReset, (app::SortKeyBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023C4BE0, int32_t, GetOptimizedLength, (app::SortKeyBuffer * this_ptr, app::Byte__Array* data, int32_t len, uint8_t default_value))
    IL2CPP_REGISTER_METHOD(0x023C4C40, app::SortKey*, GetResult, (app::SortKeyBuffer * this_ptr))
} // namespace app::classes::Mono::Globalization::Unicode::SortKeyBuffer
