#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkUtilities_ShortIDGenerator {
    IL2CPP_REGISTER_METHOD(0x027009B0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02700A70, uint8_t, get_HashSize, ())
    IL2CPP_REGISTER_METHOD(0x02700B10, void, set_HashSize, (uint8_t value))
    IL2CPP_REGISTER_METHOD(0x02700BE0, uint32_t, Compute, (app::String * in_name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AkUtilities_ShortIDGenerator * this_ptr))
}
