#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanToken.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanStandardStyles__Enum.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanResult.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanRawInfo.h>

namespace app::classes::System::Globalization::TimeSpanParse {
    IL2CPP_REGISTER_METHOD(0x01DF2000, bool, TryTimeToTicks, (bool positive, app::TimeSpanParse_TimeSpanToken days, app::TimeSpanParse_TimeSpanToken hours, app::TimeSpanParse_TimeSpanToken minutes, app::TimeSpanParse_TimeSpanToken seconds, app::TimeSpanParse_TimeSpanToken fraction, int64_t* result))
    IL2CPP_REGISTER_METHOD(0x01DF2350, app::TimeSpan, Parse, (app::String * input, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHODINFO(0x04746B50, TimeSpanParse_Parse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DF2450, bool, TryParse, (app::String * input, app::IFormatProvider* format_provider, app::TimeSpan* result))
    IL2CPP_REGISTER_METHOD(0x01DF2550, bool, TryParseTimeSpan, (app::String * input, app::TimeSpanParse_TimeSpanStandardStyles__Enum style, app::IFormatProvider* format_provider, app::TimeSpanParse_TimeSpanResult* result))
    IL2CPP_REGISTER_METHOD(0x01DF27C0, bool, ProcessTerminalState, (app::TimeSpanParse_TimeSpanRawInfo * raw, app::TimeSpanParse_TimeSpanStandardStyles__Enum style, app::TimeSpanParse_TimeSpanResult* result))
    IL2CPP_REGISTER_METHOD(0x01DF29D0, bool, ProcessTerminal_DHMSF, (app::TimeSpanParse_TimeSpanRawInfo * raw, app::TimeSpanParse_TimeSpanStandardStyles__Enum style, app::TimeSpanParse_TimeSpanResult* result))
    IL2CPP_REGISTER_METHOD(0x01DF2E50, bool, ProcessTerminal_HMS_F_D, (app::TimeSpanParse_TimeSpanRawInfo * raw, app::TimeSpanParse_TimeSpanStandardStyles__Enum style, app::TimeSpanParse_TimeSpanResult* result))
    IL2CPP_REGISTER_METHOD(0x01DF4850, bool, ProcessTerminal_HM_S_D, (app::TimeSpanParse_TimeSpanRawInfo * raw, app::TimeSpanParse_TimeSpanStandardStyles__Enum style, app::TimeSpanParse_TimeSpanResult* result))
    IL2CPP_REGISTER_METHOD(0x01DF5ED0, bool, ProcessTerminal_HM, (app::TimeSpanParse_TimeSpanRawInfo * raw, app::TimeSpanParse_TimeSpanStandardStyles__Enum style, app::TimeSpanParse_TimeSpanResult* result))
    IL2CPP_REGISTER_METHOD(0x01DF6280, bool, ProcessTerminal_D, (app::TimeSpanParse_TimeSpanRawInfo * raw, app::TimeSpanParse_TimeSpanStandardStyles__Enum style, app::TimeSpanParse_TimeSpanResult* result))
    IL2CPP_REGISTER_METHOD(0x01DF6610, void, cctor, ())
} // namespace app::classes::System::Globalization::TimeSpanParse
