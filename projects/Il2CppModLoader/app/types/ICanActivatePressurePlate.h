#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICanActivatePressurePlate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICanActivatePressurePlate__Class** type_info;
        inline app::ICanActivatePressurePlate__Class* get_class() {
            return il2cpp::get_class<app::ICanActivatePressurePlate__Class>(type_info, "", "ICanActivatePressurePlate");
        }
        inline app::ICanActivatePressurePlate__Array* create_array(int size) {
            return il2cpp::array_new<app::ICanActivatePressurePlate__Array>(get_class(), size);
        }
        inline app::ICanActivatePressurePlate__Array* create_array(const std::vector<app::ICanActivatePressurePlate*>& items) {
            return il2cpp::array_new<app::ICanActivatePressurePlate__Array>(get_class(), items);
        }
    } // namespace ICanActivatePressurePlate
} // namespace app::classes::types
