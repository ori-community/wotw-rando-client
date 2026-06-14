#pragma once
#include <Modloader/app/structs/ChakramProjectile.h>
#include <Modloader/app/structs/ChakramProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChakramProjectile {
        inline app::ChakramProjectile__Class** type_info() {
            static app::ChakramProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChakramProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChakramProjectile__Class* get_class() {
            return il2cpp::get_class<app::ChakramProjectile__Class>(type_info(), "", "ChakramProjectile");
        }
        inline app::ChakramProjectile* create() {
            return il2cpp::create_object<app::ChakramProjectile>(get_class());
        }
    } // namespace ChakramProjectile
} // namespace app::classes::types
