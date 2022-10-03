#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageOwner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageOwner__Class** type_info;
        inline app::DamageOwner__Class* get_class() {
            return il2cpp::get_class<app::DamageOwner__Class>(type_info, "Moon", "DamageOwner");
        }
        inline app::DamageOwner* create() {
            return il2cpp::create_object<app::DamageOwner>(get_class());
        }
        inline app::DamageOwner__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageOwner__Array>(get_class(), size);
        }
    } // namespace DamageOwner
} // namespace app::classes::types
