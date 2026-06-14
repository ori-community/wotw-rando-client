#pragma once
#include <Modloader/app/structs/Vector2DebugMenuItem.h>
#include <Modloader/app/structs/Vector2DebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vector2DebugMenuItem {
        inline app::Vector2DebugMenuItem__Class** type_info() {
            static app::Vector2DebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Vector2DebugMenuItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Vector2DebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::Vector2DebugMenuItem__Class>(type_info(), "", "Vector2DebugMenuItem");
        }
        inline app::Vector2DebugMenuItem* create() {
            return il2cpp::create_object<app::Vector2DebugMenuItem>(get_class());
        }
    } // namespace Vector2DebugMenuItem
} // namespace app::classes::types
