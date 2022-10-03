#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpikeProjectile {
        namespace {
            app::SpikeProjectile__Class* type_info_ref = nullptr;
        }
        app::SpikeProjectile__Class** type_info = &type_info_ref;
        inline app::SpikeProjectile__Class* get_class() {
            return il2cpp::get_class<app::SpikeProjectile__Class>(type_info, "", "SpikeProjectile");
        }
        inline app::SpikeProjectile* create() {
            return il2cpp::create_object<app::SpikeProjectile>(get_class());
        }
    } // namespace SpikeProjectile
} // namespace app::classes::types
