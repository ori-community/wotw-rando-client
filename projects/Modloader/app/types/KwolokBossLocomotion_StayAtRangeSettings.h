#pragma once
#include <Modloader/app/structs/KwolokBossLocomotion_StayAtRangeSettings.h>
#include <Modloader/app/structs/KwolokBossLocomotion_StayAtRangeSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_StayAtRangeSettings {
        inline app::KwolokBossLocomotion_StayAtRangeSettings__Class** type_info() {
            static app::KwolokBossLocomotion_StayAtRangeSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossLocomotion_StayAtRangeSettings__Class**)(modloader::win::memory::resolve_rva(0x0475F7C8));
            }
            return cache;
        }
        inline app::KwolokBossLocomotion_StayAtRangeSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_StayAtRangeSettings__Class>(type_info(), "", "KwolokBossLocomotion", "StayAtRangeSettings");
        }
        inline app::KwolokBossLocomotion_StayAtRangeSettings* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_StayAtRangeSettings>(get_class());
        }
    } // namespace KwolokBossLocomotion_StayAtRangeSettings
} // namespace app::classes::types
