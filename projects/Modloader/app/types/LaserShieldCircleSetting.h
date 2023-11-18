#pragma once
#include <Modloader/app/structs/LaserShieldCircleSetting.h>
#include <Modloader/app/structs/LaserShieldCircleSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShieldCircleSetting {
        inline app::LaserShieldCircleSetting__Class** type_info() {
            static app::LaserShieldCircleSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShieldCircleSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShieldCircleSetting__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldCircleSetting__Class>(type_info(), "", "LaserShieldCircleSetting");
        }
        inline app::LaserShieldCircleSetting* create() {
            return il2cpp::create_object<app::LaserShieldCircleSetting>(get_class());
        }
    } // namespace LaserShieldCircleSetting
} // namespace app::classes::types
