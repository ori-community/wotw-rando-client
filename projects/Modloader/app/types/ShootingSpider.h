#pragma once
#include <Modloader/app/structs/ShootingSpider.h>
#include <Modloader/app/structs/ShootingSpider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootingSpider {
        inline app::ShootingSpider__Class** type_info() {
            static app::ShootingSpider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShootingSpider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShootingSpider__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpider__Class>(type_info(), "", "ShootingSpider");
        }
        inline app::ShootingSpider* create() {
            return il2cpp::create_object<app::ShootingSpider>(get_class());
        }
    } // namespace ShootingSpider
} // namespace app::classes::types
