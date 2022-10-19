#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChargeShotProjectile {
        namespace {
            inline app::ChargeShotProjectile__Class* type_info_ref = nullptr;
        }
        inline app::ChargeShotProjectile__Class** type_info = &type_info_ref;
        inline app::ChargeShotProjectile__Class* get_class() {
            return il2cpp::get_class<app::ChargeShotProjectile__Class>(type_info, "", "ChargeShotProjectile");
        }
        inline app::ChargeShotProjectile* create() {
            return il2cpp::create_object<app::ChargeShotProjectile>(get_class());
        }
    } // namespace ChargeShotProjectile
} // namespace app::classes::types
