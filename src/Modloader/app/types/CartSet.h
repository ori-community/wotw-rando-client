#pragma once
#include <Modloader/app/structs/CartSet.h>
#include <Modloader/app/structs/CartSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartSet {
        inline app::CartSet__Class** type_info() {
            static app::CartSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartSet__Class* get_class() {
            return il2cpp::get_class<app::CartSet__Class>(type_info(), "", "CartSet");
        }
        inline app::CartSet* create() {
            return il2cpp::create_object<app::CartSet>(get_class());
        }
    } // namespace CartSet
} // namespace app::classes::types
