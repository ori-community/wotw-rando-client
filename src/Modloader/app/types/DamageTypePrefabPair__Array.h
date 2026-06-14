#pragma once
#include <Modloader/app/structs/DamageTypePrefabPair__Array.h>
#include <Modloader/app/structs/DamageTypePrefabPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageTypePrefabPair__Array {
        inline app::DamageTypePrefabPair__Array__Class** type_info() {
            static app::DamageTypePrefabPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageTypePrefabPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageTypePrefabPair__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageTypePrefabPair__Array__Class>(type_info(), "", "DamageTypePrefabPair[]");
        }
        inline app::DamageTypePrefabPair__Array* create() {
            return il2cpp::create_object<app::DamageTypePrefabPair__Array>(get_class());
        }
    } // namespace DamageTypePrefabPair__Array
} // namespace app::classes::types
