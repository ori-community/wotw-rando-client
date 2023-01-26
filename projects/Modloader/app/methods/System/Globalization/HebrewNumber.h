#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/HebrewNumberParsingContext.h>
#include <Modloader/app/structs/HebrewNumberParsingState__Enum.h>

namespace app::classes::System::Globalization::HebrewNumber {
    IL2CPP_REGISTER_METHOD(0x02613650, app::String*, ToString, (int32_t number))
    IL2CPP_REGISTER_METHOD(0x02613FB0, app::HebrewNumberParsingState__Enum, ParseByChar, (char16_t ch, app::HebrewNumberParsingContext* context))
    IL2CPP_REGISTER_METHOD(0x02614260, bool, IsDigit, (char16_t ch))
    IL2CPP_REGISTER_METHOD(0x026143B0, void, cctor, ())
} // namespace app::classes::System::Globalization::HebrewNumber
