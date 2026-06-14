#pragma once
#include <Modloader/app/structs/SeinPrefabSet.h>
#include <Modloader/app/structs/SeinPrefabSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPrefabSet {
        inline app::SeinPrefabSet__Class** type_info() {
            static app::SeinPrefabSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPrefabSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPrefabSet__Class* get_class() {
            return il2cpp::get_class<app::SeinPrefabSet__Class>(type_info(), "", "SeinPrefabSet");
        }
        inline app::SeinPrefabSet* create() {
            return il2cpp::create_object<app::SeinPrefabSet>(get_class());
        }
    } // namespace SeinPrefabSet
} // namespace app::classes::types
