#pragma once
#include <Modloader/app/structs/DamageTypePrefabPair.h>
#include <Modloader/app/structs/DamageTypePrefabPair__Array.h>
#include <Modloader/app/structs/DamageTypePrefabPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageTypePrefabPair {
        inline app::DamageTypePrefabPair__Class** type_info() {
            static app::DamageTypePrefabPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageTypePrefabPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageTypePrefabPair__Class* get_class() {
            return il2cpp::get_class<app::DamageTypePrefabPair__Class>(type_info(), "", "DamageTypePrefabPair");
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
