#pragma once
#include <Modloader/app/structs/CartSettings.h>
#include <Modloader/app/structs/CartSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartSettings {
        inline app::CartSettings__Class** type_info() {
            static app::CartSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartSettings__Class* get_class() {
            return il2cpp::get_class<app::CartSettings__Class>(type_info(), "", "CartSettings");
        }
        inline app::CartSettings* create() {
            return il2cpp::create_object<app::CartSettings>(get_class());
        }
    } // namespace CartSettings
} // namespace app::classes::types
