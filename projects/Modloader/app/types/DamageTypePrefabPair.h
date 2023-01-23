#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageTypePrefabPair__Class.h>
#include <Modloader/app/structs/DamageTypePrefabPair.h>
#include <Modloader/app/structs/DamageTypePrefabPair__Array.h>

namespace app::classes::types {
    namespace DamageTypePrefabPair {
        namespace {
            inline app::DamageTypePrefabPair__Class* type_info_ref = nullptr;
        }
        inline app::DamageTypePrefabPair__Class** type_info = &type_info_ref;
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
