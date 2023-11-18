#pragma once
#include <Modloader/app/structs/CartBoost.h>
#include <Modloader/app/structs/CartBoost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartBoost {
        inline app::CartBoost__Class** type_info() {
            static app::CartBoost__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartBoost__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartBoost__Class* get_class() {
            return il2cpp::get_class<app::CartBoost__Class>(type_info(), "", "CartBoost");
        }
        inline app::CartBoost* create() {
            return il2cpp::create_object<app::CartBoost>(get_class());
        }
    } // namespace CartBoost
} // namespace app::classes::types
