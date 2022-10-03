#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChargeShotCollider_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChargeShotCollider_c__Class** type_info;
        inline app::ChargeShotCollider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ChargeShotCollider_c__Class>(type_info, "", "ChargeShotCollider", "<>c");
        }
        inline app::ChargeShotCollider_c* create() {
            return il2cpp::create_object<app::ChargeShotCollider_c>(get_class());
        }
    } // namespace ChargeShotCollider_c
} // namespace app::classes::types
