#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageBasedPrefabProvider {
        namespace {
            app::DamageBasedPrefabProvider__Class* type_info_ref = nullptr;
        }
        app::DamageBasedPrefabProvider__Class** type_info = &type_info_ref;
        inline app::DamageBasedPrefabProvider__Class* get_class() {
            return il2cpp::get_class<app::DamageBasedPrefabProvider__Class>(type_info, "", "DamageBasedPrefabProvider");
        }
        inline app::DamageBasedPrefabProvider* create() {
            return il2cpp::create_object<app::DamageBasedPrefabProvider>(get_class());
        }
    } // namespace DamageBasedPrefabProvider
} // namespace app::classes::types
