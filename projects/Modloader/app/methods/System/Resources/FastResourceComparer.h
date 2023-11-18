#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FastResourceComparer.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Resources::FastResourceComparer {
    IL2CPP_REGISTER_METHOD(0x02699220, int32_t, GetHashCode_1, (app::FastResourceComparer * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x026992F0, int32_t, GetHashCode_2, (app::FastResourceComparer * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x02699390, int32_t, HashFunction, (app::String * key))
    IL2CPP_REGISTER_METHOD(0x026994B0, int32_t, Compare_1, (app::FastResourceComparer * this_ptr, app::Object* a, app::Object* b))
    IL2CPP_REGISTER_METHOD(0x026995F0, int32_t, Compare_2, (app::FastResourceComparer * this_ptr, app::String* a, app::String* b))
    IL2CPP_REGISTER_METHOD(0x02022840, bool, Equals_1, (app::FastResourceComparer * this_ptr, app::String* a, app::String* b))
    IL2CPP_REGISTER_METHOD(0x02699640, bool, Equals_2, (app::FastResourceComparer * this_ptr, app::Object* a, app::Object* b))
    IL2CPP_REGISTER_METHOD(0x02699750, int32_t, CompareOrdinal_1, (app::String * a, app::Byte__Array* bytes, int32_t b_char_length))
    IL2CPP_REGISTER_METHOD(0x02699830, int32_t, CompareOrdinal_2, (app::Byte__Array * bytes, int32_t a_char_length, app::String* b))
    IL2CPP_REGISTER_METHOD(0x02699980, int32_t, CompareOrdinal_3, (uint8_t * a, int32_t byte_len, app::String* b))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FastResourceComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02699A30, void, cctor, ())
} // namespace app::classes::System::Resources::FastResourceComparer
