#pragma once
#include <Modloader/app/structs/KwolokBossSettings.h>
#include <Modloader/app/structs/KwolokBossSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossSettings {
        inline app::KwolokBossSettings__Class** type_info() {
            static app::KwolokBossSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossSettings__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossSettings__Class>(type_info(), "", "KwolokBossSettings");
        }
        inline app::KwolokBossSettings* create() {
            return il2cpp::create_object<app::KwolokBossSettings>(get_class());
        }
    } // namespace KwolokBossSettings
} // namespace app::classes::types
