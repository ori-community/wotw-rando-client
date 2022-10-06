#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Boid {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Boid__Class** type_info;
        inline app::Boid__Class* get_class() {
            return il2cpp::get_class<app::Boid__Class>(type_info, "", "Boid");
        }
        inline app::Boid* create() {
            return il2cpp::create_object<app::Boid>(get_class());
        }
        inline app::Boid__Array* create_array(int size) {
            return il2cpp::array_new<app::Boid__Array>(get_class(), size);
        }
        inline app::Boid__Array* create_array(const std::vector<app::Boid*>& items) {
            return il2cpp::array_new<app::Boid__Array>(get_class(), items);
        }
    } // namespace Boid
} // namespace app::classes::types
