#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPressurePlate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPressurePlate__Class** type_info;
        inline app::IPressurePlate__Class* get_class() {
            return il2cpp::get_class<app::IPressurePlate__Class>(type_info, "", "IPressurePlate");
        }
        inline app::IPressurePlate* create() {
            return il2cpp::create_object<app::IPressurePlate>(get_class());
        }
    } // namespace IPressurePlate
} // namespace app::classes::types
