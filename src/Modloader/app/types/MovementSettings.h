#pragma once
#include <Modloader/app/structs/MovementSettings.h>
#include <Modloader/app/structs/MovementSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovementSettings {
        inline app::MovementSettings__Class** type_info() {
            static app::MovementSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovementSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovementSettings__Class* get_class() {
            return il2cpp::get_class<app::MovementSettings__Class>(type_info(), "Moon", "MovementSettings");
        }
        inline app::MovementSettings* create() {
            return il2cpp::create_object<app::MovementSettings>(get_class());
        }
    } // namespace MovementSettings
} // namespace app::classes::types
