#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::CultureInfoConverter_CultureInfoMapper {
    IL2CPP_REGISTER_METHOD(0x01FDB8C0, app::String*, GetCultureInfoName, (app::String * culture_info_display_name))
    IL2CPP_REGISTER_METHOD(0x01FDB9E0, void, InitializeCultureInfoMap, ())
} // namespace app::classes::System::ComponentModel::CultureInfoConverter_CultureInfoMapper
