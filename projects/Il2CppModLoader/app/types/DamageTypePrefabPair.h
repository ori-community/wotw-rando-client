#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageTypePrefabPair {
        namespace {
            app::DamageTypePrefabPair__Class* type_info_ref = nullptr;
        }
        app::DamageTypePrefabPair__Class** type_info = &type_info_ref;
        inline app::DamageTypePrefabPair__Class* get_class() {
            return il2cpp::get_class<app::DamageTypePrefabPair__Class>(type_info, "", "DamageTypePrefabPair");
        }
        inline app::DamageTypePrefabPair* create() {
            return il2cpp::create_object<app::DamageTypePrefabPair>(get_class());
        }
        inline app::DamageTypePrefabPair__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageTypePrefabPair__Array>(get_class(), size);
        }
        inline app::DamageTypePrefabPair__Array* create_array(const std::vector<app::DamageTypePrefabPair*>& items) {
            return il2cpp::array_new<app::DamageTypePrefabPair__Array>(get_class(), items);
        }
    } // namespace DamageTypePrefabPair
} // namespace app::classes::types
