#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EraInfo.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Globalization::EraInfo {
    IL2CPP_REGISTER_METHOD(0x02610550, void, ctor_1, (app::EraInfo * this_ptr, int32_t era, int32_t start_year, int32_t start_month, int32_t start_day, int32_t year_offset, int32_t min_era_year, int32_t max_era_year))
    IL2CPP_REGISTER_METHOD(0x026105C0, void, ctor_2, (app::EraInfo * this_ptr, int32_t era, int32_t start_year, int32_t start_month, int32_t start_day, int32_t year_offset, int32_t min_era_year, int32_t max_era_year, app::String* era_name, app::String* abbrev_era_name, app::String* english_era_name))
} // namespace app::classes::System::Globalization::EraInfo
