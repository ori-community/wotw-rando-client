#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrogEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrogEntity__Class** type_info;
        inline app::FrogEntity__Class* get_class() {
            return il2cpp::get_class<app::FrogEntity__Class>(type_info, "", "FrogEntity");
        }
        inline app::FrogEntity* create() {
            return il2cpp::create_object<app::FrogEntity>(get_class());
        }
        inline app::FrogEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::FrogEntity__Array>(get_class(), size);
        }
        inline app::FrogEntity__Array* create_array(const std::vector<app::FrogEntity*>& items) {
            return il2cpp::array_new<app::FrogEntity__Array>(get_class(), items);
        }
    } // namespace FrogEntity
} // namespace app::classes::types
