#pragma once
#include <Modloader/app/structs/ShootingSpider_States.h>
#include <Modloader/app/structs/ShootingSpider_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootingSpider_States {
        inline app::ShootingSpider_States__Class** type_info() {
            static app::ShootingSpider_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShootingSpider_States__Class**)(modloader::win::memory::resolve_rva(0x04727CE0));
            }
            return cache;
        }
        inline app::ShootingSpider_States__Class* get_class() {
            return il2cpp::get_nested_class<app::ShootingSpider_States__Class>(type_info(), "", "ShootingSpider", "States");
        }
        inline app::ShootingSpider_States* create() {
            return il2cpp::create_object<app::ShootingSpider_States>(get_class());
        }
    } // namespace ShootingSpider_States
} // namespace app::classes::types
