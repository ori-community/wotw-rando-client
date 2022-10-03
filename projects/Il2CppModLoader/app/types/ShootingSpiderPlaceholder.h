#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShootingSpiderPlaceholder {
        namespace {
            app::ShootingSpiderPlaceholder__Class* type_info_ref = nullptr;
        }
        app::ShootingSpiderPlaceholder__Class** type_info = &type_info_ref;
        inline app::ShootingSpiderPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpiderPlaceholder__Class>(type_info, "", "ShootingSpiderPlaceholder");
        }
        inline app::ShootingSpiderPlaceholder* create() {
            return il2cpp::create_object<app::ShootingSpiderPlaceholder>(get_class());
        }
    } // namespace ShootingSpiderPlaceholder
} // namespace app::classes::types
