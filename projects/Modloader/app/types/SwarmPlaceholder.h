#pragma once
#include <Modloader/app/structs/SwarmPlaceholder.h>
#include <Modloader/app/structs/SwarmPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmPlaceholder {
        inline app::SwarmPlaceholder__Class** type_info() {
            static app::SwarmPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SwarmPlaceholder__Class>(type_info(), "", "SwarmPlaceholder");
        }
        inline app::SwarmPlaceholder* create() {
            return il2cpp::create_object<app::SwarmPlaceholder>(get_class());
        }
    } // namespace SwarmPlaceholder
} // namespace app::classes::types
