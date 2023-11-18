#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UriComponents__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IriHelper {
    IL2CPP_REGISTER_METHOD(0x0200D2B0, bool, CheckIriUnicodeRange_1, (char16_t unicode, bool is_query))
    IL2CPP_REGISTER_METHOD(0x0200D320, bool, CheckIriUnicodeRange_2, (char16_t high_surr, char16_t low_surr, bool* surrogate_pair, bool is_query))
    IL2CPP_REGISTER_METHOD(0x0200DBB0, bool, CheckIsReserved, (char16_t ch, app::UriComponents__Enum component))
    IL2CPP_REGISTER_METHOD(0x0200DD90, app::String*, EscapeUnescapeIri, (char16_t* p_input, int32_t start, int32_t end, app::UriComponents__Enum component))
} // namespace app::classes::System::IriHelper
