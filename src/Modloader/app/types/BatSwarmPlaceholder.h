#pragma once
#include <Modloader/app/structs/BatSwarmPlaceholder.h>
#include <Modloader/app/structs/BatSwarmPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BatSwarmPlaceholder {
        inline app::BatSwarmPlaceholder__Class** type_info() {
            static app::BatSwarmPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BatSwarmPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BatSwarmPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::BatSwarmPlaceholder__Class>(type_info(), "", "BatSwarmPlaceholder");
        }
        inline app::BatSwarmPlaceholder* create() {
            return il2cpp::create_object<app::BatSwarmPlaceholder>(get_class());
        }
    } // namespace BatSwarmPlaceholder
} // namespace app::classes::types
