#pragma once
#include <Modloader/app/structs/CartBody.h>
#include <Modloader/app/structs/CartBody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartBody {
        inline app::CartBody__Class** type_info() {
            static app::CartBody__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartBody__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartBody__Class* get_class() {
            return il2cpp::get_class<app::CartBody__Class>(type_info(), "", "CartBody");
        }
        inline app::CartBody* create() {
            return il2cpp::create_object<app::CartBody>(get_class());
        }
    } // namespace CartBody
} // namespace app::classes::types
