#pragma once
#include <Modloader/app/structs/ShootingSpiderPlaceholder.h>
#include <Modloader/app/structs/ShootingSpiderPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootingSpiderPlaceholder {
        inline app::ShootingSpiderPlaceholder__Class** type_info() {
            static app::ShootingSpiderPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShootingSpiderPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShootingSpiderPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpiderPlaceholder__Class>(type_info(), "", "ShootingSpiderPlaceholder");
        }
        inline app::ShootingSpiderPlaceholder* create() {
            return il2cpp::create_object<app::ShootingSpiderPlaceholder>(get_class());
        }
    } // namespace ShootingSpiderPlaceholder
} // namespace app::classes::types
