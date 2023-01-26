#pragma once
#include <Modloader/app/structs/SwarmNestPlaceholder.h>
#include <Modloader/app/structs/SwarmNestPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmNestPlaceholder {
        inline app::SwarmNestPlaceholder__Class** type_info() {
            static app::SwarmNestPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmNestPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmNestPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SwarmNestPlaceholder__Class>(type_info(), "", "SwarmNestPlaceholder");
        }
        inline app::SwarmNestPlaceholder* create() {
            return il2cpp::create_object<app::SwarmNestPlaceholder>(get_class());
        }
    } // namespace SwarmNestPlaceholder
} // namespace app::classes::types
