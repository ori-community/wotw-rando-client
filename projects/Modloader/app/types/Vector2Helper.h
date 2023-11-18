#pragma once
#include <Modloader/app/structs/Vector2Helper.h>
#include <Modloader/app/structs/Vector2Helper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vector2Helper {
        inline app::Vector2Helper__Class** type_info() {
            static app::Vector2Helper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Vector2Helper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Vector2Helper__Class* get_class() {
            return il2cpp::get_class<app::Vector2Helper__Class>(type_info(), "", "Vector2Helper");
        }
        inline app::Vector2Helper* create() {
            return il2cpp::create_object<app::Vector2Helper>(get_class());
        }
    } // namespace Vector2Helper
} // namespace app::classes::types
