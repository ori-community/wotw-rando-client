#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Globalization::HebrewNumber {
    IL2CPP_REGISTER_METHOD(0x02613650, app::String*, ToString, (int32_t number))
    IL2CPP_REGISTER_METHOD(0x02613FB0, app::HebrewNumberParsingState__Enum, ParseByChar, (uint16_t ch, app::HebrewNumberParsingContext* context))
    IL2CPP_REGISTER_METHOD(0x02614260, bool, IsDigit, (uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x026143B0, void, cctor, ())
} // namespace app::classes::System::Globalization::HebrewNumber
