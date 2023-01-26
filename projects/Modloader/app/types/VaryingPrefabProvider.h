#pragma once
#include <Modloader/app/structs/VaryingPrefabProvider.h>
#include <Modloader/app/structs/VaryingPrefabProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VaryingPrefabProvider {
        inline app::VaryingPrefabProvider__Class** type_info() {
            static app::VaryingPrefabProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VaryingPrefabProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VaryingPrefabProvider__Class* get_class() {
            return il2cpp::get_class<app::VaryingPrefabProvider__Class>(type_info(), "", "VaryingPrefabProvider");
        }
        inline app::VaryingPrefabProvider* create() {
            return il2cpp::create_object<app::VaryingPrefabProvider>(get_class());
        }
    } // namespace VaryingPrefabProvider
} // namespace app::classes::types
