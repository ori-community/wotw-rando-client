#pragma once
#include <Modloader/app/structs/PrefabPlaceholder.h>
#include <Modloader/app/structs/PrefabPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrefabPlaceholder {
        inline app::PrefabPlaceholder__Class** type_info() {
            static app::PrefabPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrefabPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrefabPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::PrefabPlaceholder__Class>(type_info(), "", "PrefabPlaceholder");
        }
        inline app::PrefabPlaceholder* create() {
            return il2cpp::create_object<app::PrefabPlaceholder>(get_class());
        }
    } // namespace PrefabPlaceholder
} // namespace app::classes::types
