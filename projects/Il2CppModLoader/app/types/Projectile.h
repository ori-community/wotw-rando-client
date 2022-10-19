#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Projectile {
        inline app::Projectile__Class** type_info = (app::Projectile__Class**)(modloader::win::memory::resolve_rva(0x047469A0));
        inline app::Projectile__Class* get_class() {
            return il2cpp::get_class<app::Projectile__Class>(type_info, "", "Projectile");
        }
        inline app::Projectile* create() {
            return il2cpp::create_object<app::Projectile>(get_class());
        }
        inline app::Projectile__Array* create_array(int size) {
            return il2cpp::array_new<app::Projectile__Array>(get_class(), size);
        }
        inline app::Projectile__Array* create_array(const std::vector<app::Projectile*>& items) {
            return il2cpp::array_new<app::Projectile__Array>(get_class(), items);
        }
    } // namespace Projectile
} // namespace app::classes::types
