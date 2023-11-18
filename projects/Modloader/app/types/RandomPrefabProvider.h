#pragma once
#include <Modloader/app/structs/RandomPrefabProvider.h>
#include <Modloader/app/structs/RandomPrefabProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RandomPrefabProvider {
        inline app::RandomPrefabProvider__Class** type_info() {
            static app::RandomPrefabProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RandomPrefabProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RandomPrefabProvider__Class* get_class() {
            return il2cpp::get_class<app::RandomPrefabProvider__Class>(type_info(), "", "RandomPrefabProvider");
        }
        inline app::RandomPrefabProvider* create() {
            return il2cpp::create_object<app::RandomPrefabProvider>(get_class());
        }
    } // namespace RandomPrefabProvider
} // namespace app::classes::types
