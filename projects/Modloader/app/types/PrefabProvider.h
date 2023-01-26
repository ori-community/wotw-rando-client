#pragma once
#include <Modloader/app/structs/PrefabProvider.h>
#include <Modloader/app/structs/PrefabProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrefabProvider {
        inline app::PrefabProvider__Class** type_info() {
            static app::PrefabProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrefabProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrefabProvider__Class* get_class() {
            return il2cpp::get_class<app::PrefabProvider__Class>(type_info(), "", "PrefabProvider");
        }
        inline app::PrefabProvider* create() {
            return il2cpp::create_object<app::PrefabProvider>(get_class());
        }
    } // namespace PrefabProvider
} // namespace app::classes::types
