#pragma once
#include <Modloader/app/structs/MortarWormSettings.h>
#include <Modloader/app/structs/MortarWormSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarWormSettings {
        inline app::MortarWormSettings__Class** type_info() {
            static app::MortarWormSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarWormSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarWormSettings__Class* get_class() {
            return il2cpp::get_class<app::MortarWormSettings__Class>(type_info(), "", "MortarWormSettings");
        }
        inline app::MortarWormSettings* create() {
            return il2cpp::create_object<app::MortarWormSettings>(get_class());
        }
    } // namespace MortarWormSettings
} // namespace app::classes::types
