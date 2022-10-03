#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropPickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DropPickup__Class** type_info;
        inline app::DropPickup__Class* get_class() {
            return il2cpp::get_class<app::DropPickup__Class>(type_info, "", "DropPickup");
        }
        inline app::DropPickup* create() {
            return il2cpp::create_object<app::DropPickup>(get_class());
        }
        inline app::DropPickup__Array* create_array(int size) {
            return il2cpp::array_new<app::DropPickup__Array>(get_class(), size);
        }
    } // namespace DropPickup
} // namespace app::classes::types
