#pragma once
#include <Modloader/app/structs/ComboMoveSettings.h>
#include <Modloader/app/structs/ComboMoveSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComboMoveSettings {
        inline app::ComboMoveSettings__Class** type_info() {
            static app::ComboMoveSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComboMoveSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComboMoveSettings__Class* get_class() {
            return il2cpp::get_class<app::ComboMoveSettings__Class>(type_info(), "Moon.ComboSystem", "ComboMoveSettings");
        }
        inline app::ComboMoveSettings* create() {
            return il2cpp::create_object<app::ComboMoveSettings>(get_class());
        }
    } // namespace ComboMoveSettings
} // namespace app::classes::types
