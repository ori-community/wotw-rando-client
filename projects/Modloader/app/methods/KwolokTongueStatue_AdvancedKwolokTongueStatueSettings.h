#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/KwolokTongueStatue_AdvancedKwolokTongueStatueSettings.h>

namespace app::classes::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings {
    IL2CPP_REGISTER_METHOD(0x00EFAEB0, app::Vector3, get_ResolvedPartiallyOpenedLocalPosition, (app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFB010, void, ctor, (app::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings * this_ptr))
} // namespace app::classes::KwolokTongueStatue_AdvancedKwolokTongueStatueSettings
