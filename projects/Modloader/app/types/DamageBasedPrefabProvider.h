#pragma once
#include <Modloader/app/structs/DamageBasedPrefabProvider.h>
#include <Modloader/app/structs/DamageBasedPrefabProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageBasedPrefabProvider {
        inline app::DamageBasedPrefabProvider__Class** type_info() {
            static app::DamageBasedPrefabProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageBasedPrefabProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageBasedPrefabProvider__Class* get_class() {
            return il2cpp::get_class<app::DamageBasedPrefabProvider__Class>(type_info(), "", "DamageBasedPrefabProvider");
        }
        inline app::DamageBasedPrefabProvider* create() {
            return il2cpp::create_object<app::DamageBasedPrefabProvider>(get_class());
        }
    } // namespace DamageBasedPrefabProvider
} // namespace app::classes::types
