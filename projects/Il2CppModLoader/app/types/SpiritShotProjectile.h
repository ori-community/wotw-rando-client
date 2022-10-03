#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShotProjectile {
        namespace {
            app::SpiritShotProjectile__Class* type_info_ref = nullptr;
        }
        app::SpiritShotProjectile__Class** type_info = &type_info_ref;
        inline app::SpiritShotProjectile__Class* get_class() {
            return il2cpp::get_class<app::SpiritShotProjectile__Class>(type_info, "", "SpiritShotProjectile");
        }
        inline app::SpiritShotProjectile* create() {
            return il2cpp::create_object<app::SpiritShotProjectile>(get_class());
        }
    } // namespace SpiritShotProjectile
} // namespace app::classes::types
