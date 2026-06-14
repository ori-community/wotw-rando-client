#pragma once
#include <Modloader/app/structs/BoidSettings.h>
#include <Modloader/app/structs/BoidSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoidSettings {
        inline app::BoidSettings__Class** type_info() {
            static app::BoidSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BoidSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BoidSettings__Class* get_class() {
            return il2cpp::get_class<app::BoidSettings__Class>(type_info(), "", "BoidSettings");
        }
        inline app::BoidSettings* create() {
            return il2cpp::create_object<app::BoidSettings>(get_class());
        }
    } // namespace BoidSettings
} // namespace app::classes::types
