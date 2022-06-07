#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::IriHelper {
    IL2CPP_REGISTER_METHOD(0x0200D2B0, bool, CheckIriUnicodeRange_1, (uint16_t unicode, bool is_query))
    IL2CPP_REGISTER_METHOD(0x0200D320, bool, CheckIriUnicodeRange_2, (uint16_t high_surr, uint16_t low_surr, bool * surrogate_pair, bool is_query))
    IL2CPP_REGISTER_METHOD(0x0200DBB0, bool, CheckIsReserved, (uint16_t ch, app::UriComponents__Enum component))
    IL2CPP_REGISTER_METHOD(0x0200DD90, app::String *, EscapeUnescapeIri, (uint16_t * p_input, int32_t start, int32_t end, app::UriComponents__Enum component))
    IL2CPP_REGISTER_METHODINFO(0x04732F18, IriHelper_EscapeUnescapeIri__MethodInfo)
}
