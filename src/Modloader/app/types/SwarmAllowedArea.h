#pragma once
#include <Modloader/app/structs/SwarmAllowedArea.h>
#include <Modloader/app/structs/SwarmAllowedArea__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmAllowedArea {
        inline app::SwarmAllowedArea__Class** type_info() {
            static app::SwarmAllowedArea__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmAllowedArea__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmAllowedArea__Class* get_class() {
            return il2cpp::get_class<app::SwarmAllowedArea__Class>(type_info(), "", "SwarmAllowedArea");
        }
        inline app::SwarmAllowedArea* create() {
            return il2cpp::create_object<app::SwarmAllowedArea>(get_class());
        }
    } // namespace SwarmAllowedArea
} // namespace app::classes::types
