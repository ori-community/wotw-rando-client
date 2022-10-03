#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Globalization::TimeSpanParse_TimeSpanRawInfo {
    IL2CPP_REGISTER_METHOD(0x001D3C30, app::TimeSpanFormat_FormatLiterals, get_PositiveInvariant, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D3C70, app::TimeSpanFormat_FormatLiterals, get_NegativeInvariant, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D3CB0, app::TimeSpanFormat_FormatLiterals, get_PositiveLocalized, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D3D20, app::TimeSpanFormat_FormatLiterals, get_NegativeLocalized, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D3D90, bool, FullAppCompatMatch, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::TimeSpanFormat_FormatLiterals pattern))
    IL2CPP_REGISTER_METHOD(0x001D3DD0, bool, PartialAppCompatMatch, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::TimeSpanFormat_FormatLiterals pattern))
    IL2CPP_REGISTER_METHOD(0x001D3E10, bool, FullMatch, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::TimeSpanFormat_FormatLiterals pattern))
    IL2CPP_REGISTER_METHOD(0x001D3E50, bool, FullDMatch, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::TimeSpanFormat_FormatLiterals pattern))
    IL2CPP_REGISTER_METHOD(0x001D3E90, bool, FullHMMatch, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::TimeSpanFormat_FormatLiterals pattern))
    IL2CPP_REGISTER_METHOD(0x001D3ED0, bool, FullDHMMatch, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::TimeSpanFormat_FormatLiterals pattern))
    IL2CPP_REGISTER_METHOD(0x001D3F10, bool, FullHMSMatch, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::TimeSpanFormat_FormatLiterals pattern))
    IL2CPP_REGISTER_METHOD(0x001D3F50, bool, FullDHMSMatch, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::TimeSpanFormat_FormatLiterals pattern))
    IL2CPP_REGISTER_METHOD(0x001D3F90, bool, FullHMSFMatch, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::TimeSpanFormat_FormatLiterals pattern))
    IL2CPP_REGISTER_METHOD(0x001D3FD0, void, Init, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::DateTimeFormatInfo* dtfi))
    IL2CPP_REGISTER_METHOD(0x001D3FE0, bool, ProcessToken, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::TimeSpanParse_TimeSpanToken* tok, app::TimeSpanParse_TimeSpanResult* result))
    IL2CPP_REGISTER_METHOD(0x001D3FF0, bool, AddSep, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::String* sep, app::TimeSpanParse_TimeSpanResult* result))
    IL2CPP_REGISTER_METHOD(0x001D4000, bool, AddNum, (app::TimeSpanParse_TimeSpanRawInfo__Boxed * this_ptr, app::TimeSpanParse_TimeSpanToken num, app::TimeSpanParse_TimeSpanResult* result))
} // namespace app::classes::System::Globalization::TimeSpanParse_TimeSpanRawInfo
